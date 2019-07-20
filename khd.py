import socket,os
c=socket.socket()
#连接服务端，服务端ip地址：127.0.0.1，端口：1234
c.connect(('127.0.0.1',1234))
while 1:
	uspw=input("输入账号和密码，空格隔开：")
	#发送账号密码给服务端
	c.send(uspw.encode())
	#接收服务端返回信息
	receive=c.recv(1).decode()
	if receive=="T":
		print("登录成功")
		break
c.close()
os.system("pause")

