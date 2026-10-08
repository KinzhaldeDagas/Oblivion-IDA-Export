int __cdecl sub_913C10(int a1)
{
  int result; // eax

  result = a1; /*0x913c10*/
  if ( a1 ) /*0x913c16*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x913c18*/
    *(_DWORD *)a1 = &off_A9CDE8; /*0x913c1e*/
  }
  return result; /*0x913c24*/
}
