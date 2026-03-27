NiPixelData *__cdecl sub_700C70(float *a1, float *a2, char *a3, unsigned int a4)
{
  NiPixelData *v4; // eax
  char v5; // al
  unsigned int v6; // edi
  char v7; // al
  unsigned int v8; // edi
  char v9; // al
  unsigned int v10; // edi
  char v11; // al
  unsigned int v12; // ebp
  unsigned int v13; // edi
  unsigned int v14; // ebp
  unsigned int v15; // edi
  unsigned int v16; // ebp
  unsigned int v17; // edi
  unsigned int v18; // ebx
  char *v19; // edi
  int v20; // ebp
  unsigned int v21; // eax
  unsigned int v22; // ebx
  size_t v24; // [esp-4h] [ebp-38h]
  NiPixelData *v25; // [esp+14h] [ebp-20h]
  __int64 Src; // [esp+20h] [ebp-14h] BYREF
  int v27; // [esp+30h] [ebp-4h]
  unsigned int v28; // [esp+38h] [ebp+4h]
  unsigned int i; // [esp+3Ch] [ebp+8h]

  v4 = (NiPixelData *)FormHeapAlloc(0x70u);
  v27 = 0;
  if ( v4 )
    v25 = NiPixelData::NiPixelData(v4, 0x20u, 0x20u, (int)a3, 1u, a4);
  else
    v25 = 0;
  v5 = sub_700C00(a3, 0);
  Src = (__int64)(*a1 * dbl_A3DDD8);
  v6 = ((_DWORD)Src << v5) & sub_700B60(a3, 0);
  v7 = sub_700C00(a3, 1);
  Src = (__int64)(a1[1] * dbl_A3DDD8);
  v8 = ((_DWORD)Src << v7) & sub_700B60(a3, 1) | v6;
  v9 = sub_700C00(a3, 2);
  Src = (__int64)(a1[2] * dbl_A3DDD8);
  v10 = ((_DWORD)Src << v9) & sub_700B60(a3, 2) | v8;
  v11 = sub_700C00(a3, 3);
  Src = (__int64)(a1[3] * dbl_A3DDD8);
  LODWORD(Src) = ((_DWORD)Src << v11) & sub_700B60(a3, 3) | v10;
  v12 = (unsigned int)(__int64)(*a2 * dbl_A3DDD8) << sub_700C00(a3, 0);
  v13 = v12 & sub_700B60(a3, 0);
  v14 = (unsigned int)(__int64)(a2[1] * dbl_A3DDD8) << sub_700C00(a3, 1);
  v15 = v14 & sub_700B60(a3, 1) | v13;
  v16 = (unsigned int)(__int64)(a2[2] * dbl_A3DDD8) << sub_700C00(a3, 2);
  v17 = v16 & sub_700B60(a3, 2) | v15;
  v18 = (unsigned int)(__int64)(a2[3] * dbl_A3DDD8) << sub_700C00(a3, 3);
  HIDWORD(Src) = v18 & sub_700B60(a3, 3) | v17;
  for ( i = 0; i < a4; ++i )
  {
    v19 = (char *)(*((_DWORD *)v25 + 0x14)
                 + **((_DWORD **)v25 + 0x17)
                 + i * *(_DWORD *)(*((_DWORD *)v25 + 0x17) + 4 * *((_DWORD *)v25 + 0x18)));
    v28 = 0;
    v20 = (unsigned __int8)a3[1] >> 3;
    do
    {
      v21 = v28 >> 4;
      v22 = 0;
      while ( 1 )
      {
        LODWORD(v24) = v20;
        memcpy(v19, (char *)&Src + 4 * (v21 != v22++ >> 4), v24);
        v19 += v20;
        if ( v22 >= 0x20 )
          break;
        v21 = v28 >> 4;
      }
      ++v28;
    }
    while ( v28 < 0x20 );
  }
  return v25;
}
