/** 
 *
 *
 *  \file      test_foo.cpp
 *  \author    Norbert
 *  \date      2017-01-08
 */
extern "C" {
#include	<foo/foo.h>
}
#include	<gtest/gtest.h>

TEST(Foo,Init)
{
    ASSERT_EQ(0,Foo_Init());
}
