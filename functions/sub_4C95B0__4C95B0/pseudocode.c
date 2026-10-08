char __thiscall sub_4C95B0(Ni2DBuffer **this)
{
  Ni2DBuffer **v1; // esi
  UInt32 v2; // ebx
  const char *v3; // eax
  Ni2DBuffer *v4; // eax
  UInt32 v5; // edi
  NiSourceTexture *TextureByFilename; // eax
  Ni2DBuffer *v8; // eax
  Ni2DBuffer *v9; // [esp-8h] [ebp-238h]
  int v10; // [esp+10h] [ebp-220h] BYREF
  UInt32 v11; // [esp+14h] [ebp-21Ch] BYREF
  char Src[260]; // [esp+18h] [ebp-218h] BYREF
  char v13[260]; // [esp+11Ch] [ebp-114h] BYREF
  unsigned int v14; // [esp+22Ch] [ebp-4h]

  v1 = this + 9; /*0x4c95f1*/
  if ( *(this + 9) ) /*0x4c95ec*/
    return 0; /*0x4c95ec*/
  v2 = unk_B35300; /*0x4c95fa*/
  if ( !unk_B35300 ) /*0x4c95fa*/
    return 0; /*0x4c9602*/
  v11 = 0; /*0x4c9608*/
  v3 = (const char *)*(this + 7); /*0x4c960c*/
  v14 = 0; /*0x4c9611*/
  if ( !v3 ) /*0x4c9618*/
    v3 = EmptyString; /*0x4c961a*/
  _sprintf(Src, "%s\\Landscape\\%s", "Textures", v3); /*0x4c962f*/
  v4 = (Ni2DBuffer *)(*(int (__thiscall **)(UInt32, char *, _DWORD))(*(_DWORD *)v2 + 4))(v2, Src, 0); /*0x4c9645*/
  NiSmartPointer_Set__((Ni2DBuffer **)&v11, v4); /*0x4c964c*/
  v5 = v11; /*0x4c9651*/
  if ( v11 ) /*0x4c9657*/
  {
    v8 = (Ni2DBuffer *)NiRTTI_Cast((BSStringT *)stru_B3F95C, (NiObject *)v11); /*0x4c96d5*/
    NiSmartPointer_Set__(v1, v8); /*0x4c96e0*/
    v9 = *v1; /*0x4c96ec*/
    v10 = 0; /*0x4c96f2*/
    NiTMap_GetAt(&off_B09414, (int)v9, &v10); /*0x4c96fa*/
    NiTMap_SetAt(&off_B09414, (int)*v1, v10 + 1); /*0x4c970f*/
    v14 = 0xFFFFFFFF; /*0x4c9718*/
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x4c9723*/
      (**(void (__thiscall ***)(UInt32, int))v5)(v5, 1); /*0x4c9735*/
    return 0; /*0x4c9737*/
  }
  if ( MEMORY[0xB33A04] && MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], Src, (UInt32)v13, v11, 0xFFFFFFFF) ) /*0x4c9678*/
    TextureByFilename = NiSourceTexture::LoadTextureByFilename( /*0x4c968d*/
                          v13,
                          (PixelLayout *)OB_TES_DefaultSourceTextureFormatPrefs_010201A0,
                          1u);
  else
    TextureByFilename = NiSourceTexture::LoadTextureByFilename( /*0x4c969b*/
                          Src,
                          (PixelLayout *)OB_TES_DefaultSourceTextureFormatPrefs_010201A0,
                          1u);
  NiSmartPointer_Set__(v1, (Ni2DBuffer *)TextureByFilename); /*0x4c96a6*/
  (*(void (__thiscall **)(UInt32, char *, Ni2DBuffer *))(*(_DWORD *)v2 + 8))(v2, Src, *v1); /*0x4c96ba*/
  NiTMap_SetAt(&off_B09414, (int)*v1, 1); /*0x4c96c6*/
  return 1; /*0x4c9739*/
}
