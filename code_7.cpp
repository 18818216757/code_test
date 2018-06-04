class Solution {
public:
    int reverse(int x) {
        int a = 1 << 31;
        a = a - 1;
        long sum = 0;
        if (x == 0)
            return 0;
        if (x < 0) {
            if (x == a + 1)
                return 0;
            x = -x;
            do {
              if (sum*10 > a)
                  return 0;
              sum = sum * 10 + x % 10;
            } while(x = x / 10);
            sum = -sum;
        } else {
            do {
              if (sum*10 > a)
                 return 0;
              sum = sum * 10 + x % 10;
            } while(x = x / 10);
        }
        return sum;
    }
};
