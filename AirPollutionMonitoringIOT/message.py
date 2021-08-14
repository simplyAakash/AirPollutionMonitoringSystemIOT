import time
ser= serial.Serial('COM3', 9600)
# Your Account Sid and Auth Token from twilio.com/console
account_sid = 'AC948e7f1c791e330d51c87746224db2f1'
auth_token = '6a5040a26646dcf248f3d2fae6ca176e'
client = Client(account_sid, auth_token)
while True:
 while ser.inWaiting():
 ppm = ser.readline().decode()
 message1 = "Bad Air : "+str(ppm)
 message = client.messages.create(body=message1,
from_='whatsapp:+14155238886', to='whatsapp:+918838612436')
 time.sleep(10)
print(message.sid)