def countit(str):
	dict = {};
	for v in str:
		if v in dict:
			dict[v] +=1;
		else:
			dict[v] = 1;

	return dict

def isAnagram(str1,str2):
	dict1 = countit(str1);
	dict2 = countit(str2);
	
	for k,v in dict1.items():
		if k not in dict2 or dict1[k] != dict2[k]:
			return False;
	return True;
	
print isAnagram('reactive', 'creative')
print isAnagram('poopeybutt', 'poopybuttz')
