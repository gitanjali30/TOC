  
s = input("Enter an expression:")
if s.count('1') % 3 == 0 or s.count('0') % 3 == 0:
    print("Accepted")
else:
    print("Rejected")