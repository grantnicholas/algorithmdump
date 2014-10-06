def deriv(*args, **kwargs):
	output = [];
	for k,v in enumerate(range(len(args))):
		if(k%2==0):
			output.append(args[k]*args[k+1]);
		else:
			output.append(args[k]-1);
	return output;

print deriv(3,2)
print deriv(3,2,5,4)

