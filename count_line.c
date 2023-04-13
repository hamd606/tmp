int count_line(char s[])
{
    int lines = 0;
    int i = 0;

    while (s[i])
    {
        if (s[i] == '\n')
            lines++;
        
        i++;
    }

    return (lines);
}