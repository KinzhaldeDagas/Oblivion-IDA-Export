int __cdecl sub_8FD6D0(int a1, _BYTE *a2, __int16 a3)
{
  int result; // eax
  _WORD *i; // edx

  result = 0; /*0x8fd6d9*/
  if ( a2[0x21] ) /*0x8fd6d5*/
  {
    for ( i = a2 + 2; *i != a3; i += 2 ) /*0x8fd6e5*/
    {
      if ( ++result >= (unsigned __int8)a2[0x21] ) /*0x8fd6f3*/
        return result; /*0x8fd6f3*/
    }
    sub_9363C0(a2, result); /*0x8fd6f9*/
    --*(_BYTE *)(a1 + 2); /*0x8fd702*/
    return a1; /*0x8fd6fe*/
  }
  return result; /*0x8fd6f6*/
}
