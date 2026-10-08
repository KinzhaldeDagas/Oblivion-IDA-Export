char __thiscall sub_955CA0(float *this, int a2, char *a3, char *a4)
{
  int v4; // eax
  int v6; // edx
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // ebp
  _DWORD *v10; // ebx
  int v11; // ecx
  int *v12; // eax
  float *v13; // edi
  char *v14; // esi
  int v15; // eax
  int *v16; // edi
  int *v17; // ecx
  int v18; // ebp
  int v19; // edx
  char v20; // dl
  int v21; // edx
  int v22; // esi
  int v23; // edx
  unsigned int v25; // [esp+0h] [ebp-ACh]
  int v26; // [esp+14h] [ebp-98h]
  int v27; // [esp+18h] [ebp-94h] BYREF
  char *v28; // [esp+1Ch] [ebp-90h]
  signed int v29; // [esp+20h] [ebp-8Ch]
  char *v30; // [esp+24h] [ebp-88h]
  _DWORD *v31; // [esp+28h] [ebp-84h] BYREF
  float *v32; // [esp+2Ch] [ebp-80h]
  _DWORD v33[2]; // [esp+30h] [ebp-7Ch]
  int v34[24]; // [esp+38h] [ebp-74h] BYREF
  _BYTE v35[20]; // [esp+98h] [ebp-14h] BYREF

  LOBYTE(v4) = *(_BYTE *)(a2 + 0x38); /*0x955cb0*/
  v32 = this; /*0x955cba*/
  v26 = a2 + 0x38; /*0x955cbe*/
  if ( (_BYTE)v4 ) /*0x955cc2*/
    return v4; /*0x955cc2*/
  if ( *(_BYTE *)(a2 + 4) ) /*0x955cc8*/
  {
    sub_954760(a4); /*0x955cd9*/
    LOBYTE(v4) = sub_955150(this, a2, (int)a4); /*0x955ce2*/
    return v4; /*0x955cf1*/
  }
  if ( *(_BYTE *)(a2 + 0x3C) == 1 ) /*0x955cf8*/
    sub_954DB0(a3, a4, (int)v35); /*0x955d0d*/
  sub_954760(a4); /*0x955d14*/
  v29 = sub_9553B0(*(float **)(a2 + 0xB8)); /*0x955d27*/
  sub_9558D0(this, a2, a4, &v27, (int *)&v31); /*0x955d39*/
  v6 = *(_DWORD *)(a2 + 0xEC); /*0x955d44*/
  v31 = *(_DWORD **)(a2 + 0xF0); /*0x955d4a*/
  v33[0] = v31; /*0x955d4e*/
  v33[1] = v6; /*0x955d52*/
  v7 = (_DWORD *)(a2 + 0x50); /*0x955d56*/
  v8 = 3; /*0x955d59*/
  do /*0x955d83*/
  {
    *(float *)&v25 = *(this + 0xF) * *(this + 0x11); /*0x955d67*/
    sub_8ECB30(v25); /*0x955d6a*/
    v7[0xFFFFFFFD] = 0; /*0x955d6f*/
    *v7++ = 0x7FFFFFFF; /*0x955d76*/
    --v8; /*0x955d82*/
  }
  while ( v8 ); /*0x955d83*/
  v4 = 0; /*0x955d85*/
  v27 = 0; /*0x955d87*/
  do /*0x955f31*/
  {
    v9 = (_DWORD *)v33[v4]; /*0x955d90*/
    v10 = v9 + 0xE; /*0x955d96*/
    if ( !v9 ) /*0x955d99*/
      goto LABEL_38; /*0x955d99*/
    qmemcpy(v34, a4, 0x48u); /*0x955daf*/
    v34[0xE] = v9[0xA] - v9[9]; /*0x955db9*/
    v34[0xF] = v9[0xB]; /*0x955dc0*/
    v11 = 0; /*0x955dc7*/
    if ( (int)v9[0xB] > 0 ) /*0x955dcb*/
    {
      v12 = v9 + 0xC; /*0x955dd5*/
      do /*0x955df6*/
      {
        *(int *)((char *)v12 + (char *)&v34[4] - (char *)v9) = *v12; /*0x955de2*/
        ++v11; /*0x955dea*/
        *(int *)((char *)v12 + (char *)&v34[5] - (char *)v9) = v12[1] - *v12; /*0x955deb*/
        ++v12; /*0x955df1*/
      }
      while ( v11 < v9[0xB] ); /*0x955df6*/
    }
    v13 = v32; /*0x955df8*/
    sub_954C10(v34, (int)v9, (int)(v32 + 0xC)); /*0x955e05*/
    v34[0] = *(_DWORD *)a4 + 1; /*0x955e18*/
    LOBYTE(v34[1]) = 0; /*0x955e1c*/
    sub_954CA0(v34); /*0x955e21*/
    sub_955CA0(v13, (int)v9, a4, (char *)v34); /*0x955e2f*/
    if ( v9 == v31 ) /*0x955e38*/
    {
      if ( v29 <= 2 ) /*0x955e41*/
        v9[v29 + 0x11] = 0; /*0x955e43*/
    }
    else if ( v29 <= 2 ) /*0x955e54*/
    {
      v9[v29 + 0x14] = 0x7FFFFFFF; /*0x955e58*/
    }
    v14 = a4 + 0x54; /*0x955e6b*/
    v15 = 0; /*0x955e6e*/
    v16 = (int *)(a2 + 0x50); /*0x955e70*/
    v17 = v9 + 0x11; /*0x955e73*/
    v28 = a4 + 0x10; /*0x955e76*/
    v30 = a4 + 0x54; /*0x955e7a*/
    v18 = v26 - (_DWORD)v10; /*0x955e7e*/
    do /*0x955f1f*/
    {
      v19 = *((char *)v10 + v15 + 8); /*0x955e80*/
      if ( v19 == 1 ) /*0x955e88*/
      {
        if ( *v17 <= *((_DWORD *)v14 + 0xFFFFFFFD) && v17[3] >= *(_DWORD *)v14 ) /*0x955e96*/
        {
          v20 = 1; /*0x955ea4*/
          if ( *(char *)(v15 + v26 + 8) >= 1 ) /*0x955ea9*/
            v20 = *(_BYTE *)(v15 + v26 + 8); /*0x955eab*/
          *(_BYTE *)(v15 + v26 + 8) = v20; /*0x955eb1*/
          goto LABEL_29; /*0x955eb5*/
        }
      }
      else if ( v19 == 2 && *v17 <= *((_DWORD *)v28 + 0xFFFFFFFF) && v17[3] >= *(_DWORD *)v28 ) /*0x955ecc*/
      {
        *(_BYTE *)(v15 + v26 + 8) = 2; /*0x955ed2*/
LABEL_29:
        *((_BYTE *)v10 + v15 + 8) = 0; /*0x955ed7*/
      }
      if ( !*((_BYTE *)v10 + v15 + 8) ) /*0x955edc*/
      {
        v21 = *v17; /*0x955ee4*/
        if ( *(int *)((char *)v17 + v18) > *v17 ) /*0x955eeb*/
          v21 = *(int *)((char *)v17 + v18); /*0x955eed*/
        v22 = *v16; /*0x955eef*/
        *(int *)((char *)v17 + v18) = v21; /*0x955ef1*/
        v23 = v17[3]; /*0x955ef4*/
        if ( v22 < v23 ) /*0x955ef9*/
          v23 = v22; /*0x955efb*/
        *v16 = v23; /*0x955efd*/
      }
      ++v15; /*0x955f07*/
      v14 = v30 + 4; /*0x955f08*/
      ++v17; /*0x955f0e*/
      ++v16; /*0x955f11*/
      v30 += 4; /*0x955f17*/
      v28 += 8; /*0x955f1b*/
    }
    while ( v15 < 3 ); /*0x955f1f*/
    v4 = v27; /*0x955f25*/
LABEL_38:
    v27 = ++v4; /*0x955f2d*/
  }
  while ( v4 < 2 ); /*0x955f31*/
  return v4; /*0x955ce8*/
}
