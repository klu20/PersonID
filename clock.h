#ifndef CLOCK_H
#define CLOCK_H

#include <ostream>
#include <string>

/*The class Clock, with a method update()
sets the data attributes to hours, minutes,
and seconds of the current time.
*/
class Clock 
{
   public:

      Clock();
      // sets clock to current time 

      int get_hours() const;
      // returns hours 

      int get_minutes() const;
      // returns minutes 

      int get_seconds() const;
      // returns seconds 

      virtual std::string to_string() const;
      // returns a string representation of a clock,
         
      friend std::ostream& operator<<(std::ostream& os, const Clock& c);
      // output definition of an object clock 
		
		void update();
		//updates time to the current time
      bool operator==(const Clock& c) const;
      /* returns true if time stored at the clock
         equals the time stored at c */

      virtual ~Clock() {}
      // needed for delete in derived classes 

   private:

      int hours;   /* hours in 24 hour format
                      integer in the range 0..23 */
      int minutes; /* minutes in range 0..59 */
      int seconds; /* integers in range 0..61
                      allowing for leap second */
};

#endif