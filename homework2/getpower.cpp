int getpower(int x, int y)
{
    if (y<0)
        return 0;
    else if (y==0)
        return 1;
    else
        return x*getpower(x, y-1);
}

double getpower(double x, int y)
{
    if (y<0)
        return 0;
    else if (y==0)
        return 1;
    else
        return x*getpower(x, y-1);
}
