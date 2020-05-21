def IsPalindrome(word):
    if len(word) <=1:
        return True
    #first and last char dif
    elif word[0] != word[len(word)-1]:
        return False
    elif len(word) == 2:
        return True
    else:
        #word from second to second to last char
        return IsPalindrome(word[1:len(word)-1])
    
print(IsPalindrome("example"))