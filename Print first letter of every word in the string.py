class Solution:
	def firstAlphabet(self, S):
		s=''
		A=[]
		A.append(S[0])
		for i in range(len(S)):
		    if(S[i]==" "):
		        A.append(S[i+1])
		return (s.join(A))



#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		S = input()
		ob = Solution()
		answer = ob.firstAlphabet(S)
		
		print(answer)
