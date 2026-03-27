int __cdecl sub_8FD6D0(int a1, _BYTE *a2, __int16 a3)
{
  int result; // eax
  _WORD *i; // edx

  result = 0;
  if ( a2[0x21] )
  {
    for ( i = a2 + 2; *i != a3; i += 2 )
    {
      if ( ++result >= (unsigned __int8)a2[0x21] )
        return result;
    }
    sub_9363C0(a2, result);
    --*(_BYTE *)(a1 + 2);
    return a1;
  }
  return result;
}
