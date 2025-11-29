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
bool suite_read_test_init = false;
#include "../../../../libraries/libnbtplusplus/test/write_test.h"

static read_test suite_read_test;

static CxxTest::List Tests_read_test = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_read_test( "/home/e/Pathfinder/libraries/libnbtplusplus/test/write_test.h", 36, "read_test", suite_read_test, Tests_read_test );

static class TestDescription_suite_read_test_test_stream_writer_big : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_read_test_test_stream_writer_big() : CxxTest::RealTestDescription( Tests_read_test, suiteDescription_read_test, 39, "test_stream_writer_big" ) {}
 void runTest() { suite_read_test.test_stream_writer_big(); }
} testDescription_suite_read_test_test_stream_writer_big;

static class TestDescription_suite_read_test_test_stream_writer_little : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_read_test_test_stream_writer_little() : CxxTest::RealTestDescription( Tests_read_test, suiteDescription_read_test, 73, "test_stream_writer_little" ) {}
 void runTest() { suite_read_test.test_stream_writer_little(); }
} testDescription_suite_read_test_test_stream_writer_little;

static class TestDescription_suite_read_test_test_write_payload_big : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_read_test_test_write_payload_big() : CxxTest::RealTestDescription( Tests_read_test, suiteDescription_read_test, 97, "test_write_payload_big" ) {}
 void runTest() { suite_read_test.test_write_payload_big(); }
} testDescription_suite_read_test_test_write_payload_big;

static class TestDescription_suite_read_test_test_write_bigtest : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_read_test_test_write_bigtest() : CxxTest::RealTestDescription( Tests_read_test, suiteDescription_read_test, 223, "test_write_bigtest" ) {}
 void runTest() { suite_read_test.test_write_bigtest(); }
} testDescription_suite_read_test_test_write_bigtest;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
