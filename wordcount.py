import sys

# get last line of stdin
line = ""
for line in sys.stdin:
    pass

words = line.split()
print(words[0] + " " + words[1] + " " + words[2])
