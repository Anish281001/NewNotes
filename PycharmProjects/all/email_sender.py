import smtplib
from email.message import EmailMessage

email = EmailMessage()

email['from'] = 'Anish Jain'
email['to'] = 'suinakan@gmail.com'
email['subject'] = 'regarding buisness'

email.set_content('you will build an empire')

with smtplib.SMTP(host='smtp.gmail.com',port=587) as s:
  s.ehlo()
  s.starttls()
  s.login('anishjain281001@gmail.com', 'papaya@#123')
  s.sendmail(email)
  print('all good boss!!')
  