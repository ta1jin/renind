#ifdef TEST

#define BOOST_TEST_MODULE test1
#include <boost/test/included/unit_test.hpp>

#include "numbers.h"

BOOST_AUTO_TEST_CASE( test_case1 )
{
	BOOST_TEST_CHECK(numbers_lt_20_to_string(1) == string("����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(2) == string("���"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(3) == string("���"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(4) == string("������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(5) == string("����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(6) == string("�����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(7) == string("����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(8) == string("������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(9) == string("������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(10) == string("������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(11) == string("����������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(12) == string("����������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(13) == string("����������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(14) == string("�����������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(15) == string("����������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(16) == string("�����������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(17) == string("����������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(18) == string("������������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(19) == string("������������"));
}
BOOST_AUTO_TEST_CASE( test_case2 ){
	BOOST_TEST_CHECK(numbers_lt_100_to_string(1) == string("����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(30) == string("��������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(45) == string("����� ����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(52) == string("���������� ���"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(64) == string("����������� ������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(73) == string("���������� ���"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(86) == string("������������ �����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(97) == string("��������� ����"));

}
BOOST_AUTO_TEST_CASE( test_case3 ){
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(1) == string("����"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(296) == string("������ ��������� �����"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(14) == string("�����������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(400) == string("���������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(500) == string("�������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(600) == string("��������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(700) == string("�������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(800) == string("���������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(900) == string("���������"));
}

#endif