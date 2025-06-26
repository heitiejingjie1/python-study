from name import getFullName
import unittest


class NameTestCase(unittest.TestCase):
    """测试first last name"""

    def testFirstLastName(self):
        fullName = getFullName("json", "ada")
        self.assertEqual(fullName, "Json Ada")

    """测试first middle last name"""

    def testFirstMiddleLastName(self):
        fullName = getFullName("feng", "xia", "mu")
        self.assertEqual(fullName, "Feng Mu Xia")


if __name__ == "__main__":
    unittest.main()
