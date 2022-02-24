import unittest

def oneDigit (digit):
    d = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
    return d[int(digit)]

def teens (digit):
    dd = ["ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"]
    return dd[int(digit)]

def tenty (n):
    tens = ["zeroty", "tenty", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"]
    return tens[int(n)]

def tens (n):
   tens = ["twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"]
   return tens[int(n) - 2] 
    
def twoDigits (num):
    if num[0] == "1": return teens(num[1])
    else: return tens(num[0])

def threeDigits(num):
    if num[1] == "0" and num[2] == "0":
        return oneDigit(num[0]) + " hundred"
    else:
        return oneDigit(num[0]) + " hundred and"

def say(number):
    result = ""
    num = str(number)
    temp = num
    
    if (num[0] == "-"): num = num[1:]
    
    if (len(num) == 3 and num[0] == "0"): num = num[1:]   
    elif len(num) == 3:
        if len(result) > 0: result += " "
        
        result += threeDigits(num)
        num = num[1:]
        
    if (len(num) == 2 and num[0] == "0"): num = num[1:]    
    elif len(num) == 2:
        if len(result) > 0: result += " "     
        if num[0] != "0":result += twoDigits(num)
        if num[0] == "1": num = num[2:]
        else:num = num[1:]
            
    if (len(num) == 1 and num[0] == "0"):
        if result == "": result = oneDigit(num)
    elif len(num) == 1:
        if len(result) > 0: result += " "
        
        result += oneDigit(num)
        num = num[1:]
    
    if (temp[0] == "-"): return "minus " + result
    
    return result

class TestValidateISBN(unittest.TestCase):
    
    def test_1(self):
        self.assertEqual(say(0), "zero") 
    def test_2(self):
        self.assertEqual(say(11), "eleven")
    def test_3(self):
        self.assertEqual(say(14), "fourteen")
    def test_4(self):
        self.assertEqual(say(15), "fifteen")
    def test_5(self):
        self.assertEqual(say(43), "forty three")
    def test_6(self):
        self.assertEqual(say(50), "fifty")

if __name__ == '__main__':
    unittest.main()