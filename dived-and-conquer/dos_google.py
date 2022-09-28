from curses.textpad import rectangle


def rectangles(array):
    

    if(len(array)<4):
        return -1
    
    answer= (dict(zip(array,map(lambda x: array.count(x),array))))
    
    if(len(answer)==1):
        return 0
    x =[]
    for i in answer.keys():
        if(answer[i] >=2):
            x.append(i)
    x.sort(reverse=True)
    return(x[0]-x[1])
    
    
rectangles([911, 1, 3, 1000, 1000, 2, 2, 999, 1000, 911])