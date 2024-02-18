def bucketsort(l):
    maxi=max(l)
    size=maxi/len(l)
    bucket_list=[]
    for i in range(len(l)):
        bucket_list.append([])
    for i in range(len(l)):
        j=int(l[i]/size)
        if(j!=len(l)): 
            bucket_list[j].append(l[i])
        else:
            bucket_list[j-1].append(l[i])
    for i in range(len(l)):
        bucket_list[i].sort()
    
    b=[]
    for i in range(len(l)):
        b=b+bucket_list[i]
    print(b)                        

l=[1,8,9,7,5,5]
bucketsort(l)