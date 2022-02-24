import unittest

# validate ISBN 10 numbers
def isValidISBN_10(num):
    size = len(num)
    
    start = 1
    if (num[9] == 'X'):
        sum = 10 
        start += 1 
    else: sum = 0 
    
    j = 0
    for i in reversed(range(start, size + 1)):     
        sum += int(num[j]) * i
        j += 1

    return (sum % 11 == 0)
        
# validate ISBN 13 numbers        
def isValidISBN_13(num):
    size = len(num)
       
    sum = 0
    j = 0
    for i in range(1, size + 1):
        if (i % 2 == 0): sum += int(num[j]) * 3
        else: sum += int(num[j])
        j += 1
        
    return (sum % 10 == 0)

def validateISBN(num):
    result = "Invalid"
    
    if (len(num) == 10):
        if (isValidISBN_10(num)):
            # convert to ISBN 13
            converted = "978" + num;

            if (converted[12] == "X"): 
                converted = converted[0:12] + "0"
        
            i = int(converted[12]) + 1
            
            while not (isValidISBN_13(converted)):
                converted = converted[0:12] + str(i)
                i += 1
                if (i > 9): i = 0
                    
            result = converted
            
    elif (len(num) == 13):
        if (isValidISBN_13(num)): result = "Valid"
    
    return result


class TestValidateISBN(unittest.TestCase):
    
    def test_1(self):
        self.assertEqual(validateISBN('9780316066525'), 'Valid')   
    def test_2(self):
        self.assertEqual(validateISBN('9783866155237'), 'Valid')
    def test_3(self):
        self.assertEqual(validateISBN('9780345453747'), 'Valid')
    def test_4(self):
        self.assertEqual(validateISBN('031606652X'), 'Invalid')
    def test_5(self):
        self.assertEqual(validateISBN('9783876155237'), 'Invalid')
    def test_6(self):
        self.assertEqual(validateISBN('0345453747'), 'Invalid')
    def test_7(self):
        self.assertEqual(validateISBN('0316066524'), '9780316066525')
    def test_8(self):
        self.assertEqual(validateISBN('3866155239'), '9783866155237')
    def test_9(self):
        self.assertEqual(validateISBN('817450494X'), '9788174504944')

if __name__ == '__main__':
    unittest.main()