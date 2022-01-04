import time

i=0

start=time.time()

while i<10000000:
    i+=1
end = time.time()

print(end-start)