from datetime import datetime

#generate specific date and time string
date_str = "2022-03-17 10:45:30"

#parses inputted string into a datetime object
dte_obj = datetime.strptime(date_str, '%Y-%m-%d %H:%M:%S')

#formats datetime object as string
frmatted_date = date_obj.strftime('%m/%d/%Y %H:%M:%S')

#prints formatted date
print(formatted_date)
