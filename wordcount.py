import sys

count = 0

for line in sys.stdin:
    words = line.split()
    count += int(words[0])

print(count)