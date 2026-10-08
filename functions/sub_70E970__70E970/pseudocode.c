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

  if ( !sub_700670(this, (int)a2) ) /*0x70e979*/
    return 0; /*0x70e979*/
  if ( sub_70E260(&this->members.super.m_usVertices, (int)(a2 + 2)) ) /*0x70e990*/
    return 0; /*0x70e990*/
  v4 = *((_DWORD *)this + 0x13); /*0x70e999*/
  if ( v4 ) /*0x70e99e*/
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x2C))(v4, a2[0x13]) ) /*0x70e9a9*/
      return 0; /*0x70e9a9*/
  }
  v5 = *((_DWORD *)this + 0x18); /*0x70e9af*/
  if ( v5 != a2[0x18] || *((_DWORD *)this + 0x19) != a2[0x19] ) /*0x70e9bd*/
    return 0; /*0x70e986*/
  v6 = 0; /*0x70e9c0*/
  if ( v5 ) /*0x70e9c5*/
  {
    while ( *(_DWORD *)(*((_DWORD *)this + 0x15) + 4 * v6) == *(_DWORD *)(a2[0x15] /*0x70e9fa*/
                                                                        - *((_DWORD *)this + 0x15)
                                                                        + *((_DWORD *)this + 0x15)
                                                                        + 4 * v6)
         && *(_DWORD *)(*((_DWORD *)this + 0x16) + 4 * v6) == *(_DWORD *)(a2[0x16] + 4 * v6)
         && *(_DWORD *)(*((_DWORD *)this + 0x17) + 4 * v6) == *(_DWORD *)(a2[0x17] + 4 * v6) )
    {
      if ( ++v6 >= v5 ) /*0x70ea01*/
        goto LABEL_13; /*0x70ea01*/
    }
    return 0; /*0x70e9fa*/
  }
LABEL_13:
  v7 = *((_DWORD *)this + 0x17); /*0x70ea03*/
  if ( *(_DWORD *)(4 * v5 + v7) != *(_DWORD *)(4 * v5 + a2[0x17]) || *((_DWORD *)this + 0x1B) != a2[0x1B] ) /*0x70ea1d*/
    return 0; /*0x70ea25*/
  v8 = *(_DWORD *)(v7 + 4 * v5); /*0x70ea28*/
  v9 = (_DWORD *)a2[0x14]; /*0x70ea2e*/
  v10 = *((_DWORD **)this + 0x14); /*0x70ea31*/
  if ( v8 < 4 ) /*0x70ea34*/
  {
LABEL_19:
    if ( !v8 ) /*0x70ea4c*/
    {
LABEL_29:
      v20 = 0; /*0x70eab5*/
      return v20 == 0; /*0x70eab5*/
    }
  }
  else
  {
    while ( *v10 == *v9 ) /*0x70ea3a*/
    {
      v8 -= 4; /*0x70ea3c*/
      ++v9; /*0x70ea3f*/
      ++v10; /*0x70ea42*/
      if ( v8 < 4 ) /*0x70ea48*/
        goto LABEL_19; /*0x70ea48*/
    }
  }
  v11 = *(unsigned __int8 *)v10 - *(unsigned __int8 *)v9; /*0x70ea54*/
  if ( !v11 ) /*0x70ea56*/
  {
    v12 = v8 - 1; /*0x70ea58*/
    v13 = (unsigned __int8 *)v9 + 1; /*0x70ea5b*/
    v14 = (unsigned __int8 *)v10 + 1; /*0x70ea5e*/
    if ( !v12 ) /*0x70ea63*/
      goto LABEL_29; /*0x70ea63*/
    v11 = *v14 - *v13; /*0x70ea6b*/
    if ( !v11 ) /*0x70ea6d*/
    {
      v15 = v12 - 1; /*0x70ea6f*/
      v16 = v13 + 1; /*0x70ea72*/
      v17 = v14 + 1; /*0x70ea75*/
      if ( !v15 ) /*0x70ea7a*/
        goto LABEL_29; /*0x70ea7a*/
      v11 = *v17 - *v16; /*0x70ea82*/
      if ( !v11 ) /*0x70ea84*/
      {
        v18 = v16 + 1; /*0x70ea89*/
        v19 = v17 + 1; /*0x70ea8c*/
        if ( v15 == 1 ) /*0x70ea91*/
          goto LABEL_29; /*0x70ea91*/
        v11 = *v19 - *v18; /*0x70ea99*/
        if ( !v11 ) /*0x70ea9b*/
          goto LABEL_29; /*0x70ea9b*/
      }
    }
  }
  v20 = 1; /*0x70ea9f*/
  if ( v11 <= 0 ) /*0x70eaa4*/
    return 0; /*0x70eab2*/
  return v20 == 0; /*0x70e982*/
}
