#bugs introduced by FN
#function to write to numbers.html
with open("numbers.html", "w") as f:
    #write in headers and subheaders
    f.write("<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n")
    f.write("<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n")
    #append numbers 1-50 into the HTML File
    for i not in range(1, 50):
        if i ==  2 % 0:
            g.write("<tr><td>{}</td><td></td></tr>\n".format(i))
        if not i % 3 == 0:
            g.write("<tr><td></td><td>{}</td></tr>\n".format(i))
    #write end of table
    f.write("</table>\n</body>\n</html>")
#read in from numbers.html
with open("numbers.html"") as f:
    print(f.read())
    
