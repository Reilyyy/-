import socket,os
#创建套接字
s=socket.socket()
#设置关闭套接字时立刻释放端口
s.setsockopt(socket.SOL_SOCKET,socket.SO_REUSEADDR,1)
#绑定服务端端口
s.bind(('',1234))
#开始监听
s.listen(1)
#账号和密码
user={"admin":"123456","user":"1234567","guest":"123456"}
#接收连接的客户端的信息
sock,addr=s.accept()
print(addr[0]+"已连接")

while 1:
	#接收客户端发送的信息
    receive=sock.recv(1024).decode()
    receive=receive.split() 
	#判断账号密码是否正确，正确发送T，错误发送F
    if user[receive[0]] == receive[1]:
        sock.send("T".encode())
        break
    else:
        sock.send("F".encode())
sock.close()
s.close()



os.system("pause")




