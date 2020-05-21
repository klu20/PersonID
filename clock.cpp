#include <ctime>
#include <iomanip>
#include <sstream>
#include "clock.h"

/* 
This file contains the definitions of the member operations
of the class Clock.
*/

Clock::Clock()
{
   time_t now = time(0);
   struct tm *tm_ptr;

   tm_ptr = localtime(&now);
   hours = tm_ptr -> tm_hour;
   minutes = tm_ptr -> tm_min;
   seconds = tm_ptr -> tm_sec;
}

void Clock::update()
{
	time_t now = time(0);
   struct tm *tm_ptr;

   tm_ptr = localtime(&now);
   hours = tm_ptr -> tm_hour;
   minutes = tm_ptr -> tm_min;
   seconds = tm_ptr -> tm_sec;
}

int Clock::get_hours() const
{
   return hours;
}

int Clock::get_minutes() const
{
   return minutes;
}

int Clock::get_seconds() const
{
   return seconds;
}

std::string Clock::to_string() const
{
   using std::ostringstream;
   ostringstream s;

   s << std::setfill('0')
     << std::setw(2) << hours << ":"
     << std::setw(2) << minutes << ":"
     << std::setw(2) << seconds;

   return s.str();
}

std::ostream& operator<<(std::ostream& os, const Clock& c)
{
   os << c.to_string();

   return os;
}

bool Clock::operator==(const Clock& c) const
{
   if((this->hours == c.hours)
     && (this->minutes == c.minutes)
     && (this->seconds == c.seconds))
      return true;
   else
      return false;
}