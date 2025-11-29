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
bool suite_zlibstream_test_init = false;
#include "../../../../libraries/libnbtplusplus/test/zlibstream_test.h"

static zlibstream_test suite_zlibstream_test;

static CxxTest::List Tests_zlibstream_test = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_zlibstream_test( "/home/e/Pathfinder/libraries/libnbtplusplus/test/zlibstream_test.h", 30, "zlibstream_test", suite_zlibstream_test, Tests_zlibstream_test );

static class TestDescription_suite_zlibstream_test_test_inflate_gzip : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_zlibstream_test_test_inflate_gzip() : CxxTest::RealTestDescription( Tests_zlibstream_test, suiteDescription_zlibstream_test, 47, "test_inflate_gzip" ) {}
 void runTest() { suite_zlibstream_test.test_inflate_gzip(); }
} testDescription_suite_zlibstream_test_test_inflate_gzip;

static class TestDescription_suite_zlibstream_test_test_inflate_zlib : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_zlibstream_test_test_inflate_zlib() : CxxTest::RealTestDescription( Tests_zlibstream_test, suiteDescription_zlibstream_test, 98, "test_inflate_zlib" ) {}
 void runTest() { suite_zlibstream_test.test_inflate_zlib(); }
} testDescription_suite_zlibstream_test_test_inflate_zlib;

static class TestDescription_suite_zlibstream_test_test_inflate_corrupt : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_zlibstream_test_test_inflate_corrupt() : CxxTest::RealTestDescription( Tests_zlibstream_test, suiteDescription_zlibstream_test, 115, "test_inflate_corrupt" ) {}
 void runTest() { suite_zlibstream_test.test_inflate_corrupt(); }
} testDescription_suite_zlibstream_test_test_inflate_corrupt;

static class TestDescription_suite_zlibstream_test_test_inflate_eof : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_zlibstream_test_test_inflate_eof() : CxxTest::RealTestDescription( Tests_zlibstream_test, suiteDescription_zlibstream_test, 128, "test_inflate_eof" ) {}
 void runTest() { suite_zlibstream_test.test_inflate_eof(); }
} testDescription_suite_zlibstream_test_test_inflate_eof;

static class TestDescription_suite_zlibstream_test_test_inflate_trailing : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_zlibstream_test_test_inflate_trailing() : CxxTest::RealTestDescription( Tests_zlibstream_test, suiteDescription_zlibstream_test, 141, "test_inflate_trailing" ) {}
 void runTest() { suite_zlibstream_test.test_inflate_trailing(); }
} testDescription_suite_zlibstream_test_test_inflate_trailing;

static class TestDescription_suite_zlibstream_test_test_deflate_zlib : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_zlibstream_test_test_deflate_zlib() : CxxTest::RealTestDescription( Tests_zlibstream_test, suiteDescription_zlibstream_test, 163, "test_deflate_zlib" ) {}
 void runTest() { suite_zlibstream_test.test_deflate_zlib(); }
} testDescription_suite_zlibstream_test_test_deflate_zlib;

static class TestDescription_suite_zlibstream_test_test_deflate_gzip : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_zlibstream_test_test_deflate_gzip() : CxxTest::RealTestDescription( Tests_zlibstream_test, suiteDescription_zlibstream_test, 229, "test_deflate_gzip" ) {}
 void runTest() { suite_zlibstream_test.test_deflate_gzip(); }
} testDescription_suite_zlibstream_test_test_deflate_gzip;

static class TestDescription_suite_zlibstream_test_test_deflate_closed : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_zlibstream_test_test_deflate_closed() : CxxTest::RealTestDescription( Tests_zlibstream_test, suiteDescription_zlibstream_test, 250, "test_deflate_closed" ) {}
 void runTest() { suite_zlibstream_test.test_deflate_closed(); }
} testDescription_suite_zlibstream_test_test_deflate_closed;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
