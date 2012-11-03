i=0
while(i<10)
	total=gets()
	dif=gets()
	t=total.to_i
	d=dif.to_i
	puts("\n#{(t+d)/2}\n#{(t-d)/2}")
end