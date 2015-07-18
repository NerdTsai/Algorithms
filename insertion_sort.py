# -*- coding: <utf-8> -*-
list_st = raw_input('Please input a sequence:')
list_a = list_st.split(',')
list_len = len(list_a)
for a in range(0,list_len):
	list_a[a] = int(list_a[a])
for i in range(1,list_len):
	for j in range(i,0,-1):
		if list_a[j] <= list_a[j-1]:
			t = list_a[j]
			list_a[j] = list_a[j-1]
			list_a[j-1] = t
print list_a
