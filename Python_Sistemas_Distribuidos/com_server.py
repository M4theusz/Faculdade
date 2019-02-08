from socket import *

s = socket ()

host = "10.10.13.3"
porta = 8753
s.bind ((host, porta))
s.listen (10)

while True:
        (conn, cliente) = s.accept ()

        print ("Recebi a conexao de "+str(cliente))

        while True:
                data = conn.recv (4096)

                if not data:
                        break

                print (str(cliente)+"RESPOSTA_CLIENTE:  "+data.decode("utf-8") )

                res = input ("RESPOSTA_SERVIDOR:  ")
	        
                convert = str.encode (res, "UTF-8")

               # conn.send (convert)
                conn.send(data)

        print ("Fim da conexao com "+str(cliente))

        conn.close
