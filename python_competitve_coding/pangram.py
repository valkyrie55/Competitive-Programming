def check(str):
	l =[]
	for i in range(26):
		l.append(False)
	#iterate over the sentence and w it
	for c in str.lower():
		if not c == " ":
			l[ord(c) -ord('a')]=True
	#check the list
	for ch in l:
		if ch == False:
			return False
		else:
			return True

str = 'The quick brown fox jumps over the little lazy dog'
if check(str):
	print("YES")
else:
	print("NO")