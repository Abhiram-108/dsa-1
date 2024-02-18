def binary_search(l,left,high,x):
    if(left<=high):
        mid=((left+high)//2)
        if l[mid]==x:
            return x
    elif l[mid]>x:
        return binary_search(l,left,mid-1,x)
    elif l[mid]<x:
        return binary_search(l,mid+1,high,x)
    else:
        return -1

l=[int(x) for x in input().split()]
print(l)
a=int(input())
result=binary_search(l,0,len(l)-1,a)
print(result)