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

  if ( !a2 )
    return this;
  v3 = *(const unsigned __int16 **)this;
  if ( *(_DWORD *)this )
  {
    v4 = wcslen(a2);
    LOWORD(v5) = *(this + 2);
    if ( (_WORD)v5 == 0xFFFF )
      v5 = wcslen(v3);
    else
      v5 = (unsigned __int16)v5;
    v6 = v5 + v4;
    if ( v6 <= *(this + 3) )
    {
      if ( v6 > 0xFFFF )
        LOWORD(v6) = 0xFFFF;
      *(this + 2) = v6;
    }
    else
    {
      BSWStringT_Set(this, v3, v6);
    }
    v7 = a2;
    while ( *v7++ )
      ;
    v9 = (char *)v7 - (char *)a2;
    v10 = (_WORD *)(*(_DWORD *)this - 2);
    do
    {
      v11 = v10[1];
      ++v10;
    }
    while ( v11 );
    qmemcpy(v10, a2, v9);
    return this;
  }
  else
  {
    BSWStringT_Set(this, a2, 0);
    return this;
  }
}
