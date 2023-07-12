void print_char(char c);

void my_print_n_ascii(int howMany)
{
    int nb= 32;
    if (howMany <= 0 || howMany>93) 
    {
        return 0;
    }

    while( nb<= howMany+32) 
    {
         nb++;
         print_char(nb); 
    }
}