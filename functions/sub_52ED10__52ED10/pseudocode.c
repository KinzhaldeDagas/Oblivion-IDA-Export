int sub_52ED10()
{
  int result; // eax
  int v1; // ecx
  int v2; // edx

  for ( result = 0; result < 7; ++result )
  {
    v1 = 0;
    if ( dword_B110F4[result] > 0 )
    {
      v2 = 0;
      do
      {
        *(_DWORD *)(*(char **)((char *)&off_B111B8 + result * 4) + v2) = 0;
        ++v1;
        v2 += 0xC;
      }
      while ( v1 < dword_B110F4[result] );
    }
  }
  return result * 4;
}
