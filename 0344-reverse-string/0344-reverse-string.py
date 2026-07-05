class Solution(object):
    def reverseString(self, s):
        n = len(s)
        i = 0
        j = n-1
        while(j>i):
            temp = s[j]
            s[j] = s[i]
            s[i] = temp

            i = i+1
            j = j-1
        return s 

        