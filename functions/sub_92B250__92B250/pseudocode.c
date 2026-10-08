int __cdecl sub_92B250(int a1)
{
  int result; // eax

  result = a1; /*0x92b250*/
  if ( a1 ) /*0x92b256*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x92b258*/
    *(_DWORD *)a1 = &off_AA1BEC; /*0x92b25e*/
  }
  return result; /*0x92b264*/
}
