import socket,os
p=socket.socket()
p.bind(('',6666))
p.setsockopt(socket.SOL_SOCKET,socket.SO_REUSEADDR,1)
p.listen(1)
pr,ip=p.accept()
print("正在接收密码...")
passwd=pr.recv(1024).decode()
#接收破解器发送的信息
print(passwd)
p.close()
os.system("pause")
