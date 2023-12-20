import socket
s=socket.socket(Socket.AF_IMET,socket.sock_STREAM)
host=socket.gethostname()
print(host)
port=53
s.connect((host,port))
s.send("Hello",encode())
data=s.recv1024)
s.close()
print("data is ",data.decode())
