//
//
// [2026-10-03 texture ownership/discovery] Verified successful returned out slot owns a reference: cache-hit and load paths increment for the output while releasing local temporaries. Plugin transfers that reference to per-family/material storage and releases it if insertion fails; final shared-owner retirement releases cached texture references. No extra AddRef is required for successful ownership transfer into the cache.
NiSourceTexture **__stdcall OB_TES_LoadOrFindSourceTexture_010201A0(
        NiSourceTexture **outTexture,
        char *path,
        bool allowMissing,
        bool searchArchives)
{
  UInt32 v4; // ecx
  int (__thiscall *v5)(UInt32, char *, _DWORD); // edx
  UInt32 v6; // ebp
  int v7; // eax
  NiSourceTexture *v8; // esi
  void (__stdcall *v9)(volatile LONG *); // ebp
  IOManager *v11; // esi
  char v12; // bl
  NiSourceTexture *TextureByFilename; // eax
  NiSourceTexture *v14; // esi
  UInt32 v15; // [esp+18h] [ebp-14h] BYREF
  int v16; // [esp+1Ch] [ebp-10h]
  int v17; // [esp+28h] [ebp-4h]

  v16 = 0; /*0x4428b9*/
  v15 = 0; /*0x4428bd*/
  v4 = unk_B35300; /*0x4428c1*/
  v5 = *(int (__thiscall **)(UInt32, char *, _DWORD))(*(_DWORD *)unk_B35300 + 4); /*0x4428cd*/
  v17 = 1; /*0x4428d2*/
  v6 = 0; /*0x4428da*/
  v7 = v5(v4, path, 0); /*0x4428dc*/
  v8 = (NiSourceTexture *)v7; /*0x4428de*/
  if ( v7 ) /*0x4428e2*/
  {
    v9 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement; /*0x4428e4*/
    InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x4428ee*/
    *outTexture = v8; /*0x4428f5*/
    v9((volatile LONG *)&v8->members); /*0x4428f7*/
    v16 = 1; /*0x4428fa*/
    LOBYTE(v17) = 0; /*0x442902*/
    if ( !InterlockedDecrement((volatile LONG *)&v8->members) ) /*0x442907*/
      v8->vtbl->super.super.super.Destructor((NiRefObject *)v8, 1); /*0x442919*/
    return outTexture; /*0x44291b*/
  }
  else
  {
    if ( searchArchives ) /*0x442927*/
      v6 = 6; /*0x442929*/
    if ( MEMORY[0xB33A04] && MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], path, 0, v6, 0xFFFFFFFF) /*0x44294d*/
      || !allowMissing )
    {
      v11 = MEMORY[0xB33A10]; /*0x44295a*/
      if ( GetCurrentThreadId() == v11->members.currentThreadIDBoh ) /*0x442969*/
      {
        v12 = 0; /*0x442976*/
      }
      else
      {
        sub_432860((volatile LONG *)v11); /*0x44296d*/
        v12 = 1; /*0x442972*/
      }
      TextureByFilename = NiSourceTexture::LoadTextureByFilename( /*0x442980*/
                            path,
                            &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout,
                            1);                 // Verified (Oblivion): source-texture loader returns a reference-counted NiSourceTexture* through its output parameter; that pointer is passed to TESEffectShader_CreateVisualProperty and retained by ParticleShaderProperty.
      NiSmartPointer_Set__((Ni2DBuffer **)&v15, (Ni2DBuffer *)TextureByFilename); /*0x44298d*/
      if ( v12 ) /*0x442994*/
        sub_432890((volatile LONG *)MEMORY[0xB33A10]); /*0x44299c*/
      v14 = (NiSourceTexture *)v15; /*0x4429a1*/
      if ( v15 ) /*0x4429a7*/
      {
        (*(void (__thiscall **)(UInt32, char *, UInt32))(*(_DWORD *)unk_B35300 + 8))(unk_B35300, path, v15); /*0x4429b6*/
      }
      else if ( !allowMissing ) /*0x4429bf*/
      {
        PrintError("TES::CreateTextureImage unable to create image for \"%s\".\r\n", path); /*0x4429c7*/
      }
      *outTexture = v14; /*0x4429d5*/
      if ( v14 ) /*0x4429d7*/
        InterlockedIncrement((volatile LONG *)&v14->members); /*0x4429dd*/
      v16 = 1; /*0x4429e5*/
      LOBYTE(v17) = 0; /*0x4429ed*/
      if ( v14 ) /*0x4429f2*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&v14->members) ) /*0x4429f8*/
          v14->vtbl->super.super.super.Destructor((NiRefObject *)v14, 1); /*0x442a0a*/
      }
      return outTexture; /*0x442a0c*/
    }
    else
    {
      *outTexture = 0; /*0x442953*/
      return outTexture; /*0x44294f*/
    }
  }
}
