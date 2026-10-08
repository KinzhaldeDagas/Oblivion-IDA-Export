char __thiscall sub_738B50(NiTriBasedGeomData *this, int a2)
{
  _DWORD *v4; // edx
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // ebp
  float *v9; // edx
  float *v10; // esi
  int v11; // ebx
  float *v12; // eax
  int v13; // edi
  float *v14; // ecx
  int v15; // ebx
  float *v16; // ebp
  unsigned int v17; // edi
  int v18; // eax
  float *v19; // esi
  bool v20; // cf
  float *v21; // [esp+8h] [ebp-34h]
  _DWORD *v22; // [esp+Ch] [ebp-30h]
  int v23; // [esp+10h] [ebp-2Ch]
  int v24; // [esp+14h] [ebp-28h]
  int i; // [esp+18h] [ebp-24h]
  int v26; // [esp+1Ch] [ebp-20h]
  int v27; // [esp+20h] [ebp-1Ch]
  unsigned int v28; // [esp+24h] [ebp-18h]
  int v29; // [esp+28h] [ebp-14h]
  float *v30; // [esp+2Ch] [ebp-10h]
  unsigned int v31; // [esp+34h] [ebp-8h]
  unsigned int v32; // [esp+38h] [ebp-4h]
  float *v33; // [esp+40h] [ebp+4h]

  if ( !sub_71FDE0(this, a2) ) /*0x738b5c*/
    return 0; /*0x738b5c*/
  if ( *(_BYTE *)(a2 + 0x58) != *((_BYTE *)this + 0x58) ) /*0x738b75*/
    return 0; /*0x738b75*/
  v32 = *(unsigned __int16 *)(a2 + 0x6C); /*0x738b81*/
  if ( v32 != *((unsigned __int16 *)this + 0x36) || *(_WORD *)(a2 + 0x6A) != *((_WORD *)this + 0x35) ) /*0x738b8f*/
    return 0; /*0x738b6c*/
  v24 = 0; /*0x738b95*/
  if ( !*(_WORD *)(a2 + 0x6C) ) /*0x738b9d*/
    return 1; /*0x738cfd*/
  v4 = *((_DWORD **)this + 0x19); /*0x738ba3*/
  v5 = *(_DWORD *)(a2 + 0x64) - (_DWORD)v4; /*0x738ba9*/
  v22 = v4; /*0x738bab*/
  for ( i = v5; ; v5 = i ) /*0x738baf*/
  {
    v6 = *(_DWORD *)((char *)v4 + v5); /*0x738bb9*/
    v7 = *v4; /*0x738bbe*/
    if ( v6 ) /*0x738bc0*/
      break; /*0x738bc0*/
    if ( v7 ) /*0x738d02*/
      return 0; /*0x738d02*/
LABEL_25:
    ++v4; /*0x738cd8*/
    v20 = ++v24 < v32; /*0x738ce2*/
    v22 = v4; /*0x738cea*/
    if ( !v20 ) /*0x738cee*/
      return 1; /*0x738cee*/
  }
  if ( !v7 ) /*0x738bc8*/
    return 0; /*0x738bc8*/
  v8 = *(unsigned __int16 *)(v6 + 4); /*0x738bce*/
  v31 = v8; /*0x738bdc*/
  v28 = *(unsigned __int16 *)(v6 + 6); /*0x738be0*/
  if ( v8 != *(unsigned __int16 *)(v7 + 4) || *(unsigned __int16 *)(v6 + 6) != *(unsigned __int16 *)(v7 + 6) ) /*0x738bf0*/
    return 0; /*0x738bf0*/
  v9 = *(float **)(v6 + 8); /*0x738bf8*/
  v10 = *(float **)(v6 + 0xC); /*0x738bfe*/
  v11 = *(_DWORD *)(v7 + 0xC); /*0x738c01*/
  v12 = *(float **)(v6 + 0x10); /*0x738c04*/
  v30 = v12; /*0x738c0a*/
  v29 = *(_DWORD *)(v7 + 0x10); /*0x738c0e*/
  v23 = 0; /*0x738c12*/
  if ( !v8 ) /*0x738c1a*/
  {
LABEL_24:
    v4 = v22; /*0x738cd4*/
    goto LABEL_25; /*0x738cd4*/
  }
  v13 = *(_DWORD *)(v7 + 8) - (_DWORD)v9; /*0x738c20*/
  v14 = v9; /*0x738c22*/
  v15 = v11 - (_DWORD)v10; /*0x738c24*/
  v21 = v10; /*0x738c26*/
  v33 = v9; /*0x738c2a*/
  v16 = v12; /*0x738c2e*/
  v26 = v13; /*0x738c30*/
  v27 = v15; /*0x738c34*/
  while ( !sub_4B9D10(v14, (float *)((char *)v14 + v13)) && !sub_632310(v21, (float *)((char *)v21 + v15)) ) /*0x738c6a*/
  {
    v17 = 0; /*0x738c74*/
    if ( v28 ) /*0x738c78*/
    {
      v18 = v29 - (_DWORD)v30; /*0x738c7e*/
      v19 = v16; /*0x738c82*/
      while ( !sub_4B9D10(v19, (float *)((char *)v19 + v18)) ) /*0x738ca0*/
      {
        ++v17; /*0x738ca2*/
        v19 += 2; /*0x738ca5*/
        if ( v17 >= v28 ) /*0x738caa*/
          goto LABEL_23; /*0x738caa*/
        v18 = v29 - (_DWORD)v30; /*0x738c90*/
      }
      return 0; /*0x738ca0*/
    }
LABEL_23:
    v33 += 2; /*0x738cac*/
    v21 += 4; /*0x738cb5*/
    v16 += 2 * v28; /*0x738cc4*/
    if ( ++v23 >= v31 ) /*0x738cce*/
      goto LABEL_24; /*0x738cce*/
    v14 = v33; /*0x738c40*/
    v13 = v26; /*0x738c44*/
    v15 = v27; /*0x738c48*/
  }
  return 0; /*0x738b65*/
}
