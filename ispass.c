#include <stdlib.h>
#include <string.h>
#include <shadow.h>
#include <crypt.h>

int chk(const char *plain, const char *cryptp) { return strcmp(crypt(plain, cryptp), cryptp) == 0; };;

int main(int argc, char* argv[]) {
	struct spwd* spwd;

	if (argc != 3) { return 1; };
	spwd = getspnam(argv[1]);
	if (spwd == NULL) { return 1; };
	if (!chk(argv[2], spwd->sp_pwdp)) { return 1; };

	return 0;
};

