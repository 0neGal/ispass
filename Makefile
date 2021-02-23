install:
	gcc ispass.c -o ispass -lcrypt
	mv ispass /usr/bin/ispass

uninstall:
	@rm /usr/bin/ispass -v
