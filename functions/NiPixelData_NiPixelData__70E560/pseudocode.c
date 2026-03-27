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

  NiObject_constr((NiObject *)this);
  v35 = 0;
  *(_DWORD *)this = &NiPixelData::`vftable';
  InitSurfacEData((NiSurfaceData *)((char *)this + 8));
  *((_DWORD *)this + 0x13) = 0;
  v7 = a5;
  qmemcpy((char *)this + 8, (const void *)a4, 0x44u);
  v8 = a3;
  v9 = a2;
  LOBYTE(v35) = 1;
  if ( !a5 )
    v7 = sub_70E2F0(a2, a3);
  *((_DWORD *)this + 0x18) = v7;
  *((_DWORD *)this + 0x1B) = a6;
  v10 = *(_DWORD *)(a4 + 4);
  v11 = 0;
  v32[0] = 0;
  if ( v10 >= 4 && v10 <= 6 )
  {
    *((_DWORD *)this + 0x19) = 0;
    v21 = 0;
    for ( i = 8 * (*(_DWORD *)(a4 + 4) != 4) + 8; v21 < *((_DWORD *)this + 0x18); v8 >>= 1 )
    {
      v23 = v9;
      if ( !v9 )
        v23 = 1;
      Src[v21] = v23;
      v24 = v8;
      if ( !v8 )
        v24 = 1;
      v34[v21] = v24;
      v25 = v32[v21++] + i * ((((v23 + 3) & 0xFFFFFFFC) * ((v24 + 3) & 0xFFFFFFFC)) >> 4);
      v32[v21] = v25;
      v9 >>= 1;
    }
  }
  else
  {
    v12 = *(unsigned __int8 *)(a4 + 1) >> 3;
    v31 = v12;
    *((_DWORD *)this + 0x19) = v12;
    if ( v12 )
    {
      v13 = 0;
      if ( *((_DWORD *)this + 0x18) )
      {
        while ( 1 )
        {
          v14 = v9;
          if ( !v9 )
            v14 = 1;
          Src[v13] = v14;
          v15 = v8;
          if ( !v8 )
            v15 = 1;
          v16 = v32[v13] + v14 * v15 * v12;
          v34[v13] = v15;
          v32[++v13] = v16;
          v9 >>= 1;
          v8 >>= 1;
          if ( v13 >= *((_DWORD *)this + 0x18) )
            break;
          v12 = v31;
        }
      }
    }
    else if ( *((_DWORD *)this + 0x18) )
    {
      v17 = *((_DWORD *)this + 0x18);
      do
      {
        v18 = v9;
        if ( !v9 )
          v18 = 1;
        Src[v11] = v18;
        v19 = v8;
        if ( !v8 )
          v19 = 1;
        v34[v11] = v19;
        v20 = v32[v11++] + ((unsigned int)(v18 * v19) >> 1);
        v32[v11] = v20;
        v9 >>= 1;
        v8 >>= 1;
      }
      while ( v11 < v17 );
    }
  }
  sub_732280(this, *((_DWORD *)this + 0x18), a6, v32[*((_DWORD *)this + 0x18)]);
  v26 = 4 * *((_DWORD *)this + 0x18);
  LODWORD(v30) = v26;
  memcpy(*((void **)this + 0x15), Src, v30);
  LODWORD(v29) = v26;
  memcpy(*((void **)this + 0x16), v34, v29);
  LODWORD(v28) = 4 * *((_DWORD *)this + 0x18) + 4;
  memcpy(*((void **)this + 0x17), v32, v28);
  *((_DWORD *)this + 0x1A) = 1;
  return this;
}
