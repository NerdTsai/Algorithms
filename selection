# -*- coding: <utf-8> -*-
list_st = raw_input('Please input a sequence:')
list_a = list_st.split(',')
list_len = len(list_a)
for a in range(0,list_len):
	list_a[a] = int(list_a[a])
for i in range(0,list_len):
	min = i
	for j in range(i+1,list_len):
		if list_a[min] >= list_a[j]:
			min = j 
	t = list_a[i]
	list_a[i] = list_a[min]
	list_a[min] = t
print list_a
