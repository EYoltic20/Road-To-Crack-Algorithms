def forming_string(text):
    # we are going to follow this pattern
    insertions = 0 

    for i in range(len(text)):
        if(i == len(text) and text[i] =="c"):
            break
        elif(text[i]== 'a'):
            if(i== len(text)-1):
                break
            if(text[i+1]!="b"):
                insertions+=2
                
        elif(text[i]=="b"):
            if(i == len(text) and text[i-1]!="a"):
                insertions+=2

            if(text[i-1] !="a"):
                if(text[i+1]!="c"):
                    insertions+=2
                else:
                    insertions+=1
                    
        elif(text[i]=="c"):
            if(i==0):
                insertions+=2
            if(i<len(text)-1 and text[i+1]!="a"  ):
                insertions+=2
    return insertions
            
        
print(forming_string("bcaaa"))