# 1부터 N번까지로 수로 이루어진 순열이 있다.

# 그리고 이 순열과 연관된 "Inversion sequence"라고 부르는 수열이 있다.
# 이 수열의 i번째 원소에는 순열에서 i보다 뒤에 나오면서 i보다 작은 수의 개수가 들어간다.

# 2  4  5  1  7  6  3  8

# 위의 순열이 있다면 이것의 Inversion sequence는
# 0  1  0  2  2  1  2  0 이 된다.

# 문제는 역으로 어떤 Inversion sequence가 주어지면 이것에 해당하는 순열을 찾는 프로그램을 작성하는 것이다.

N=int(input())
a=map(int, input().split())
a=list(a)

seq=[]
for j in range(1, len(a)+1):
    seq.insert(j-a[j-1]-1, j) 

for i in range(len(seq)):
    print(seq[i], end=' ')

 # 1부터 N까지의 숫자를 하나씩 리스트에 집어넣되 그 숫자에 해당하는 Inversion sequence 값만큼의 수가 오른쪽에 있어야 한다.
 
 # Process #
 # [1]
 # [2, 1]
 # [2, 1, 3]
 # [2, 4, 1, 3]
 # [2, 4, 1, 5, 3]
 # [2, 4, 5, 1, 6, 3]
 # [2, 4, 5, 1, 7, 6, 3]
 # [2, 4, 5, 1, 7, 6, 3, 8]
 # THE END.
