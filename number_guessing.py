import random

items = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
random.shuffle(items)
answer = []
answer.append(items[0]);
answer.append(items[2]);
answer.append(items[4]);
answer.append(items[8]);

match = 0
while match == 0:
	countA = 0;
	countB = 0;
	s = input("Please enter an 4 digits number: ")
	if len(s) != 4:
		print("Illegal number!")
	elif s == 'peek':
		print(answer)
	else:
		for i in range(4):
			if s[i] in answer and s[i] == answer[i]:
				countA = countA + 1
			elif s[i] in answer:
				countB = countB + 1
	
		print(s, ': ', countA, 'A', countB, 'B') 
		if countA == 4:
			match = 1
		
