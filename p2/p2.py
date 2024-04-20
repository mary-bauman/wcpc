from collections import Counter

i = str(input())
j = str(input())
j_counter = Counter(j)

if all(i.count(item) >= j_counter[item] for item in j_counter):
    print("true")
else:
    print("false")
