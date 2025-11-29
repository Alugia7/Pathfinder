/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
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
bool suite_nbttest_init = false;
#include "../../../../libraries/libnbtplusplus/test/nbttest.h"

static nbttest suite_nbttest;

static CxxTest::List Tests_nbttest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_nbttest( "/home/e/Pathfinder/libraries/libnbtplusplus/test/nbttest.h", 29, "nbttest", suite_nbttest, Tests_nbttest );

static class TestDescription_suite_nbttest_test_tag : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_nbttest_test_tag() : CxxTest::RealTestDescription( Tests_nbttest, suiteDescription_nbttest, 32, "test_tag" ) {}
 void runTest() { suite_nbttest.test_tag(); }
} testDescription_suite_nbttest_test_tag;

static class TestDescription_suite_nbttest_test_get_type : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_nbttest_test_get_type() : CxxTest::RealTestDescription( Tests_nbttest, suiteDescription_nbttest, 68, "test_get_type" ) {}
 void runTest() { suite_nbttest.test_get_type(); }
} testDescription_suite_nbttest_test_get_type;

static class TestDescription_suite_nbttest_test_tag_primitive : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_nbttest_test_tag_primitive() : CxxTest::RealTestDescription( Tests_nbttest, suiteDescription_nbttest, 84, "test_tag_primitive" ) {}
 void runTest() { suite_nbttest.test_tag_primitive(); }
} testDescription_suite_nbttest_test_tag_primitive;

static class TestDescription_suite_nbttest_test_tag_string : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_nbttest_test_tag_string() : CxxTest::RealTestDescription( Tests_nbttest, suiteDescription_nbttest, 113, "test_tag_string" ) {}
 void runTest() { suite_nbttest.test_tag_string(); }
} testDescription_suite_nbttest_test_tag_string;

static class TestDescription_suite_nbttest_test_tag_compound : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_nbttest_test_tag_compound() : CxxTest::RealTestDescription( Tests_nbttest, suiteDescription_nbttest, 133, "test_tag_compound" ) {}
 void runTest() { suite_nbttest.test_tag_compound(); }
} testDescription_suite_nbttest_test_tag_compound;

static class TestDescription_suite_nbttest_test_value : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_nbttest_test_value() : CxxTest::RealTestDescription( Tests_nbttest, suiteDescription_nbttest, 231, "test_value" ) {}
 void runTest() { suite_nbttest.test_value(); }
} testDescription_suite_nbttest_test_value;

static class TestDescription_suite_nbttest_test_tag_list : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_nbttest_test_tag_list() : CxxTest::RealTestDescription( Tests_nbttest, suiteDescription_nbttest, 306, "test_tag_list" ) {}
 void runTest() { suite_nbttest.test_tag_list(); }
} testDescription_suite_nbttest_test_tag_list;

static class TestDescription_suite_nbttest_test_tag_byte_array : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_nbttest_test_tag_byte_array() : CxxTest::RealTestDescription( Tests_nbttest, suiteDescription_nbttest, 376, "test_tag_byte_array" ) {}
 void runTest() { suite_nbttest.test_tag_byte_array(); }
} testDescription_suite_nbttest_test_tag_byte_array;

static class TestDescription_suite_nbttest_test_tag_int_array : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_nbttest_test_tag_int_array() : CxxTest::RealTestDescription( Tests_nbttest, suiteDescription_nbttest, 407, "test_tag_int_array" ) {}
 void runTest() { suite_nbttest.test_tag_int_array(); }
} testDescription_suite_nbttest_test_tag_int_array;

static class TestDescription_suite_nbttest_test_tag_long_array : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_nbttest_test_tag_long_array() : CxxTest::RealTestDescription( Tests_nbttest, suiteDescription_nbttest, 436, "test_tag_long_array" ) {}
 void runTest() { suite_nbttest.test_tag_long_array(); }
} testDescription_suite_nbttest_test_tag_long_array;

static class TestDescription_suite_nbttest_test_visitor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_nbttest_test_visitor() : CxxTest::RealTestDescription( Tests_nbttest, suiteDescription_nbttest, 465, "test_visitor" ) {}
 void runTest() { suite_nbttest.test_visitor(); }
} testDescription_suite_nbttest_test_visitor;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
