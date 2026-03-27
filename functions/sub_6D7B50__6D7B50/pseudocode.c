bool __thiscall sub_6D7B50(NiTriBasedGeomData *this, _DWORD *a2)
{
  unsigned int x_low; // eax
  _DWORD *v4; // ecx
  _DWORD *v5; // edx
  int v6; // esi
  unsigned int v7; // eax
  unsigned __int8 *v8; // ecx
  unsigned __int8 *v9; // edx
  unsigned int v10; // eax
  unsigned __int8 *v11; // ecx
  unsigned __int8 *v12; // edx
  unsigned __int8 *v13; // ecx
  unsigned __int8 *v14; // edx
  int v15; // eax

  if ( !sub_700670(this, (int)a2) )
    return 0;
  x_low = LODWORD(this->members.super.m_kBound.Center.x);
  if ( a2[3] != x_low || a2[4] != LODWORD(this->members.super.m_kBound.Center.y) )
    return 0;
  if ( !x_low )
    return 1;
  v4 = *(_DWORD **)&this->members.super.m_usVertices;
  v5 = (_DWORD *)a2[2];
  if ( x_low < 4 )
  {
LABEL_8:
    if ( !x_low )
    {
LABEL_18:
      v15 = 0;
      return !v15;
    }
  }
  else
  {
    while ( *v5 == *v4 )
    {
      x_low -= 4;
      ++v4;
      ++v5;
      if ( x_low < 4 )
        goto LABEL_8;
    }
  }
  v6 = *(unsigned __int8 *)v5 - *(unsigned __int8 *)v4;
  if ( !v6 )
  {
    v7 = x_low - 1;
    v8 = (unsigned __int8 *)v4 + 1;
    v9 = (unsigned __int8 *)v5 + 1;
    if ( !v7 )
      goto LABEL_18;
    v6 = *v9 - *v8;
    if ( !v6 )
    {
      v10 = v7 - 1;
      v11 = v8 + 1;
      v12 = v9 + 1;
      if ( !v10 )
        goto LABEL_18;
      v6 = *v12 - *v11;
      if ( !v6 )
      {
        v13 = v11 + 1;
        v14 = v12 + 1;
        if ( v10 == 1 )
          goto LABEL_18;
        v6 = *v14 - *v13;
        if ( !v6 )
          goto LABEL_18;
      }
    }
  }
  v15 = 1;
  if ( v6 <= 0 )
    v15 = 0xFFFFFFFF;
  return !v15;
}
