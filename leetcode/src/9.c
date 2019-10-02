

bool isPalindrome(int x){
    if(x < 0)
    {
        return false;
    }
    int y = x;
    int sum = reverse(x);
    if(sum == y)
        return true;
    else
        return false;
}

int reverse(int x){
    int sum = 0;
    int tmp = 0;
    int flag = 1;
    int count = 0,t =0,pre_sum = 0;
    int y = x;
    if(x > (pow(2,31)-1)  || x < (-1)*pow(2,31))
      return 0;
    while(y != 0)
    {
      count++;
      y /= 10;
    }
    if(count == 10)
    {
      t = x % 10;
      if(t >= 3 || t*(-1) >= 3)
        return 0;
    }
    if(x < 0)
    {
      x = (-1)*x;
      flag = -1;
    }
    while(x > 0)
    {
       tmp = x %10;
        sum = sum*10 + tmp;
        if(sum > pow(2,31)/10 && (x >9))
            return 0;
        pre_sum = sum;
        x /=10;
    }
    return sum*flag;
}
