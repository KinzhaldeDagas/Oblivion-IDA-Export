char __thiscall sub_760700(NiDX9SourceTextureData *this, int a2)
{
  signed int v3; // eax
  UInt32 v4; // edx
  UInt32 v5; // eax
  UInt32 v6; // ecx
  UInt32 Levels; // edi
  UInt32 Width; // edx
  UInt32 Height; // eax
  UInt32 v10; // ebx
  NiDX9Renderer *pRenderer; // edx
  IDirect3DDevice9 *device; // eax
  UInt32 v13; // ecx
  signed int v14; // eax
  UInt32 v15; // eax
  unsigned int v16; // edx
  void *v18; // ecx
  UInt32 v19; // [esp-8h] [ebp-34h]
  UInt32 v20; // [esp-4h] [ebp-30h]
  D3DFORMAT v21; // [esp+4h] [ebp-28h]
  IDirect3DBaseTexture9 *v22; // [esp+24h] [ebp-8h] BYREF
  signed int v23; // [esp+28h] [ebp-4h]

  v3 = sub_76BEF0((int)&this->PixelFormat);
  v4 = **(_DWORD **)(a2 + 0x54);
  v23 = v3;
  this->Width = v4;
  v5 = **(_DWORD **)(a2 + 0x58);
  this->Height = v5;
  if ( v4 && ((v4 - 1) & v4) == 0 && v5 && ((v5 - 1) & v5) == 0
    || (this->pRenderer->__vftable->super.GetFlags((NiRenderer *)this->pRenderer) & 8) != 0 )
  {
    this->Levels = *(_DWORD *)(a2 + 0x60);
  }
  else
  {
    this->Levels = 1;
  }
  v6 = dword_B42050;
  Levels = this->Levels;
  if ( dword_B42050 > Levels - 1 )
    v6 = Levels - 1;
  if ( v6 )
  {
    Width = this->Width;
    Height = this->Height;
    v10 = v6;
    do
    {
      if ( (Width & 1) != 0 )
        ++Width;
      Width >>= 1;
      if ( (Height & 1) != 0 )
        ++Height;
      Height >>= 1;
      --v10;
    }
    while ( v10 );
    this->Width = Width;
    this->Height = Height;
  }
  pRenderer = this->pRenderer;
  v21 = v23;
  this->LevelsSkipped = v6;
  device = pRenderer->member.device;
  v20 = Levels - v6;
  v19 = this->Height;
  v13 = this->Width;
  v22 = 0;
  v14 = (signed int)device->lpVtbl->CreateTexture(
                      device,
                      v13,
                      v19,
                      v20,
                      0,
                      v21,
                      D3DPOOL_MANAGED,
                      (IDirect3DTexture9 **)&v22,
                      0);
  if ( v14 >= 0 && v22 )
  {
    this->dTexture = v22;
    v15 = *(_DWORD *)(a2 + 0x6C) * *(_DWORD *)(*(_DWORD *)(a2 + 0x5C) + 4 * *(_DWORD *)(a2 + 0x60));
    dword_B42054 += v15;
    v16 = 0;
    this->unk60 = v15;
    if ( (v15 & 0xFFFFF000) != v15 )
      v16 = (v15 & 0xFFFFF000) - v15 + 0x1000;
    dword_B42058 += v16;
    return 1;
  }
  else
  {
    sub_7736F0(v14);
    TESTexture::ClearComponentReferences(v18);
    this->dTexture = 0;
    return 0;
  }
}
