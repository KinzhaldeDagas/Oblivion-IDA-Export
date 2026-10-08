// DX10OBSE resource decode: NiDX9SourceTextureData creates D3DPOOL_MANAGED IDirect3DTexture9 using converted D3DFORMAT, mip-skip policy, width/height, and level count.
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

  v3 = NiDX9Renderer_ConvertPixelFormatToD3DFormat((int)&this->PixelFormat); /*0x76070b*/
  v4 = **(_DWORD **)(a2 + 0x54); /*0x760717*/
  v23 = v3; /*0x760719*/
  this->Width = v4; /*0x76071d*/
  v5 = **(_DWORD **)(a2 + 0x58); /*0x760723*/
  this->Height = v5; /*0x76072c*/
  if ( v4 && ((v4 - 1) & v4) == 0 && v5 && ((v5 - 1) & v5) == 0 /*0x760759*/
    || (this->pRenderer->__vftable->super.GetFlags((NiRenderer *)this->pRenderer) & 8) != 0 )
  {
    this->Levels = *(_DWORD *)(a2 + 0x60);      // Authoritative Oblivion texture path: for supported power-of-two sources, NiDX9SourceTextureData takes the converted NiPixelData stored mip-level count from +0x60; it does not force a base-only texture. /*0x760767*/
  }
  else
  {
    this->Levels = 1; /*0x76075b*/
  }
  v6 = LODWORD(MEMORY[0xB3F9B0][0x9A8]); /*0x76076a*/
  Levels = this->Levels; /*0x760772*/
  if ( LODWORD(MEMORY[0xB3F9B0][0x9A8]) > Levels - 1 ) /*0x76077a*/
    v6 = Levels - 1; /*0x76077c*/
  if ( v6 ) /*0x760780*/
  {
    Width = this->Width; /*0x760782*/
    Height = this->Height; /*0x760785*/
    v10 = v6; /*0x760788*/
    do /*0x7607a6*/
    {
      if ( (Width & 1) != 0 ) /*0x760793*/
        ++Width; /*0x760795*/
      Width >>= 1; /*0x760798*/
      if ( (Height & 1) != 0 ) /*0x76079c*/
        ++Height; /*0x76079e*/
      Height >>= 1; /*0x7607a1*/
      --v10; /*0x7607a3*/
    }
    while ( v10 ); /*0x7607a6*/
    this->Width = Width; /*0x7607a8*/
    this->Height = Height; /*0x7607ab*/
  }
  pRenderer = this->pRenderer; /*0x7607ae*/
  v21 = v23;                                    // Out of Memory Fix target: original source texture CreateTexture args push D3DPOOL_MANAGED / Usage=0. Plugin detours this block to use D3DPOOL_DEFAULT with D3DUSAGE_DYNAMIC. /*0x7607be*/
  this->LevelsSkipped = v6; /*0x7607c1*/
  device = pRenderer->member.device; /*0x7607c4*/
  v20 = Levels - v6; /*0x7607cf*/
  v19 = this->Height; /*0x7607d0*/
  v13 = this->Width; /*0x7607d1*/
  v22 = 0; /*0x7607d4*/
  v14 = (signed int)device->lpVtbl->CreateTexture( /*0x7607e3*/
                      device,
                      v13,
                      v19,
                      v20,
                      0,
                      v21,
                      D3DPOOL_MANAGED,
                      (IDirect3DTexture9 **)&v22,
                      0);                       // CreateTexture receives Levels = sourceLevelCount - rendererLevelsSkipped. A complete generated DDS mip chain therefore becomes real D3D9 texture levels.
  if ( v14 >= 0 && v22 ) /*0x7607f1*/
  {
    this->dTexture = v22; /*0x7607f3*/
    v15 = *(_DWORD *)(a2 + 0x6C) * *(_DWORD *)(*(_DWORD *)(a2 + 0x5C) + 4 * *(_DWORD *)(a2 + 0x60)); /*0x7607ff*/
    LODWORD(MEMORY[0xB3F9B0][0x9A9]) += v15; /*0x760803*/
    v16 = 0; /*0x760811*/
    this->unk60 = v15; /*0x760815*/
    if ( (v15 & 0xFFFFF000) != v15 ) /*0x760818*/
      v16 = (v15 & 0xFFFFF000) - v15 + 0x1000; /*0x760822*/
    LODWORD(MEMORY[0xB3F9B0][0x9AA]) += v16; /*0x760824*/
    return 1; /*0x76082b*/
  }
  else
  {
    D3D9_HResultToString(v14); /*0x760835*/
    Shared_NoOpVirtual_60D0A0(v18); /*0x760840*/
    this->dTexture = 0; /*0x760848*/
    return 0; /*0x760850*/
  }
}
