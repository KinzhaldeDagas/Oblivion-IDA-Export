bool __thiscall sub_727FA0(unsigned int *this, int a2)
{
  unsigned int v3; // eax
  _DWORD *v4; // edx
  _DWORD *v5; // ecx
  int v6; // esi
  unsigned int v7; // eax
  unsigned __int8 *v8; // edx
  unsigned __int8 *v9; // ecx
  unsigned int v10; // eax
  unsigned __int8 *v11; // edx
  unsigned __int8 *v12; // ecx
  unsigned __int8 *v13; // edx
  unsigned __int8 *v14; // ecx
  int v15; // eax

  if ( !a2 ) /*0x727fa6*/
    return 0; /*0x727fa6*/
  v3 = *(this + 4); /*0x727fad*/
  if ( v3 != *(_DWORD *)(a2 + 0x10) ) /*0x727fb3*/
    return 0; /*0x727faa*/
  v4 = *(_DWORD **)(a2 + 0xC); /*0x727fb8*/
  v5 = (_DWORD *)*(this + 3); /*0x727fbb*/
  if ( v3 < 4 ) /*0x727fc0*/
  {
LABEL_7:
    if ( !v3 ) /*0x727fd8*/
    {
LABEL_17:
      v15 = 0; /*0x72803f*/
      return v15 == 0; /*0x72803f*/
    }
  }
  else
  {
    while ( *v5 == *v4 ) /*0x727fc6*/
    {
      v3 -= 4; /*0x727fc8*/
      ++v4; /*0x727fcb*/
      ++v5; /*0x727fce*/
      if ( v3 < 4 ) /*0x727fd4*/
        goto LABEL_7; /*0x727fd4*/
    }
  }
  v6 = *(unsigned __int8 *)v5 - *(unsigned __int8 *)v4; /*0x727fe0*/
  if ( !v6 ) /*0x727fe2*/
  {
    v7 = v3 - 1; /*0x727fe4*/
    v8 = (unsigned __int8 *)v4 + 1; /*0x727fe7*/
    v9 = (unsigned __int8 *)v5 + 1; /*0x727fea*/
    if ( !v7 ) /*0x727fef*/
      goto LABEL_17; /*0x727fef*/
    v6 = *v9 - *v8; /*0x727ff7*/
    if ( !v6 ) /*0x727ff9*/
    {
      v10 = v7 - 1; /*0x727ffb*/
      v11 = v8 + 1; /*0x727ffe*/
      v12 = v9 + 1; /*0x728001*/
      if ( !v10 ) /*0x728006*/
        goto LABEL_17; /*0x728006*/
      v6 = *v12 - *v11; /*0x72800e*/
      if ( !v6 ) /*0x728010*/
      {
        v13 = v11 + 1; /*0x728015*/
        v14 = v12 + 1; /*0x728018*/
        if ( v10 == 1 ) /*0x72801d*/
          goto LABEL_17; /*0x72801d*/
        v6 = *v14 - *v13; /*0x728025*/
        if ( !v6 ) /*0x728027*/
          goto LABEL_17; /*0x728027*/
      }
    }
  }
  v15 = 1; /*0x72802b*/
  if ( v6 <= 0 ) /*0x728030*/
    return 0; /*0x72803c*/
  return v15 == 0; /*0x727faa*/
}
