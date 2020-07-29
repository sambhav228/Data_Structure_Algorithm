def isVowel(ch) : 
	
	ch = ch.upper(); 
	return (ch == 'A' or ch == 'E'or ch == 'I' or
			ch == 'O'or ch == 'U'); 

def countVowels(string) : 

	count = 0; 
	for i in range(len(string)) : 
		
		if (isVowel(string[i])) : 
			count += 1; 
			
	return count; 

def sortArr(arr, n) : 
	
	vp = []; 

	for i in range(n) : 

		vp.append((countVowels(arr[i]),arr[i])); 

	vp.sort() 

	for i in range(len(vp)) : 
		print(vp[i][1], end= " "); 

if __name__ == "__main__" : 
	arr = [ "pointer", "array" ,"code", "for" ]; 
	n = len(arr); 

	sortArr(arr, n);
