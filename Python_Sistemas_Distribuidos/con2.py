from socket import *

s = socket ()

mensagem = "https://github.com/mjoaojr/Sistemas-Distribuidos.git"

IP="10.10.13.1"

PORTA=8753

CONVERTER = str.encode(mensagem, "UTF-8")


s.connect((IP,PORTA))

while True:
	s.send(CONVERTER)
	while True:
		x = s.recv (4096)
		if not x:
			break
		print(x.decode("UTF-8"))
		resposta = input("ESCREVA ")
		c = str.encode(resposta,"UTF-8")
		s.send(c)
s.close ()
