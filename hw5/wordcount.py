import sys

# get last line of stdin
line = ""
for line in sys.stdin:
    pass

words = line.split()
print("Lines: " + words[0] + " Words: " + words[1] + " Characters: " + words[2])
