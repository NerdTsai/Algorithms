# -*- coding: <utf-8> -*-
list_st = raw_input('Please input an Orderly sequence:')#从小到大顺序
list_a = eval(list_st)
aid_val = int(raw_input('Please input number your need:'))
list_len = len(list_a)
low = 0
high = list_len-1
while low <= high:
	mid = low +(high-low)/23
	if aid_val < list_a[mid]:
		high = mid-1
	else:
		if aid_val > list_a[mid]:
			low = mid+1
		else:
			if aid_val == list_a[mid]:
				print 'The key is:'+str(mid)
				break			
