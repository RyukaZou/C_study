def fibonacci(n):  # Fibonacci series up to n
	prev2 = 0
	prev1 = 1
	
	while prev2 < n:
		print(prev2, end=' ') # change the end operator '\n' to space ' '
		current = prev2 + prev1;
		prev2 = prev1 
		prev1 = current
	
	print()

print('name = ', __name__)
if __name__ == '__main__':
	fibonacci(10)
