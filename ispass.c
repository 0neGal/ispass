#include <stdlib.h>
#include <string.h>
#include <shadow.h>
#include <crypt.h>

int chk(const char *plain, const char *cryptp) {
	return strcmp(crypt(plain, cryptp), cryptp) == 0;
};;

int main(int argc, char* argv[]) {
	struct spwd* spwd;

	if (argc != 3) {return EXIT_FAILURE;};
	spwd = getspnam(argv[1]);
	if (spwd == NULL) {return EXIT_FAILURE;};
	if (!chk(argv[2], spwd->sp_pwdp)) {return EXIT_FAILURE;};

	return EXIT_SUCCESS;
};

