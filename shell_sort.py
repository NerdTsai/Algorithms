# -*- coding: <utf-8> -*-
list_st = raw_input('Please input a sequence:')
list_a = list_st.split(',')
list_len = len(list_a)
for a in range(0,list_len):
	list_a[a] = int(list_a[a])
h=1
while h < list_len/3:
	h = h*3+1
while  h >= 1:
	for i in range(h,list_len):
		for j in range(i,0,-1*h):
			if j >= h and list_a[j] <= list_a[j-h]:
				t = list_a[j]
				list_a[j] = list_a[j-h]
				list_a[j-h] = t
	h = h/3
print list_a
