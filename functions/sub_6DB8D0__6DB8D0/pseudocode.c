char __thiscall sub_6DB8D0(_DWORD *this, int a2)
{
  int v2; // edi
  int v5; // ecx
  int v6; // ecx
  _DWORD *v7; // esi
  _DWORD *v8; // ecx
  unsigned int v9; // eax
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
  __int16 v21; // cx
  __int16 v22; // dx
  int v23; // [esp+8h] [ebp-8h] BYREF
  int v24; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x6db8d5*/
  if ( !sub_6EC2E0(a2) ) /*0x6db8dc*/
    return 0; /*0x6db8e3*/
  v5 = *(this + 6); /*0x6db8ef*/
  if ( v5 ) /*0x6db8f4*/
  {
    if ( !*(_DWORD *)(v2 + 0x18) /*0x6db913*/
      || !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 0x2C))(v5, *(_DWORD *)(v2 + 0x18)) )
    {
      return 0; /*0x6db917*/
    }
  }
  else if ( *(_DWORD *)(v2 + 0x18) ) /*0x6db900*/
  {
    return 0; /*0x6db904*/
  }
  v6 = *(this + 7); /*0x6db919*/
  if ( !v6 ) /*0x6db91e*/
  {
    if ( !*(_DWORD *)(v2 + 0x1C) ) /*0x6db92a*/
      goto LABEL_15; /*0x6db92e*/
    return 0; /*0x6db8ec*/
  }
  if ( !*(_DWORD *)(v2 + 0x1C) /*0x6db93d*/
    || !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 0x2C))(v6, *(_DWORD *)(v2 + 0x1C)) )
  {
    return 0; /*0x6db941*/
  }
LABEL_15:
  v7 = (_DWORD *)*(this + 8); /*0x6db943*/
  if ( !v7 ) /*0x6db949*/
  {
    if ( !*(_DWORD *)(v2 + 0x20) ) /*0x6db959*/
      goto LABEL_20; /*0x6db959*/
    return 0; /*0x6db963*/
  }
  if ( !*(_DWORD *)(v2 + 0x20) ) /*0x6db94f*/
    return 0; /*0x6db94f*/
LABEL_20:
  if ( v7 ) /*0x6db969*/
  {
    sub_6DAC40(this, &v23, &v24, &a2); /*0x6db980*/
    v8 = *(_DWORD **)(v2 + 0x20); /*0x6db989*/
    v9 = 4 * v23; /*0x6db98e*/
    v10 = v7; /*0x6db993*/
    if ( (unsigned int)(4 * v23) < 4 ) /*0x6db995*/
    {
LABEL_24:
      if ( !v9 ) /*0x6db9ad*/
        goto LABEL_34; /*0x6db9ad*/
    }
    else
    {
      while ( *v10 == *v8 ) /*0x6db99b*/
      {
        v9 -= 4; /*0x6db99d*/
        ++v8; /*0x6db9a0*/
        ++v10; /*0x6db9a3*/
        if ( v9 < 4 ) /*0x6db9a9*/
          goto LABEL_24; /*0x6db9a9*/
      }
    }
    v11 = *(unsigned __int8 *)v10 - *(unsigned __int8 *)v8; /*0x6db9b5*/
    if ( v11 ) /*0x6db9b7*/
      goto LABEL_32; /*0x6db9b7*/
    v12 = v9 - 1; /*0x6db9b9*/
    v13 = (unsigned __int8 *)v8 + 1; /*0x6db9bc*/
    v14 = (unsigned __int8 *)v10 + 1; /*0x6db9bf*/
    if ( v12 ) /*0x6db9c4*/
    {
      v11 = *v14 - *v13; /*0x6db9cc*/
      if ( v11 /*0x6db9fc*/
        || (v15 = v12 - 1, v16 = v13 + 1, v17 = v14 + 1, v15)
        && ((v11 = *v17 - *v16) != 0 || (v18 = v16 + 1, v19 = v17 + 1, v15 != 1) && (v11 = *v19 - *v18) != 0) )
      {
LABEL_32:
        v20 = 1; /*0x6dba00*/
        if ( v11 <= 0 ) /*0x6dba05*/
          v20 = 0xFFFFFFFF; /*0x6dba07*/
LABEL_35:
        if ( v20 ) /*0x6dba10*/
          return 0; /*0x6dba10*/
        goto LABEL_36; /*0x6dba10*/
      }
    }
LABEL_34:
    v20 = 0; /*0x6dba0c*/
    goto LABEL_35; /*0x6dba0c*/
  }
LABEL_36:
  if ( *(float *)(v2 + 0x24) == *((float *)this + 9) && ((*(_BYTE *)(v2 + 0xC) ^ *((_BYTE *)this + 0xC)) & 1) == 0 ) /*0x6dba32*/
  {
    v21 = *(_WORD *)(v2 + 0xC); /*0x6dba38*/
    v22 = *((_WORD *)this + 6); /*0x6dba3c*/
    if ( ((((unsigned __int8)v22 >> 1) ^ ((unsigned __int8)v21 >> 1)) & 1) == 0 /*0x6dbad1*/
      && *(this + 0xE) == *(_DWORD *)(v2 + 0x38)
      && ((((unsigned __int8)v22 >> 2) ^ ((unsigned __int8)v21 >> 2)) & 1) == 0
      && ((((unsigned __int8)v22 >> 3) ^ ((unsigned __int8)v21 >> 3)) & 1) == 0
      && ((((unsigned __int8)v22 >> 4) ^ ((unsigned __int8)v21 >> 4)) & 1) == 0
      && ((((unsigned __int8)v22 >> 5) ^ ((unsigned __int8)v21 >> 5)) & 1) == 0
      && *(float *)(v2 + 0x28) == *((float *)this + 0xA)
      && *(float *)(v2 + 0x2C) == *((float *)this + 0xB)
      && *((_WORD *)this + 0x18) == *(_WORD *)(v2 + 0x30)
      && ((((unsigned __int8)v22 >> 6) ^ ((unsigned __int8)v21 >> 6)) & 1) == 0 )
    {
      return 1; /*0x6dbadc*/
    }
  }
  return 0; /*0x6db8e5*/
}
