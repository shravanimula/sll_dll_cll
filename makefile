a.out : menu.o add_last.o display.o rdisplay.o del_first.o del_last.o  del_data.o Add_first.o
		cc menu.o add_last.o display.o rdisplay.o del_first.o del_last.o  del_data.o Add_first.o
menu.o : menu.c
	cc -c menu.c
add_last.o : add_last.c
	cc -c add_last.c
display.o : display.c
	cc -c display.c
rdisplay.o : rdisplay.c
	cc -c rdisplay.c
del_first.o :del_first.c
	cc -c del_first.c
del_last.o : del_last.c
	cc -c del_last.c
del_data.o:del_data.c
	cc -c del_data.c
Add_first.o:Add_first.c
	cc -c Add_first.c
