## Use python as a normal calculator in the interactive mode

# try to input expression
2 + 2
50 - 5*6
(50 - 5*6) / 4
8 / 5
3.e10 / 10

# spacial operator: the difference between / and //
10 / 3  # gives you answer as accurate as possible
10 // 3  # ignores the decimal part
10 % 3  # shows the remainder of the division
10 ** 2 # means the power of 2

# variable 
price = 10
item = 3
cost = price * item

position_start = 0
position_end = 10
time = 4
velocity = (position_end - position_start) / time

# recent answer
1 + 1  # shows 2
_ + 3  # shows 2 + 3 = 5

## String, content embraced by '
s = 'Hello!'
a = s + s
b = s * 3

# to control the string, using \t \n
s = 'Hello\tWorld\n'  # t stands for tab and n stands for new line

# string can be treated as an array/list (read only)
s = 'Hello World'
s[0]  # array/list operator []
s[3:4] # range from 3 to 4-1
s[3:7] # range from 3 to 7-1

## List
l = [1, 4, 8, 16, 25] # isotropic
l[0] # array/list operator []
l[-1] # circling back from the end, in this case is 25
l[-2:]
l[-2:3]
l[2] = 3 * 3
l[2:4] = []  # remove element from 2 to 4-1
l[:] = [] # empty all
l.append(216) # append new number

# char list
letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g']

# length of list
len(letters)

# list in list
a = ['a', 'b', 'c']
b = [1, 2, 3]
c = [a, b]

# Workout
# number guessing

# star pattern          
         *
        **
       ***
      ****
     *****
    ******
   *******
  ********
 *********