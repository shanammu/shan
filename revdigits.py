N= int(input("Please Enter any Number: "))
R = 0
while(N > 0):
    Rr= N %10
    R = (R *10) + Rr
    N= N //10
    print(R)
