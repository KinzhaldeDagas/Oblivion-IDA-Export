// Loads/caches a NiSourceTexture by filename and optionally rejects a loaded texture that lacks mipmaps. The first argument is the returned smart-pointer storage.
NiSourceTexture **__cdecl NiSourceTexture_LoadChecked(
        NiSourceTexture **outTexture,
        const char *path,
        char loadFromCache,
        char requireMipmaps)
{
  NiSourceTexture *v4; // esi
  int v5; // ecx
  bool v6; // zf
  UInt32 v7; // eax
  NiSourceTexture *TextureByFilename; // eax
  NiObject *v9; // eax
  NiDX9TextureData *rendererData; // ecx
  NiObject *v11; // edi
  UInt32 v13; // [esp+10h] [ebp-210h] BYREF
  int v14; // [esp+14h] [ebp-20Ch]
  NiSourceTexture **v15; // [esp+18h] [ebp-208h]
  char v16[500]; // [esp+1Ch] [ebp-204h] BYREF
  int v17; // [esp+21Ch] [ebp-4h]

  v4 = 0; /*0x7b8248*/
  v14 = 0; /*0x7b824a*/
  v15 = outTexture; /*0x7b8252*/
  v13 = 0; /*0x7b8256*/
  v5 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0x23]; /*0x7b825a*/
  v6 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0x23] == 0; /*0x7b8260*/
  v17 = 1; /*0x7b8262*/
  if ( !v6 ) /*0x7b826d*/
  {
    v7 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v5 + 4))(v5, path, 0); /*0x7b8276*/
    if ( v7 ) /*0x7b827a*/
    {
      v4 = (NiSourceTexture *)v7; /*0x7b827c*/
      v13 = v7; /*0x7b8282*/
      InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x7b8286*/
    }
    v5 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0x23]; /*0x7b828c*/
  }
  if ( !loadFromCache && v5 ) /*0x7b829e*/
    goto LABEL_22; /*0x7b829e*/
  if ( !v4 ) /*0x7b82a6*/
  {
    if ( NiFile_CanOpenFileWithMode_Indirect((int)path, 0) ) /*0x7b82aa*/
    {
      TextureByFilename = NiSourceTexture::LoadTextureByFilename( /*0x7b82be*/
                            (char *)path,
                            &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout,
                            1);
      NiSmartPointer_Set__((Ni2DBuffer **)&v13, (Ni2DBuffer *)TextureByFilename); /*0x7b82cb*/
      v4 = (NiSourceTexture *)v13; /*0x7b82d8*/
      if ( *(_DWORD *)&OB_RendererGlobalState_010201A0[0x23] ) /*0x7b82d0*/
        (*(void (__thiscall **)(_DWORD, const char *, UInt32))(**(_DWORD **)&OB_RendererGlobalState_010201A0[0x23] + 8))( /*0x7b82e5*/
          *(_DWORD *)&OB_RendererGlobalState_010201A0[0x23],
          path,
          v13);
    }
  }
  if ( loadFromCache
    && requireMipmaps
    && v4
    && (v9 = NiRTTI_Cast((BSStringT *)stru_B3F95C, (NiObject *)v4),
        rendererData = v4->members.super.rendererData,
        v11 = v9,
        rendererData)
    && (unsigned int)(*((int (__thiscall **)(NiDX9TextureData *))rendererData->_vtbl + 4))(rendererData) <= 1 )
  {
    if ( v11 )
      _sprintf(
        v16,
        "TEXTURE ERROR : texture does not contain mipmaps & will not be used : %s",
        (const char *)v11[7].__vftable);
    else
      _sprintf(v16, "TEXTURE ERROR : texture does not contain mipmaps & will not be used : NOTASOURCETEXTURE");
    if ( unk_B42E8C ) /*0x7b835c*/
      unk_B42E8C(v16, 0); /*0x7b836c*/
    *outTexture = 0; /*0x7b8371*/
    v14 = 1; /*0x7b837c*/
    LOBYTE(v17) = 0; /*0x7b8384*/
    NiPointerSlot_Release((NiD3DVertexShader *)&v13); /*0x7b838c*/
  }
  else
  {
LABEL_22:
    *outTexture = v4; /*0x7b8395*/
    if ( v4 ) /*0x7b8398*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x7b839e*/
    v14 = 1; /*0x7b83a6*/
    LOBYTE(v17) = 0; /*0x7b83ae*/
    if ( v4 ) /*0x7b83b6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v4->members) ) /*0x7b83bc*/
        v4->vtbl->super.super.super.Destructor((NiRefObject *)v4, 1); /*0x7b83ce*/
    }
  }
  return outTexture; /*0x7b83d2*/
}
