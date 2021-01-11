bool isPalindrome(int x) {
bool arr[2] = { true, false };
int revertedNumber = 0;
int tmp = x;

if (x < 0 || (x % 10 == 0 && x != 0)) 
	return false;

while (x > revertedNumber) {
	revertedNumber = revertedNumber * 10 + x % 10;
	x /= 10;
}

if (x == revertedNumber || x == revertedNumber / 10)
	return true;
else
	return false;
}