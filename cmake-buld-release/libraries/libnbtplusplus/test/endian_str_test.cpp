/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_endian_str_test_init = false;
#include "../../../../libraries/libnbtplusplus/test/endian_str_test.h"

static endian_str_test suite_endian_str_test;

static CxxTest::List Tests_endian_str_test = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_endian_str_test( "/home/e/Pathfinder/libraries/libnbtplusplus/test/endian_str_test.h", 28, "endian_str_test", suite_endian_str_test, Tests_endian_str_test );

static class TestDescription_suite_endian_str_test_test_uint : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_endian_str_test_test_uint() : CxxTest::RealTestDescription( Tests_endian_str_test, suiteDescription_endian_str_test, 31, "test_uint" ) {}
 void runTest() { suite_endian_str_test.test_uint(); }
} testDescription_suite_endian_str_test_test_uint;

static class TestDescription_suite_endian_str_test_test_sint : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_endian_str_test_test_sint() : CxxTest::RealTestDescription( Tests_endian_str_test, suiteDescription_endian_str_test, 84, "test_sint" ) {}
 void runTest() { suite_endian_str_test.test_sint(); }
} testDescription_suite_endian_str_test_test_sint;

static class TestDescription_suite_endian_str_test_test_float : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_endian_str_test_test_float() : CxxTest::RealTestDescription( Tests_endian_str_test, suiteDescription_endian_str_test, 137, "test_float" ) {}
 void runTest() { suite_endian_str_test.test_float(); }
} testDescription_suite_endian_str_test_test_float;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
