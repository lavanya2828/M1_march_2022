#include "unity.h"
 extern void login();
void setUp(void)
 {

 }
 void tearDown(void){}
 /*void passtes()
 {
  TEST_ASSERT_EQUAL(FAILED_TO_LOGIN, passtest("abcd","lmno"));
  TEST_ASSERT_EQUAL(FAILED_TO_LOGIN, passtest("lava","jklm"));
  TEST_ASSERT_EQUAL(SUCCESS, passtest("user","pass"));
}
 void ()
 {
     TEST_ASSERT_EQUAL(FAILED_TO_LOGIN, passtest("abcd","lmno"));
     TEST_ASSERT_EQUAL(FAILED_TO_LOGIN, passtest("lava","jklm"));
  TEST_ASSERT_EQUAL(SUCCESS, passtest("user","pass"));
}*/
int main()
{
UnityBegin(NULL);
RUN_TEST();
return(UnityEnd());

}


