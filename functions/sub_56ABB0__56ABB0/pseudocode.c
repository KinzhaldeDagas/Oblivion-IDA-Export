bool __thiscall sub_56ABB0(_DWORD *this, _DWORD *a2)
{
  unsigned int i; // edx
  int v5; // esi
  unsigned int v6; // edx
  unsigned __int8 *v7; // eax
  unsigned __int8 *v8; // ecx
  unsigned int v9; // edx
  unsigned __int8 *v10; // eax
  unsigned __int8 *v11; // ecx
  unsigned __int8 *v12; // eax
  unsigned __int8 *v13; // ecx
  int v14; // eax

  for ( i = 0x18; i >= 4; i -= 4 )
  {
    if ( *a2 != *this )
      goto LABEL_5;
    ++this;
    ++a2;
  }
  if ( !i )
  {
LABEL_14:
    v14 = 0;
    return v14 != 0;
  }
LABEL_5:
  v5 = *(unsigned __int8 *)a2 - *(unsigned __int8 *)this;
  if ( !v5 )
  {
    v6 = i - 1;
    v7 = (unsigned __int8 *)this + 1;
    v8 = (unsigned __int8 *)a2 + 1;
    if ( !v6 )
      goto LABEL_14;
    v5 = *v8 - *v7;
    if ( !v5 )
    {
      v9 = v6 - 1;
      v10 = v7 + 1;
      v11 = v8 + 1;
      if ( !v9 )
        goto LABEL_14;
      v5 = *v11 - *v10;
      if ( !v5 )
      {
        v12 = v10 + 1;
        v13 = v11 + 1;
        if ( v9 == 1 )
          goto LABEL_14;
        v5 = *v13 - *v12;
        if ( !v5 )
          goto LABEL_14;
      }
    }
  }
  v14 = 1;
  if ( v5 <= 0 )
    return 1;
  return v14 != 0;
}
