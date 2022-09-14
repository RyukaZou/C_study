# random is a python package for generating random number
# https://www.runoob.com/python/func-number-random.html
import random

i = 0
while i <= 10:
	print (i)
	i = i + 1


flag = True
while flag:
	x = random.random()
	print(x)
	if x > 0.5:
		break; # break will break the nearest while/for

