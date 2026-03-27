bool __thiscall sub_550330(int *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // esi
  unsigned int v5; // esi
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  unsigned int v9; // esi
  unsigned __int8 *v10; // edi
  unsigned __int8 *v11; // eax
  unsigned int v12; // esi
  unsigned __int8 *v13; // edi
  unsigned __int8 *v14; // eax
  unsigned __int8 *v15; // edi
  unsigned __int8 *v16; // eax
  int v17; // eax

  v3 = *this;
  if ( *a2 != *this )
    return 0;
  v4 = *(this + 1);
  if ( a2[1] != v4 )
    return 0;
  if ( v3 && v4 )
  {
    v5 = 4 * v3 * v4;
    v6 = (_DWORD *)sub_54F7A0(a2 + 2, 0);
    v7 = (_DWORD *)sub_54F7A0(this + 2, 0);
    if ( v5 < 4 )
    {
LABEL_8:
      if ( !v5 )
        goto LABEL_18;
    }
    else
    {
      while ( *v7 == *v6 )
      {
        v5 -= 4;
        ++v6;
        ++v7;
        if ( v5 < 4 )
          goto LABEL_8;
      }
    }
    v8 = *(unsigned __int8 *)v7 - *(unsigned __int8 *)v6;
    if ( v8 )
      goto LABEL_16;
    v9 = v5 - 1;
    v10 = (unsigned __int8 *)v6 + 1;
    v11 = (unsigned __int8 *)v7 + 1;
    if ( v9 )
    {
      v8 = *v11 - *v10;
      if ( v8
        || (v12 = v9 - 1, v13 = v10 + 1, v14 = v11 + 1, v12)
        && ((v8 = *v14 - *v13) != 0 || (v15 = v13 + 1, v16 = v14 + 1, v12 != 1) && (v8 = *v16 - *v15) != 0) )
      {
LABEL_16:
        v17 = 1;
        if ( v8 <= 0 )
          return 0;
        return v17 == 0;
      }
    }
LABEL_18:
    v17 = 0;
    return v17 == 0;
  }
  return 1;
}
