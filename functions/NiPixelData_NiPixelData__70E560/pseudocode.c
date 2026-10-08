NiPixelData *__thiscall NiPixelData::NiPixelData(
        NiPixelData *this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        int a6)
{
  unsigned int v7; // eax
  unsigned int v8; // esi
  unsigned int v9; // edi
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // ebx
  unsigned int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // ebx
  unsigned int v17; // ebx
  int v18; // edx
  int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  int i; // ebx
  int v23; // edx
  int v24; // ecx
  unsigned int v25; // ecx
  int v26; // esi
  size_t v28; // [esp-1Ch] [ebp-104h]
  size_t v29; // [esp-10h] [ebp-F8h]
  size_t v30; // [esp-4h] [ebp-ECh]
  int v31; // [esp+14h] [ebp-D4h]
  _DWORD v32[16]; // [esp+1Ch] [ebp-CCh] BYREF
  int Src[16]; // [esp+5Ch] [ebp-8Ch] BYREF
  int v34[16]; // [esp+9Ch] [ebp-4Ch] BYREF
  int v35; // [esp+E4h] [ebp-4h]

  NiObject_constr((NiObject *)this); /*0x70e593*/
  v35 = 0; /*0x70e59f*/
  *(_DWORD *)this = &NiPixelData::`vftable'; /*0x70e5a6*/
  InitSurfacEData((NiSurfaceData *)((char *)this + 8)); /*0x70e5ad*/
  *((_DWORD *)this + 0x13) = 0; /*0x70e5b2*/
  v7 = a5; /*0x70e5bc*/
  qmemcpy((char *)this + 8, (const void *)a4, 0x44u); /*0x70e5cc*/
  v8 = a3; /*0x70e5ce*/
  v9 = a2; /*0x70e5d5*/
  LOBYTE(v35) = 1; /*0x70e5dc*/
  if ( !a5 ) /*0x70e5e4*/
    v7 = OB_NiPixelData_CalcFullMipLevelCount_010201A0(a2, a3); /*0x70e5e8*/
  *((_DWORD *)this + 0x18) = v7; /*0x70e5f0*/
  *((_DWORD *)this + 0x1B) = a6; /*0x70e5fa*/
  v10 = *(_DWORD *)(a4 + 4); /*0x70e5fd*/
  v11 = 0; /*0x70e600*/
  v32[0] = 0; /*0x70e605*/
  if ( v10 >= 4 && v10 <= 6 ) /*0x70e60e*/
  {
    *((_DWORD *)this + 0x19) = 0; /*0x70e6be*/
    v21 = 0; /*0x70e6c8*/
    for ( i = 8 * (*(_DWORD *)(a4 + 4) != 4) + 8; v21 < *((_DWORD *)this + 0x18); v8 >>= 1 ) /*0x70e6ca*/
    {
      v23 = v9; /*0x70e6da*/
      if ( !v9 ) /*0x70e6dc*/
        v23 = 1; /*0x70e6de*/
      Src[v21] = v23; /*0x70e6e5*/
      v24 = v8; /*0x70e6e9*/
      if ( !v8 ) /*0x70e6eb*/
        v24 = 1; /*0x70e6ed*/
      v34[v21] = v24; /*0x70e6f2*/
      v25 = v32[v21++] + i * ((((v23 + 3) & 0xFFFFFFFC) * ((v24 + 3) & 0xFFFFFFFC)) >> 4); /*0x70e70e*/
      v32[v21] = v25; /*0x70e715*/
      v9 >>= 1; /*0x70e719*/
    }
  }
  else
  {
    v12 = *(unsigned __int8 *)(a4 + 1) >> 3; /*0x70e618*/
    v31 = v12; /*0x70e61b*/
    *((_DWORD *)this + 0x19) = v12; /*0x70e61f*/
    if ( v12 ) /*0x70e622*/
    {
      v13 = 0; /*0x70e624*/
      if ( *((_DWORD *)this + 0x18) ) /*0x70e626*/
      {
        while ( 1 ) /*0x70e637*/
        {
          v14 = v9; /*0x70e637*/
          if ( !v9 ) /*0x70e639*/
            v14 = 1; /*0x70e63b*/
          Src[v13] = v14; /*0x70e642*/
          v15 = v8; /*0x70e646*/
          if ( !v8 ) /*0x70e648*/
            v15 = 1; /*0x70e64a*/
          v16 = v32[v13] + v14 * v15 * v12; /*0x70e655*/
          v34[v13] = v15; /*0x70e659*/
          v32[++v13] = v16; /*0x70e660*/
          v9 >>= 1; /*0x70e667*/
          v8 >>= 1; /*0x70e669*/
          if ( v13 >= *((_DWORD *)this + 0x18) ) /*0x70e66e*/
            break; /*0x70e66e*/
          v12 = v31; /*0x70e631*/
        }
      }
    }
    else if ( *((_DWORD *)this + 0x18) ) /*0x70e675*/
    {
      v17 = *((_DWORD *)this + 0x18); /*0x70e67e*/
      do /*0x70e6b8*/
      {
        v18 = v9; /*0x70e683*/
        if ( !v9 ) /*0x70e685*/
          v18 = 1; /*0x70e687*/
        Src[v11] = v18; /*0x70e68e*/
        v19 = v8; /*0x70e692*/
        if ( !v8 ) /*0x70e694*/
          v19 = 1; /*0x70e696*/
        v34[v11] = v19; /*0x70e69b*/
        v20 = v32[v11++] + ((unsigned int)(v18 * v19) >> 1); /*0x70e6a7*/
        v32[v11] = v20; /*0x70e6ae*/
        v9 >>= 1; /*0x70e6b2*/
        v8 >>= 1; /*0x70e6b4*/
      }
      while ( v11 < v17 ); /*0x70e6b8*/
    }
  }
  sub_732280(this, *((_DWORD *)this + 0x18), a6, v32[*((_DWORD *)this + 0x18)]); /*0x70e735*/
  v26 = 4 * *((_DWORD *)this + 0x18); /*0x70e742*/
  LODWORD(v30) = v26; /*0x70e744*/
  memcpy(*((void **)this + 0x15), Src, v30); /*0x70e74b*/
  LODWORD(v29) = v26; /*0x70e753*/
  memcpy(*((void **)this + 0x16), v34, v29); /*0x70e75d*/
  LODWORD(v28) = 4 * *((_DWORD *)this + 0x18) + 4; /*0x70e76f*/
  memcpy(*((void **)this + 0x17), v32, v28); /*0x70e776*/
  *((_DWORD *)this + 0x1A) = 1; /*0x70e77e*/
  return this; /*0x70e787*/
}
