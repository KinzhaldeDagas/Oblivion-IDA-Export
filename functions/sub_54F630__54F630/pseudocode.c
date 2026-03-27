void __cdecl sub_54F630(void *a1, unsigned int a2, char a3)
{
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a3 )
        _memset(a1, 0, 4 * a2);
      else
        memset32(a1, 0x7F7FFFFF, a2);
    }
  }
}
