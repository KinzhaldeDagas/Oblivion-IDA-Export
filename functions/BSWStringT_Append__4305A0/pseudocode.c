unsigned __int16 *__thiscall BSWStringT_Append(unsigned __int16 *this, const unsigned __int16 *a2)
{
  const unsigned __int16 *v3; // edi
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // eax
  const unsigned __int16 *v7; // eax
  unsigned int v9; // eax
  _WORD *v10; // edi
  __int16 v11; // cx

  if ( !a2 ) /*0x4305aa*/
    return this; /*0x430668*/
  v3 = *(const unsigned __int16 **)this; /*0x4305b1*/
  if ( *(_DWORD *)this ) /*0x4305b1*/
  {
    v4 = wcslen(a2); /*0x4305bb*/
    LOWORD(v5) = *(this + 2); /*0x4305cb*/
    if ( (_WORD)v5 == 0xFFFF ) /*0x4305d9*/
      v5 = wcslen(v3); /*0x4305db*/
    else
      v5 = (unsigned __int16)v5; /*0x4305f1*/
    v6 = v5 + v4; /*0x4305f4*/
    if ( v6 <= *(this + 3) ) /*0x4305fc*/
    {
      if ( v6 > 0xFFFF ) /*0x430611*/
        LOWORD(v6) = 0xFFFF; /*0x430613*/
      *(this + 2) = v6; /*0x430618*/
    }
    else
    {
      BSWStringT_Set(this, v3, v6); /*0x430602*/
    }
    v7 = a2; /*0x43061c*/
    while ( *v7++ ) /*0x430629*/
      ; /*0x430620*/
    v9 = (char *)v7 - (char *)a2; /*0x43062d*/
    v10 = (_WORD *)(*(_DWORD *)this - 2); /*0x43062f*/
    do /*0x43063c*/
    {
      v11 = v10[1]; /*0x430632*/
      ++v10; /*0x430636*/
    }
    while ( v11 ); /*0x43063c*/
    qmemcpy(v10, a2, v9); /*0x430645*/
    return this; /*0x430651*/
  }
  else
  {
    BSWStringT_Set(this, a2, 0); /*0x43065a*/
    return this; /*0x430661*/
  }
}
