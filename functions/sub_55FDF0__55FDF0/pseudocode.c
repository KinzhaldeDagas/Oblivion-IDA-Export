// Verified canopy-shadow path plus version difference: both games use Data\\Textures\\Trees\\CanopyShadow.dds and a white 16x16 fallback. Fallout loads through TES::CreateTextureImage and also updates BSShaderManager::pProjectedShadowTexture; Oblivion loads through OB_TES_LoadOrFindSourceTexture and stores through its renderer helper. Oblivion's adjacent renderer-resource global remains Unknown.
NiSourceTexture *__cdecl BSTreeManager_GetCanopyShadow()
{
  volatile LONG *v0; // esi
  UInt32 *SourceTexture_010201A0; // eax
  char v2; // bl
  Ni2DBuffer *v3; // edi
  void (__thiscall ***v4)(_DWORD, int); // esi
  NiPixelData *v5; // eax
  NiPixelData *v6; // esi
  int v7; // eax
  _BYTE *v8; // eax
  int v9; // edi
  int v10; // ecx
  BSTreeManager_Oblivion *v11; // eax
  BSTreeManager_Oblivion *v12; // eax
  BSTreeManager_Oblivion *v13; // ebx
  NiSourceTexture *TexturePixelData; // eax
  NiSourceTexture *canopyShadowTexture; // esi
  void (__stdcall *v16)(volatile LONG *); // ebp
  NiSourceTexture *v17; // edi
  BSTreeManager_Oblivion *v18; // eax
  BSTreeManager_Oblivion *v19; // eax
  float v20; // edi
  float v21; // esi
  BSTreeManager_Oblivion *v22; // eax
  BSTreeManager_Oblivion *v23; // eax
  volatile LONG *v25; // [esp+18h] [ebp-14h] BYREF
  int v26; // [esp+1Ch] [ebp-10h] BYREF
  int v27; // [esp+28h] [ebp-4h]

  v0 = 0; /*0x55fe17*/
  if ( !g_BSTreeManager_Instance ) /*0x55fe1d*/
    BSTreeManager_Create(0); /*0x55fe26*/
  if ( !g_BSTreeManager_Instance->canopyShadowTexture ) /*0x55fe33*/
  {
    if ( MEMORY[0xB333A0] ) /*0x55fe3e*/
    {
      SourceTexture_010201A0 = OB_TES_LoadOrFindSourceTexture_010201A0( /*0x55fe55*/
                                 (UInt32 *)&v26,
                                 "Data\\Textures\\Trees\\CanopyShadow.dds",
                                 1,
                                 0);
      v27 = 0; /*0x55fe5a*/
      v0 = v25; /*0x55fe5e*/
      v2 = 1; /*0x55fe62*/
    }
    else
    {
      v25 = 0; /*0x55fe69*/
      SourceTexture_010201A0 = (UInt32 *)&v25; /*0x55fe6d*/
      v27 = 1; /*0x55fe71*/
      v2 = 2; /*0x55fe79*/
    }
    v3 = (Ni2DBuffer *)*SourceTexture_010201A0; /*0x55fe85*/
    if ( !g_BSTreeManager_Instance ) /*0x55fe7e*/
      BSTreeManager_Create(0); /*0x55fe8f*/
    NiSmartPointer_Set__((Ni2DBuffer **)&g_BSTreeManager_Instance->canopyShadowTexture, v3); /*0x55fea1*/
    v27 = 0; /*0x55fea9*/
    if ( (v2 & 2) != 0 ) /*0x55feb1*/
    {
      v2 &= ~2u; /*0x55feb3*/
      if ( v0 ) /*0x55febc*/
      {
        if ( !InterlockedDecrement(v0 + 1) ) /*0x55fec2*/
          (**(void (__thiscall ***)(void *, int))v0)((void *)v0, 1); /*0x55fed4*/
      }
    }
    v27 = 0xFFFFFFFF; /*0x55fedc*/
    if ( (v2 & 1) != 0 ) /*0x55fee0*/
    {
      v4 = (void (__thiscall ***)(_DWORD, int))v26; /*0x55fee2*/
      if ( v26 ) /*0x55fee8*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) ) /*0x55feee*/
        {
          if ( v4 ) /*0x55fefa*/
            (**v4)(v4, 1); /*0x55ff04*/
        }
      }
    }
    if ( !g_BSTreeManager_Instance ) /*0x55ff06*/
      BSTreeManager_Create(0); /*0x55ff11*/
    sub_55E340(*(float *)&g_BSTreeManager_Instance->canopyShadowTexture); /*0x55ff23*/
  }
  if ( !g_BSTreeManager_Instance ) /*0x55ff30*/
    BSTreeManager_Create(0); /*0x55ff3b*/
  if ( !g_BSTreeManager_Instance->canopyShadowTexture ) /*0x55ff49*/
  {
    v5 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x55ff56*/
    v25 = (volatile LONG *)v5; /*0x55ff5e*/
    v27 = 2; /*0x55ff64*/
    if ( v5 ) /*0x55ff6c*/
      v6 = NiPixelData::NiPixelData(v5, 0x10u, 0x10u, (int)&unk_B25E48, 1u, 1); /*0x55ff82*/
    else
      v6 = 0; /*0x55ff86*/
    v7 = *((_DWORD *)v6 + 0x14) + **((_DWORD **)v6 + 0x17); /*0x55ff8d*/
    v27 = 0xFFFFFFFF; /*0x55ff90*/
    v8 = (_BYTE *)(v7 + 2); /*0x55ff94*/
    v9 = 0x10; /*0x55ff97*/
    do /*0x55ffb8*/
    {
      v10 = 0x10; /*0x55ffa0*/
      do /*0x55ffb3*/
      {
        v8[0xFFFFFFFE] = 0xFF; /*0x55ffa5*/
        v8[0xFFFFFFFF] = 0xFF; /*0x55ffa8*/
        *v8 = 0xFF; /*0x55ffab*/
        v8 += 3; /*0x55ffad*/
        --v10; /*0x55ffb0*/
      }
      while ( v10 ); /*0x55ffb3*/
      --v9; /*0x55ffb5*/
    }
    while ( v9 ); /*0x55ffb8*/
    ++*((_DWORD *)v6 + 0x1A); /*0x55ffba*/
    v11 = g_BSTreeManager_Instance; /*0x55ffbe*/
    if ( !g_BSTreeManager_Instance ) /*0x55ffbe*/
    {
      v12 = (BSTreeManager_Oblivion *)FormHeapAlloc(0x28u); /*0x55ffc9*/
      v25 = (volatile LONG *)v12; /*0x55ffd1*/
      v27 = 3; /*0x55ffd7*/
      if ( v12 ) /*0x55ffdf*/
        v11 = BSTreeManager_ctor(v12); /*0x55ffe3*/
      else
        v11 = 0; /*0x55ffea*/
      v27 = 0xFFFFFFFF; /*0x55ffec*/
      g_BSTreeManager_Instance = v11; /*0x55fff0*/
    }
    v13 = v11; /*0x55fffb*/
    TexturePixelData = NiSourceTexture::LoadTexturePixelData( /*0x55fffd*/
                         v6,
                         &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout);
    canopyShadowTexture = v13->canopyShadowTexture; /*0x560002*/
    v16 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement; /*0x560005*/
    v17 = TexturePixelData; /*0x56000b*/
    if ( canopyShadowTexture != TexturePixelData ) /*0x560012*/
    {
      if ( canopyShadowTexture ) /*0x560016*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&canopyShadowTexture->members) ) /*0x56001c*/
          canopyShadowTexture->vtbl->super.super.super.Destructor((NiRefObject *)canopyShadowTexture, 1); /*0x560032*/
      }
      v13->canopyShadowTexture = v17; /*0x560036*/
      if ( v17 ) /*0x560039*/
        v16((volatile LONG *)&v17->members); /*0x56003f*/
    }
    v18 = g_BSTreeManager_Instance; /*0x560041*/
    if ( !g_BSTreeManager_Instance ) /*0x560041*/
    {
      v19 = (BSTreeManager_Oblivion *)FormHeapAlloc(0x28u); /*0x56004c*/
      v25 = (volatile LONG *)v19; /*0x560054*/
      v27 = 4; /*0x56005a*/
      if ( v19 ) /*0x560062*/
        v18 = BSTreeManager_ctor(v19); /*0x560066*/
      else
        v18 = 0; /*0x56006d*/
      v27 = 0xFFFFFFFF; /*0x56006f*/
      g_BSTreeManager_Instance = v18; /*0x560077*/
    }
    v20 = *(float *)&v18->canopyShadowTexture; /*0x56007c*/
    v21 = unk_B43108[0]; /*0x56007f*/
    if ( LODWORD(unk_B43108[0]) != LODWORD(v20) ) /*0x560087*/
    {
      if ( v21 != 0.0 && !InterlockedDecrement((volatile LONG *)(LODWORD(v21) + 4)) ) /*0x560091*/
        (**(void (__thiscall ***)(float, int))LODWORD(v21))(COERCE_FLOAT(LODWORD(v21)), 1); /*0x5600a7*/
      unk_B43108[0] = v20; /*0x5600ab*/
      if ( v20 != 0.0 ) /*0x5600b1*/
        v16((volatile LONG *)(LODWORD(v20) + 4)); /*0x5600b7*/
    }
  }
  v22 = g_BSTreeManager_Instance; /*0x5600b9*/
  if ( !g_BSTreeManager_Instance ) /*0x5600b9*/
  {
    v23 = (BSTreeManager_Oblivion *)FormHeapAlloc(0x28u); /*0x5600c4*/
    v26 = (int)v23; /*0x5600cc*/
    v27 = 5; /*0x5600d2*/
    if ( v23 ) /*0x5600da*/
      v22 = BSTreeManager_ctor(v23); /*0x5600de*/
    else
      v22 = 0; /*0x5600e5*/
    g_BSTreeManager_Instance = v22; /*0x5600e7*/
  }
  return v22->canopyShadowTexture; /*0x5600ef*/
}
