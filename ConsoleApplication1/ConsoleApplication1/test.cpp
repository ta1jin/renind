#ifdef TEST

#define BOOST_TEST_MODULE test1
#include <boost/test/included/unit_test.hpp>

#include "numbers.h"

BOOST_AUTO_TEST_CASE( test_case1 )
{
	BOOST_TEST_CHECK(numbers_lt_20_to_string(1) == string("один"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(2) == string("два"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(3) == string("три"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(4) == string("четыре"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(5) == string("пять"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(6) == string("шесть"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(7) == string("семь"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(8) == string("восемь"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(9) == string("девять"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(10) == string("десять"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(11) == string("одинадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(12) == string("двенадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(13) == string("тринадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(14) == string("четырнадать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(15) == string("пятнадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(16) == string("шестнадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(17) == string("семнадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(18) == string("восемнадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(19) == string("девятнадцать"));
}
BOOST_AUTO_TEST_CASE( test_case2 ){
	BOOST_TEST_CHECK(numbers_lt_100_to_string(1) == string("один"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(33) == string("тридцать три"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(45) == string("сорок пять"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(52) == string("пятьдесять два"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(64) == string("шестьдесять четыре"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(73) == string("семьдесять три"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(86) == string("восемьдесять шесть"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(97) == string("девяносто семь"));

}
BOOST_AUTO_TEST_CASE( test_case3 ){
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(1) == string("один"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(296) == string("двести девяносто шесть"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(14) == string("четырнадать"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(400) == string("четыреста"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(500) == string("пятьсот"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(600) == string("шестьсот"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(700) == string("семьсот"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(800) == string("восемьсот"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(900) == string("девятьсот"));
}

#endif