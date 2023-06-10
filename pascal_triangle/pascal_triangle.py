n = int(input("Enter size of pyramid between 1 - 30: "))
x = int(input("Enter ASCII value for symbol: "))
for i in range(0, n):
	for j in range(0, n-i):
		print(end=" ")
	for j in range(1, i+1):
		ch = chr(x)
		print(ch, end=" ")
	print("\r")
