while (i < j)
{
    int sum = ans[i] + ans[j];
    if (sum == k)
    {
        return true;
    }
    else if (sum > k)
        j--;
    else
        i++;
}