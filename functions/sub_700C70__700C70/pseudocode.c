NiPixelData *__cdecl sub_700C70(float *a1, float *a2, char *a3, unsigned int a4)
{
  NiPixelData *v4; // eax
  char v5; // al
  int v6; // edi
  char v7; // al
  int v8; // edi
  char v9; // al
  int v10; // edi
  char v11; // al
  unsigned int v12; // ebp
  int v13; // edi
  unsigned int v14; // ebp
  int v15; // edi
  unsigned int v16; // ebp
  int v17; // edi
  unsigned int v18; // ebx
  char *v19; // edi
  unsigned int v20; // ebp
  unsigned int v21; // eax
  unsigned int v22; // ebx
  NiPixelData *v24; // [esp+14h] [ebp-20h]
  __int64 Src; // [esp+20h] [ebp-14h] BYREF
  int v26; // [esp+30h] [ebp-4h]
  unsigned int v27; // [esp+38h] [ebp+4h]
  unsigned int i; // [esp+3Ch] [ebp+8h]

  v4 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x700c99*/
  v26 = 0; /*0x700cad*/
  if ( v4 ) /*0x700cb1*/
    v24 = NiPixelData::NiPixelData(v4, 0x20u, 0x20u, (int)a3, 1u, a4); /*0x700cc6*/
  else
    v24 = 0; /*0x700ccc*/
  v5 = sub_700C00(a3, 0); /*0x700cd3*/
  Src = (__int64)(*a1 * dbl_A3DDD8); /*0x700cfe*/
  v6 = ((_DWORD)Src << v5) & sub_700B60(a3, 0); /*0x700d19*/
  v7 = sub_700C00(a3, 1); /*0x700d1b*/
  Src = (__int64)(a1[1] * dbl_A3DDD8); /*0x700d44*/
  v8 = ((_DWORD)Src << v7) & sub_700B60(a3, 1) | v6; /*0x700d5f*/
  v9 = sub_700C00(a3, 2); /*0x700d61*/
  Src = (__int64)(a1[2] * dbl_A3DDD8); /*0x700d8a*/
  v10 = ((_DWORD)Src << v9) & sub_700B60(a3, 2) | v8; /*0x700da5*/
  v11 = sub_700C00(a3, 3); /*0x700da7*/
  Src = (__int64)(a1[3] * dbl_A3DDD8); /*0x700dd0*/
  LODWORD(Src) = ((_DWORD)Src << v11) & sub_700B60(a3, 3) | v10; /*0x700ded*/
  v12 = (unsigned int)(__int64)(*a2 * dbl_A3DDD8) << sub_700C00(a3, 0); /*0x700e25*/
  v13 = v12 & sub_700B60(a3, 0); /*0x700e38*/
  v14 = (unsigned int)(__int64)(a2[1] * dbl_A3DDD8) << sub_700C00(a3, 1); /*0x700e6b*/
  v15 = v14 & sub_700B60(a3, 1) | v13; /*0x700e7e*/
  v16 = (unsigned int)(__int64)(a2[2] * dbl_A3DDD8) << sub_700C00(a3, 2); /*0x700eb1*/
  v17 = v16 & sub_700B60(a3, 2) | v15; /*0x700ec4*/
  v18 = (unsigned int)(__int64)(a2[3] * dbl_A3DDD8) << sub_700C00(a3, 3); /*0x700ef7*/
  HIDWORD(Src) = v18 & sub_700B60(a3, 3) | v17; /*0x700f0d*/
  for ( i = 0; i < a4; ++i ) /*0x700f19*/
  {
    v19 = (char *)(*((_DWORD *)v24 + 0x14) /*0x700f36*/
                 + **((_DWORD **)v24 + 0x17)
                 + i * *(_DWORD *)(*((_DWORD *)v24 + 0x17) + 4 * *((_DWORD *)v24 + 0x18)));
    v27 = 0; /*0x700f3c*/
    v20 = (unsigned __int8)a3[1] >> 3; /*0x700f44*/
    do /*0x700f8d*/
    {
      v21 = v27 >> 4; /*0x700f4b*/
      v22 = 0; /*0x700f52*/
      while ( 1 ) /*0x700f6d*/
      {
        memcpy(v19, (char *)&Src + 4 * (v21 != v22++ >> 4), v20); /*0x700f6d*/
        v19 += v20; /*0x700f78*/
        if ( v22 >= 0x20 ) /*0x700f7d*/
          break; /*0x700f7d*/
        v21 = v27 >> 4; /*0x700f56*/
      }
      ++v27; /*0x700f89*/
    }
    while ( v27 < 0x20 ); /*0x700f8d*/
  }
  return v24; /*0x700fa8*/
}
