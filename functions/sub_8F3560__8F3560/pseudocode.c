int __thiscall sub_8F3560(char *this, unsigned __int16 *a2, int a3, int a4)
{
  int result; // eax
  int v6; // esi

  result = a3 - 1; /*0x8f3564*/
  if ( a3 - 1 >= 0 ) /*0x8f3565*/
  {
    v6 = a3; /*0x8f356c*/
    result = a4; /*0x8f356f*/
    do /*0x8f3592*/
    {
      *(_OWORD *)result = *(_OWORD *)(this + *a2 + 0x10); /*0x8f357c*/
      *(_DWORD *)(result + 0xC) = *a2 | 0x3F000000; /*0x8f3588*/
      result += 0x10; /*0x8f358b*/
      ++a2; /*0x8f358e*/
      --v6; /*0x8f3591*/
    }
    while ( v6 ); /*0x8f3592*/
  }
  return result; /*0x8f3596*/
}
