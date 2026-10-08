char __thiscall sub_6E7C20(int this, float a2, int a3, bool *a4)
{
  double v5; // st7
  char v6; // bl
  int v8; // eax
  int v9; // ecx
  int v10; // ebp
  float v11; // edi
  char v12; // al
  unsigned int v13; // esi
  int v14; // edx
  char v15; // al
  unsigned int v16; // ecx
  _BYTE *v17; // edx
  unsigned int v18; // ecx
  _BYTE *v19; // edx
  unsigned int i; // ecx
  char v21; // al
  char v22; // [esp+29h] [ebp-Bh]
  char v23; // [esp+2Ah] [ebp-Ah]
  unsigned __int8 v24; // [esp+2Ch] [ebp-8h]

  v5 = a2; /*0x6e7c33*/
  if ( a2 == *(float *)(this + 8) ) /*0x6e7c38*/
  {
    v6 = *(_BYTE *)(this + 0xC); /*0x6e7c3a*/
    if ( v6 == byte_A7C6AC ) /*0x6e7c45*/
    {
      *a4 = 0; /*0x6e7c4b*/
      return 0; /*0x6e7c4e*/
    }
    else
    {
      *a4 = v6 != 0; /*0x6e7c60*/
      return 1; /*0x6e7c62*/
    }
  }
  v8 = *(_DWORD *)(this + 0x10); /*0x6e7c6b*/
  if ( v8 ) /*0x6e7c70*/
  {
    v9 = *(_DWORD *)(v8 + 0x10); /*0x6e7c79*/
    v10 = *(_DWORD *)(v8 + 0xC); /*0x6e7c7d*/
    v11 = *(float *)(v8 + 8); /*0x6e7c81*/
    v24 = *(_BYTE *)(v8 + 0x14); /*0x6e7c86*/
    if ( v11 != 0.0 ) /*0x6e7c8e*/
    {
      *(_DWORD *)(this + 0x18) = *(_DWORD *)(this + 0x14); /*0x6e7ca8*/
      v12 = sub_6BDBA0(a2, v10, v9, v11, (int *)(this + 0x14), v24); /*0x6e7cab*/
      v13 = *(_DWORD *)(this + 0x14); /*0x6e7cb0*/
      v23 = v12; /*0x6e7cb8*/
      v22 = v12; /*0x6e7cbc*/
      if ( v12 == *(_BYTE *)(this + 0x1C) ) /*0x6e7cc0*/
      {
        v14 = *(_DWORD *)(this + 0x18); /*0x6e7cc6*/
        v15 = v12 == 0; /*0x6e7ccb*/
        if ( v14 == v13 || (v16 = v14 + 1, v14 + 1 <= v13) ) /*0x6e7cdb*/
        {
          for ( i = v14 + 1; i < v13; ++i ) /*0x6e7d34*/
          {
            if ( i >= LODWORD(v11) ) /*0x6e7d38*/
              break; /*0x6e7d38*/
            if ( *(_BYTE *)(i * v24 + v10 + 4) == v15 ) /*0x6e7d46*/
              goto LABEL_25; /*0x6e7d46*/
          }
          goto LABEL_26; /*0x6e7d4d*/
        }
        if ( v16 >= LODWORD(v11) ) /*0x6e7cdf*/
        {
LABEL_14:
          if ( v23 == v15 ) /*0x6e7d0c*/
            goto LABEL_26; /*0x6e7d0c*/
          v18 = 0; /*0x6e7d0e*/
          if ( !v13 ) /*0x6e7d12*/
            goto LABEL_26; /*0x6e7d12*/
          v19 = (_BYTE *)(v10 + 4); /*0x6e7d19*/
          while ( *v19 != v15 ) /*0x6e7d22*/
          {
            ++v18; /*0x6e7d24*/
            v19 += v24; /*0x6e7d27*/
            if ( v18 >= v13 ) /*0x6e7d2b*/
              goto LABEL_26; /*0x6e7d2b*/
          }
        }
        else
        {
          v17 = (_BYTE *)(v16 * v24 + v10 + 4); /*0x6e7cef*/
          while ( *v17 != v15 ) /*0x6e7cf9*/
          {
            ++v16; /*0x6e7cfb*/
            v17 += v24; /*0x6e7cfe*/
            if ( v16 >= LODWORD(v11) ) /*0x6e7d02*/
              goto LABEL_14; /*0x6e7d02*/
          }
        }
LABEL_25:
        v22 = v15; /*0x6e7d51*/
      }
LABEL_26:
      v5 = a2; /*0x6e7d55*/
      *(_BYTE *)(this + 0xC) = v22 != 0; /*0x6e7d65*/
      *(_BYTE *)(this + 0x1C) = v23; /*0x6e7d68*/
    }
  }
  v21 = *(_BYTE *)(this + 0xC); /*0x6e7d6e*/
  if ( v21 == byte_A7C6AC ) /*0x6e7d77*/
  {
    *a4 = 0; /*0x6e7d7f*/
    return 0; /*0x6e7d82*/
  }
  else
  {
    *a4 = v21 != 0; /*0x6e7d94*/
    *(float *)(this + 8) = v5; /*0x6e7d96*/
    return 1; /*0x6e7d99*/
  }
}
