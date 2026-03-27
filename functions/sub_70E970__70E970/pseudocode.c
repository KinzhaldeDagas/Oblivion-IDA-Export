bool __thiscall sub_70E970(NiTriBasedGeomData *this, _DWORD *a2)
{
  int v4; // ecx
  unsigned int v5; // edx
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  _DWORD *v9; // ecx
  _DWORD *v10; // edx
  int v11; // esi
  unsigned int v12; // eax
  unsigned __int8 *v13; // ecx
  unsigned __int8 *v14; // edx
  unsigned int v15; // eax
  unsigned __int8 *v16; // ecx
  unsigned __int8 *v17; // edx
  unsigned __int8 *v18; // ecx
  unsigned __int8 *v19; // edx
  int v20; // eax

  if ( !sub_700670(this, (int)a2) )
    return 0;
  if ( sub_70E260(&this->members.super.m_usVertices, (int)(a2 + 2)) )
    return 0;
  v4 = *((_DWORD *)this + 0x13);
  if ( v4 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x2C))(v4, a2[0x13]) )
      return 0;
  }
  v5 = *((_DWORD *)this + 0x18);
  if ( v5 != a2[0x18] || *((_DWORD *)this + 0x19) != a2[0x19] )
    return 0;
  v6 = 0;
  if ( v5 )
  {
    while ( *(_DWORD *)(*((_DWORD *)this + 0x15) + 4 * v6) == *(_DWORD *)(a2[0x15]
                                                                        - *((_DWORD *)this + 0x15)
                                                                        + *((_DWORD *)this + 0x15)
                                                                        + 4 * v6)
         && *(_DWORD *)(*((_DWORD *)this + 0x16) + 4 * v6) == *(_DWORD *)(a2[0x16] + 4 * v6)
         && *(_DWORD *)(*((_DWORD *)this + 0x17) + 4 * v6) == *(_DWORD *)(a2[0x17] + 4 * v6) )
    {
      if ( ++v6 >= v5 )
        goto LABEL_13;
    }
    return 0;
  }
LABEL_13:
  v7 = *((_DWORD *)this + 0x17);
  if ( *(_DWORD *)(4 * v5 + v7) != *(_DWORD *)(4 * v5 + a2[0x17]) || *((_DWORD *)this + 0x1B) != a2[0x1B] )
    return 0;
  v8 = *(_DWORD *)(v7 + 4 * v5);
  v9 = (_DWORD *)a2[0x14];
  v10 = *((_DWORD **)this + 0x14);
  if ( v8 < 4 )
  {
LABEL_19:
    if ( !v8 )
    {
LABEL_29:
      v20 = 0;
      return v20 == 0;
    }
  }
  else
  {
    while ( *v10 == *v9 )
    {
      v8 -= 4;
      ++v9;
      ++v10;
      if ( v8 < 4 )
        goto LABEL_19;
    }
  }
  v11 = *(unsigned __int8 *)v10 - *(unsigned __int8 *)v9;
  if ( !v11 )
  {
    v12 = v8 - 1;
    v13 = (unsigned __int8 *)v9 + 1;
    v14 = (unsigned __int8 *)v10 + 1;
    if ( !v12 )
      goto LABEL_29;
    v11 = *v14 - *v13;
    if ( !v11 )
    {
      v15 = v12 - 1;
      v16 = v13 + 1;
      v17 = v14 + 1;
      if ( !v15 )
        goto LABEL_29;
      v11 = *v17 - *v16;
      if ( !v11 )
      {
        v18 = v16 + 1;
        v19 = v17 + 1;
        if ( v15 == 1 )
          goto LABEL_29;
        v11 = *v19 - *v18;
        if ( !v11 )
          goto LABEL_29;
      }
    }
  }
  v20 = 1;
  if ( v11 <= 0 )
    return 0;
  return v20 == 0;
}
