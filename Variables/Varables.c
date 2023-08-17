#include <stdio.h>
#include <cs50.h>

int main(void)
{
  String name = get_String("what is ur name? ");
  int age = get_int("how old are u? ");
  String phone_number = get_String("what is your phone number? ");

  printf("your name is %s, you are %i years old and your phone number is %s ", name, age, phone_nmber);


}
