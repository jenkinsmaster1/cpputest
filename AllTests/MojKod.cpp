#include "mojkod.h"

#include <stdio.h>
#include <stdarg.h>
#include "CppUTest/TestHarness.h"

//static SimpleString* buffer;

TEST_GROUP(MojKod)
{ 
/*
    static int output_method(const char* output, ...)
    {
	va_list arguments;
	va_start(arguments, output);
	*buffer = VStringFromFormat(output, arguments);
	va_end(arguments);
	return 1;
    }*/
    void setup()
    {
/*	buffer = new SimpleString();
        UT_PTR_SET(PrintFormated, &output_method);
*/
    }
    void teardown()
    {
//        delete buffer;
    }
};

TEST(MojKod, PrintOk)
{
//    int w;
//    w=wynik();
//    CHECK(w==2);
//    STRCMP_EQUAL("Hello World!\n", buffer->asCharString());
}


TEST(MojKod, FirstTest)
{
    int desired[5] = {0, 1, 2, 3, 4};
    int* w;
    int array[5] = {0, 1, 2, 3, 4};
    w=bubble(array, 5);
    
    for (int i = 0; i<5; i++)
    {
      if (desired[i] != w[i])
      {
	FAIL("TEST FAILED FOR CASE 1");
	break;
      }
    }
}

TEST(MojKod, SecondTest)
{
    int desired[5] = {0, 1, 2, 3, 4};
    int* w;
    int array[5] = {4, 3, 2, 1, 0};
    w=bubble(array, 5);
    
    for (int i = 0; i<5; i++)
    {
      if (desired[i] != w[i])
      {
	FAIL("TEST FAILED FOR CASE 2");
	break;
      }
    }
}

TEST(MojKod, ThirdTest)
{
    int desired[5] = {0, 1, 2, 3, 4};
    int* w;
    int array[5] = {0, 2, 1, 3, 4};
    w=bubble(array, 5);
    
    for (int i = 0; i<5; i++)
    {
      if (desired[i] != w[i])
      {
	FAIL("TEST FAILED FOR CASE 3");
	break;
      }
    }
}

TEST(MojKod, FourthTest)
{
    int desired[5] = {0, 1, 2, 3, 4};
    int* w;
    int array[5] = {4, 2, 1, 3, 0};
    w=bubble(array, 5);
    
    for (int i = 0; i<5; i++)
    {
      if (desired[i] != w[i])
      {
	FAIL("TEST FAILED FOR CASE 4");
	break;
      }
    }
}