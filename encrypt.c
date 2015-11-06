#include <stdio.h>
#include <unistd.h>
#include <crypt.h>

int main(void)
{
  //MD5
  //char salt[] = "$1$./46123456789ABCDEFGHiJKLMNOPQRST"
    "UVWXYZabcdefghijklmnopqrstuvwxyz";
  //DES
  char salt[] = "Fk";
  char *password;

  password = crypt(getpass("Password:"), salt);

  puts(password);
  return 46;
}