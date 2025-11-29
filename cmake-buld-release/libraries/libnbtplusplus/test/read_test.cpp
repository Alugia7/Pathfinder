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
#include "../../../../libraries/libnbtplusplus/test/read_test.h"

static read_test suite_read_test;

static CxxTest::List Tests_read_test = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_read_test( "/home/e/Pathfinder/libraries/libnbtplusplus/test/read_test.h", 34, "read_test", suite_read_test, Tests_read_test );

static class TestDescription_suite_read_test_test_stream_reader_big : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_read_test_test_stream_reader_big() : CxxTest::RealTestDescription( Tests_read_test, suiteDescription_read_test, 37, "test_stream_reader_big" ) {}
 void runTest() { suite_read_test.test_stream_reader_big(); }
} testDescription_suite_read_test_test_stream_reader_big;

static class TestDescription_suite_read_test_test_stream_reader_little : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_read_test_test_stream_reader_little() : CxxTest::RealTestDescription( Tests_read_test, suiteDescription_read_test, 83, "test_stream_reader_little" ) {}
 void runTest() { suite_read_test.test_stream_reader_little(); }
} testDescription_suite_read_test_test_stream_reader_little;

static class TestDescription_suite_read_test_test_read_bigtest : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_read_test_test_read_bigtest() : CxxTest::RealTestDescription( Tests_read_test, suiteDescription_read_test, 145, "test_read_bigtest" ) {}
 void runTest() { suite_read_test.test_read_bigtest(); }
} testDescription_suite_read_test_test_read_bigtest;

static class TestDescription_suite_read_test_test_read_littletest : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_read_test_test_read_littletest() : CxxTest::RealTestDescription( Tests_read_test, suiteDescription_read_test, 156, "test_read_littletest" ) {}
 void runTest() { suite_read_test.test_read_littletest(); }
} testDescription_suite_read_test_test_read_littletest;

static class TestDescription_suite_read_test_test_read_eof1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_read_test_test_read_eof1() : CxxTest::RealTestDescription( Tests_read_test, suiteDescription_read_test, 168, "test_read_eof1" ) {}
 void runTest() { suite_read_test.test_read_eof1(); }
} testDescription_suite_read_test_test_read_eof1;

static class TestDescription_suite_read_test_test_read_eof2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_read_test_test_read_eof2() : CxxTest::RealTestDescription( Tests_read_test, suiteDescription_read_test, 180, "test_read_eof2" ) {}
 void runTest() { suite_read_test.test_read_eof2(); }
} testDescription_suite_read_test_test_read_eof2;

static class TestDescription_suite_read_test_test_read_errortest_noend : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_read_test_test_read_errortest_noend() : CxxTest::RealTestDescription( Tests_read_test, suiteDescription_read_test, 192, "test_read_errortest_noend" ) {}
 void runTest() { suite_read_test.test_read_errortest_noend(); }
} testDescription_suite_read_test_test_read_errortest_noend;

static class TestDescription_suite_read_test_test_read_errortest_neg_length : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_read_test_test_read_errortest_neg_length() : CxxTest::RealTestDescription( Tests_read_test, suiteDescription_read_test, 204, "test_read_errortest_neg_length" ) {}
 void runTest() { suite_read_test.test_read_errortest_neg_length(); }
} testDescription_suite_read_test_test_read_errortest_neg_length;

static class TestDescription_suite_read_test_test_read_misc : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_read_test_test_read_misc() : CxxTest::RealTestDescription( Tests_read_test, suiteDescription_read_test, 216, "test_read_misc" ) {}
 void runTest() { suite_read_test.test_read_misc(); }
} testDescription_suite_read_test_test_read_misc;

static class TestDescription_suite_read_test_test_read_gzip : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_read_test_test_read_gzip() : CxxTest::RealTestDescription( Tests_read_test, suiteDescription_read_test, 236, "test_read_gzip" ) {}
 void runTest() { suite_read_test.test_read_gzip(); }
} testDescription_suite_read_test_test_read_gzip;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
