LONG __thiscall sub_434C00(volatile LONG *this, __int16 a2)
{
  __int16 v2; // si
  volatile LONG *v3; // edi
  LONG result; // eax
  __int16 v5; // si
  volatile LONG *v6; // edi

  v2 = a2; /*0x434c02*/
  if ( a2 <= 0 ) /*0x434c0a*/
  {
    if ( a2 < 0 ) /*0x434c26*/
    {
      v5 = -a2; /*0x434c2a*/
      v6 = this + 1; /*0x434c38*/
      do /*0x434c49*/
      {
        --v5; /*0x434c41*/
        result = InterlockedDecrement(v6); /*0x434c44*/
      }
      while ( v5 ); /*0x434c49*/
    }
  }
  else
  {
    v3 = this + 1; /*0x434c12*/
    do /*0x434c1e*/
    {
      --v2; /*0x434c16*/
      result = InterlockedIncrement(v3); /*0x434c19*/
    }
    while ( v2 ); /*0x434c1e*/
  }
  return result; /*0x434c20*/
}
