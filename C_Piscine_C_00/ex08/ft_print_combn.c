#include <unistd.h>

void
print_num (char i)
{
  write (1, &i, 1);
}

void
print_num1 (void)
{
  int i;

  i = 0;
  while (i <= 9)
    {
      print_num (i % 10 + '0');
      if (i < 9)
	write (1, ", ", 2);
      i++;
    }
}

void
print_num2 (void)
{
  int i;
  int j;

  i = 0;
  while (i <= 8)
    {
      j = i + 1;
      while (j <= 9)
	{
	  print_num (i % 10 + '0');
	  print_num (j % 10 + '0');
	  j++;
	  if (i < 8)
	    write (1, ", ", 2);
	}
      i++;
    }
}

void
print_num3 ()
{
  int i;
  int j;
  int k;

  i = 0;
  while (i <= 7)
    {
      j = i + 1;
      while (j <= 8)
	{
	  k = j + 1;
	  while (k <= 9)
	    {
	      print_num (i % 10 + '0');
	      print_num (j % 10 + '0');
	      print_num (k % 10 + '0');
	      k++;
	      if (i < 7)
		write (1, ", ", 2);
	    }
	  j++;
	}
      i++;
    }
}

void
print_num4 ()
{
  int i;

  i = 0;
  int j;
  int k;
  int l;
  while (i <= 6)
    {
      j = i + 1;
      while (j <= 7)
	{
	  k = j + 1;
	  while (k <= 8)
	    {
	      l = k + 1;
	      while (l <= 9)
		{
		  print_num (i % 10 + '0');
		  print_num (j % 10 + '0');
		  print_num (k % 10 + '0');
		  print_num (l % 10 + '0');
		  l++;
		  if (i < 6)
		    write (1, ", ", 2);
		}
	      k++;
	    }
	  j++;
	}
      i++;
    }
}

void
print_num5 ()
{
  int i;

  i = 0;
  int j;
  int k;
  int l;
  int p;
  while (i <= 5)
    {
      j = i + 1;
      while (j <= 6)
	{
	  k = j + 1;
	  while (k <= 7)
	    {
	      l = k + 1;
	      while (l <= 8)
		{
		  p = l + 1;
		  while (p <= 9)
		    {
		      print_num (i % 10 + '0');
		      print_num (j % 10 + '0');
		      print_num (k % 10 + '0');
		      print_num (l % 10 + '0');
		      print_num (p % 10 + '0');
		      p++;
		      if (i < 5)
			write (1, ", ", 2);
		    }
		  l++;
		}
	      k++;
	    }
	  j++;
	}
      i++;
    }
}

void
print_num6 ()
{
  int i = 0;
  int j;
  int k;
  int l;
  int p;
  int r;
  while (i <= 4)
    {
      j = i + 1;
      while (j <= 5)
	{
	  k = j + 1;
	  while (k <= 6)
	    {
	      l = k + 1;
	      while (l <= 7)
		{
		  p = l + 1;
		  while (p <= 8)
		    {
		      r = p + 1;
		      while (r <= 9)
			{
			  print_num (i % 10 + '0');
			  print_num (j % 10 + '0');
			  print_num (k % 10 + '0');
			  print_num (l % 10 + '0');
			  print_num (p % 10 + '0');
			  print_num (r % 10 + '0');
			  r++;
			  if (i < 4)
			    write (1, ", ", 2);
			}
		      p++;
		    }
		  l++;
		}
	      k++;
	    }
	  j++;
	}
      i++;
    }
}

void
print_num7 ()
{
  int i = 0;
  int j;
  int k;
  int l;
  int p;
  int r;
  int s;
  while (i <= 3)
    {
      j = i + 1;
      while (j <= 4)
	{
	  k = j + 1;
	  while (k <= 5)
	    {
	      l = k + 1;
	      while (l <= 6)
		{
		  p = l + 1;
		  while (p <= 7)
		    {
		      r = p + 1;
		      while (r <= 8)
			{
			  s = r + 1;
			  while (s <= 9)
			    {
			      print_num (i % 10 + '0');
			      print_num (j % 10 + '0');
			      print_num (k % 10 + '0');
			      print_num (l % 10 + '0');
			      print_num (p % 10 + '0');
			      print_num (r % 10 + '0');
			      print_num (s % 10 + '0');
			      s++;
			      if (i < 3)
				write (1, ", ", 2);

			    }
			  r++;
			}
		      p++;
		    }
		  l++;
		}
	      k++;
	    }
	  j++;
	}
      i++;
    }
}

void
print_num8 ()
{
  int i = 0;
  int j;
  int k;
  int l;
  int p;
  int r;
  int s;
  int t;
  while (i <= 2)
    {
      j = i + 1;
      while (j <= 3)
	{
	  k = j + 1;
	  while (k <= 4)
	    {
	      l = k + 1;
	      while (l <= 5)
		{
		  p = l + 1;
		  while (p <= 6)
		    {
		      r = p + 1;
		      while (r <= 7)
			{
			  s = r + 1;
			  while (s <= 8)
			    {
			      t = s + 1;
			      while (t <= 9)
				{
				  print_num (i % 10 + '0');
				  print_num (j % 10 + '0');
				  print_num (k % 10 + '0');
				  print_num (l % 10 + '0');
				  print_num (p % 10 + '0');
				  print_num (r % 10 + '0');
				  print_num (s % 10 + '0');
				  print_num (t % 10 + '0');
				  t++;
				  if (i < 2)
				    write (1, ", ", 2);
				  s++;
				}
			    }
			  r++;
			}
		      p++;
		    }
		  l++;
		}
	      k++;
	    }
	  j++;
	}
      i++;
    }
}

void
print_num9 ()
{
  int i = 0;
  int j;
  int k;
  int l;
  int p;
  int r;
  int s;
  int t;
  int u;
  while (i <= 1)
    {
      j = i + 1;
      while (j <= 2)
	{
	  k = j + 1;
	  while (k <= 3)
	    {
	      l = k + 1;
	      while (l <= 4)
		{
		  p = l + 1;
		  while (p <= 5)
		    {
		      r = p + 1;
		      while (r <= 6)
			{
			  s = r + 1;
			  while (s <= 7)
			    {
			      t = s + 1;
			      while (t <= 8)
				{
				  u = t + 1;
				  while (u <= 9)
				    {
				      print_num (i % 10 + '0');
				      print_num (j % 10 + '0');
				      print_num (k % 10 + '0');
				      print_num (l % 10 + '0');
				      print_num (p % 10 + '0');
				      print_num (r % 10 + '0');
				      print_num (s % 10 + '0');
				      print_num (t % 10 + '0');
				      print_num (u % 10 + '0');
				      u++;
				      if (i < 1)
					write (1, ", ", 2);
				      t++;
				    }
				  s++;
				}
			    }
			  r++;
			}
		      p++;
		    }
		  l++;
		}
	      k++;
	    }
	  j++;
	}
      i++;
    }
}

void
ft_print_combn (int n)
{
  if (n == 1)
    print_num1 ();
  if (n == 2)
    print_num2 ();
  else if (n == 3)
    print_num3 ();
  else if (n == 4)
    print_num4 ();
  else if (n == 5)
    print_num5 ();
  else if (n == 6)
    print_num6 ();
  else if (n == 7)
    print_num7 ();
  else if (n == 8)
    print_num8 ();
  else if (n == 9)
    print_num9 ();
}
