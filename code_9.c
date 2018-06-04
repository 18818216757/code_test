bool isPalindrome(int x) {
    int num_len = 1;
    int b = x;
    int a = b;
    if (x < 0) {
        return false;
    }
    while (b = b/10) {
        num_len ++;
    }
    {
        int number[num_len];
        memset(number, 0, num_len);
        for (int i = 0; i < num_len; i ++) {
            number[i] = a % 10;
            a = a / 10;
        }
        if (num_len % 2) {
            for (int i = 0; i <= num_len/2; i ++) {
                if (number[num_len/2 - i] != number[num_len/2 + i])
                    return false;
            }
        } else {
            for (int i = 0; i < num_len/2; i ++) {
                if (number[num_len/2 - 1 - i] != number[num_len/2 + i])
                    return false;
            }
        }
    }
    return true;
}
