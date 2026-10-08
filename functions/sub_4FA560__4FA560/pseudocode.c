char __cdecl sub_4FA560(int a1)
{
  char result; // al
  int *v2; // ecx

  result = 0; /*0x4fa564*/
  if ( a1 ) /*0x4fa568*/
  {
    v2 = dword_B361CC; /*0x4fa56a*/
    while ( *v2 != a1 ) /*0x4fa572*/
    {
      v2 = (int *)v2[1]; /*0x4fa574*/
      if ( !v2 ) /*0x4fa579*/
        return result; /*0x4fa579*/
    }
    return 1; /*0x4fa57c*/
  }
  return result; /*0x4fa57b*/
}
