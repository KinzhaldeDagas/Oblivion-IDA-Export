int sub_55FDF0()
{
  volatile LONG *v0; // esi
  UInt32 *v1; // eax
  char v2; // bl
  Ni2DBuffer *v3; // edi
  void (__thiscall ***v4)(_DWORD, int); // esi
  NiPixelData *v5; // eax
  NiPixelData *v6; // esi
  int v7; // eax
  _BYTE *v8; // eax
  int v9; // edi
  int v10; // ecx
  float *v11; // eax
  float *v12; // eax
  float *v13; // ebx
  NiSourceTexture *TexturePixelData; // eax
  NiSourceTexture *v15; // esi
  void (__stdcall *v16)(volatile LONG *); // ebp
  NiSourceTexture *v17; // edi
  float *v18; // eax
  float *v19; // eax
  int v20; // edi
  int v21; // esi
  float *v22; // eax
  float *v23; // eax
  volatile LONG *v25; // [esp+18h] [ebp-14h] BYREF
  int v26; // [esp+1Ch] [ebp-10h] BYREF
  int v27; // [esp+28h] [ebp-4h]

  v0 = 0;
  if ( !dword_B39E04 )
    sub_55F750(0);
  if ( !*(_DWORD *)(dword_B39E04 + 4) )
  {
    if ( TES )
    {
      v1 = sub_442890((UInt32 *)&v26, "Data\\Textures\\Trees\\CanopyShadow.dds", 1, 0);
      v27 = 0;
      v0 = v25;
      v2 = 1;
    }
    else
    {
      v25 = 0;
      v1 = (UInt32 *)&v25;
      v27 = 1;
      v2 = 2;
    }
    v3 = (Ni2DBuffer *)*v1;
    if ( !dword_B39E04 )
      sub_55F750(0);
    NiSmartPointer_Set__((Ni2DBuffer **)(dword_B39E04 + 4), v3);
    v27 = 0;
    if ( (v2 & 2) != 0 )
    {
      v2 &= ~2u;
      if ( v0 )
      {
        if ( !InterlockedDecrement(v0 + 1) )
          (**(void (__thiscall ***)(void *, int))v0)((void *)v0, 1);
      }
    }
    v27 = 0xFFFFFFFF;
    if ( (v2 & 1) != 0 )
    {
      v4 = (void (__thiscall ***)(_DWORD, int))v26;
      if ( v26 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) )
        {
          if ( v4 )
            (**v4)(v4, 1);
        }
      }
    }
    if ( !dword_B39E04 )
      sub_55F750(0);
    sub_55E340(*(_DWORD *)(dword_B39E04 + 4));
  }
  if ( !dword_B39E04 )
    sub_55F750(0);
  if ( !*(_DWORD *)(dword_B39E04 + 4) )
  {
    v5 = (NiPixelData *)FormHeapAlloc(0x70u);
    v25 = (volatile LONG *)v5;
    v27 = 2;
    if ( v5 )
      v6 = NiPixelData::NiPixelData(v5, 0x10u, 0x10u, (int)&unk_B25E48, 1u, 1);
    else
      v6 = 0;
    v7 = *((_DWORD *)v6 + 0x14) + **((_DWORD **)v6 + 0x17);
    v27 = 0xFFFFFFFF;
    v8 = (_BYTE *)(v7 + 2);
    v9 = 0x10;
    do
    {
      v10 = 0x10;
      do
      {
        v8[0xFFFFFFFE] = 0xFF;
        v8[0xFFFFFFFF] = 0xFF;
        *v8 = 0xFF;
        v8 += 3;
        --v10;
      }
      while ( v10 );
      --v9;
    }
    while ( v9 );
    ++*((_DWORD *)v6 + 0x1A);
    v11 = (float *)dword_B39E04;
    if ( !dword_B39E04 )
    {
      v12 = (float *)FormHeapAlloc(0x28u);
      v25 = (volatile LONG *)v12;
      v27 = 3;
      if ( v12 )
        v11 = sub_55E850(v12);
      else
        v11 = 0;
      v27 = 0xFFFFFFFF;
      dword_B39E04 = (int)v11;
    }
    v13 = v11;
    TexturePixelData = NiSourceTexture::LoadTexturePixelData(v6, (PixelLayout *)dword_B256D0);
    v15 = *((NiSourceTexture **)v13 + 1);
    v16 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement;
    v17 = TexturePixelData;
    if ( v15 != TexturePixelData )
    {
      if ( v15 )
      {
        if ( !InterlockedDecrement((volatile LONG *)&v15->members) )
          v15->vtbl->super.super.super.Destructor((NiRefObject *)v15, 1);
      }
      *((_DWORD *)v13 + 1) = v17;
      if ( v17 )
        v16((volatile LONG *)&v17->members);
    }
    v18 = (float *)dword_B39E04;
    if ( !dword_B39E04 )
    {
      v19 = (float *)FormHeapAlloc(0x28u);
      v25 = (volatile LONG *)v19;
      v27 = 4;
      if ( v19 )
        v18 = sub_55E850(v19);
      else
        v18 = 0;
      v27 = 0xFFFFFFFF;
      dword_B39E04 = (int)v18;
    }
    v20 = *((_DWORD *)v18 + 1);
    v21 = dword_B43108;
    if ( dword_B43108 != v20 )
    {
      if ( v21 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) )
          (**(void (__thiscall ***)(int, int))v21)(v21, 1);
      }
      dword_B43108 = v20;
      if ( v20 )
        v16((volatile LONG *)(v20 + 4));
    }
  }
  v22 = (float *)dword_B39E04;
  if ( !dword_B39E04 )
  {
    v23 = (float *)FormHeapAlloc(0x28u);
    v26 = (int)v23;
    v27 = 5;
    if ( v23 )
      v22 = sub_55E850(v23);
    else
      v22 = 0;
    dword_B39E04 = (int)v22;
  }
  return *((_DWORD *)v22 + 1);
}
