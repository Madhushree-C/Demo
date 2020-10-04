#include "unity.h"
#include "insurance_management.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void test_validchoice(void)
{
  TEST_ASSERT_EQUAL(1, choice('B'));
  TEST_ASSERT_EQUAL(1, choice('F'));
  TEST_ASSERT_EQUAL(1, choice('T'));
}
void test_invalidchoice(void)
{
  TEST_ASSERT_EQUAL(0, choice('P'));
  TEST_ASSERT_EQUAL(0, choice('I'));
}


void test_validusername(void)
{
  TEST_ASSERT_EQUAL(1, username("madhushree c"));
  TEST_ASSERT_EQUAL(1, username("manyatha a"));

}
void test_invalidusername(void)
{
  TEST_ASSERT_EQUAL(0, username("madhushree2698"));
  TEST_ASSERT_EQUAL(0, username("manyatha8989"));
}
void test_validpassword(void)
{
  TEST_ASSERT_EQUAL(1, password("madhu@123"));
  TEST_ASSERT_EQUAL(1, password("manyatha@123"));
}
void test_invalidpassword(void)
{
  TEST_ASSERT_EQUAL(0, password("u@123"));
  TEST_ASSERT_EQUAL(0, password("ny$ha"));
}

void test_validgender(void)
{
  TEST_ASSERT_EQUAL(1, gender('m'));
  TEST_ASSERT_EQUAL(1, gender('f'));
  TEST_ASSERT_EQUAL(1, gender('M'));
  TEST_ASSERT_EQUAL(1, gender('F'));
  TEST_ASSERT_EQUAL(1, gender('O'));
  TEST_ASSERT_EQUAL(1, gender('o'));
}
void test_invalidgender(void)
{
  TEST_ASSERT_EQUAL(0, gender('G'));
  TEST_ASSERT_EQUAL(0, gender('b'));
}

void test_validage(void)
{
  TEST_ASSERT_EQUAL(1, age(20));
  TEST_ASSERT_EQUAL(1, age(99));
}
void test_invalidage(void)
{
  TEST_ASSERT_EQUAL(0, age(16));
  TEST_ASSERT_EQUAL(0, age(110));
}
void test_validphonenumber(void)
{
 TEST_ASSERT_EQUAL(1, phonenumber("1234567890"));
 TEST_ASSERT_EQUAL(1, phonenumber("4536271809"));
}
void test_invalidphonenumber(void)
{
  TEST_ASSERT_EQUAL(0, phonenumber("4567890"));
  TEST_ASSERT_EQUAL(0, phonenumber("123456789011"));
}
void test_validvehicletype(void)
{
 TEST_ASSERT_EQUAL(1, vehicletype(2));
 TEST_ASSERT_EQUAL(1, vehicletype(4));
}
void test_invalidvehicletype(void)
{
  TEST_ASSERT_EQUAL(0, vehicletype(3));
  TEST_ASSERT_EQUAL(0, vehicletype(8));
}
void test_validlicensenumber(void)
{
  TEST_ASSERT_EQUAL(1, licensenumber("karnatakamysor1"));
  TEST_ASSERT_EQUAL(1, licensenumber("karnataka@mysor"));
  TEST_ASSERT_EQUAL(1, licensenumber("karnatakamysore"));
}
void test_invalidlicensenumber(void)
{
  TEST_ASSERT_EQUAL(0, licensenumber("karnatakamysoregok"));
  TEST_ASSERT_EQUAL(0, licensenumber("karnataka myso"));
}
void test_validenginenumber(void)
{
  TEST_ASSERT_EQUAL(1, enginenumber("9988776655"));
  TEST_ASSERT_EQUAL(1, enginenumber("2211332211"));
}
void test_invalidenginenumber(void)
{
  TEST_ASSERT_EQUAL(0, enginenumber("887788778877"));
  TEST_ASSERT_EQUAL(0, enginenumber("990099"));
}
 void test_validpay_pa(void)
{
  TEST_ASSERT_EQUAL(1, pay_pa(1));
}
 void test_invalidpay_pa(void)
{
  TEST_ASSERT_EQUAL(0, pay_pa(0));
}
/*void test_validpa_payment(void)
{
  TEST_ASSERT_EQUAL(1, pa_payment(1));
}
void test_invalidpa_payment(void)
{
  TEST_ASSERT_EQUAL(0, pa_payment(0));
}*/

void test_validlogin(void)
{
 TEST_ASSERT_EQUAL(1, login("Madhu","Madhu@123"));
 TEST_ASSERT_EQUAL(1, login("Indrani","Indrani@123"));
}
void test_invalidlogin(void)
{
  TEST_ASSERT_EQUAL(0, login("Madhu","madhu123"));
  TEST_ASSERT_EQUAL(0, login("Indrani","indrani@"));
}


void test_validclaim(void)
{
  TEST_ASSERT_EQUAL(1, claim("BB10954"));
  TEST_ASSERT_EQUAL(1, claim("BB13626"));
}
 void test_invalidclaim(void)
{
  TEST_ASSERT_EQUAL(0, claim("BB32591"));
  TEST_ASSERT_EQUAL(0, claim("TP3026"));
}
int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_validchoice);
  RUN_TEST(test_invalidchoice);
  RUN_TEST(test_validusername);
  RUN_TEST(test_invalidusername);
  RUN_TEST(test_validpassword);
  RUN_TEST(test_invalidpassword);
  RUN_TEST(test_validgender);
  RUN_TEST(test_invalidgender);
  RUN_TEST(test_validage);
  RUN_TEST(test_invalidage);
  RUN_TEST(test_validphonenumber);
  RUN_TEST(test_invalidphonenumber);
  RUN_TEST(test_validvehicletype);
  RUN_TEST(test_invalidvehicletype);
  RUN_TEST(test_validlicensenumber);
  RUN_TEST(test_invalidlicensenumber);
  RUN_TEST(test_validenginenumber);
  RUN_TEST(test_invalidenginenumber);
  RUN_TEST(test_validpay_pa);
  RUN_TEST(test_invalidpay_pa);
  /*RUN_TEST(test_validpa_payment);
  RUN_TEST(test_invalidpa_payment);*/
  RUN_TEST(test_validlogin);
  RUN_TEST(test_invalidlogin);
  RUN_TEST(test_validclaim);
  RUN_TEST(test_invalidclaim);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
