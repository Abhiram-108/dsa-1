from datetime import datetime as dt
import datetime
import pytz

dt.now()
print(dt.now())
tz=pytz.timezone('Singapore')
print(dt.now(tz))
print(len(pytz.all_timezones))
import calendar
x=calendar.weekday(2023,10,24)
print(x+1)
x=calendar.weekday(2003,8,10)
print(x+1)