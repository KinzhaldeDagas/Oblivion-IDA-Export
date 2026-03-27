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

  v1 = this + 9;
  if ( *(this + 9) )
    return 0;
  v2 = dword_B35300;
  if ( !dword_B35300 )
    return 0;
  v11 = 0;
  v3 = (const char *)*(this + 7);
  v14 = 0;
  if ( !v3 )
    v3 = EmptyString;
  _sprintf(Src, "%s\\Landscape\\%s", "Textures", v3);
  v4 = (Ni2DBuffer *)(*(int (__thiscall **)(UInt32, char *, _DWORD))(*(_DWORD *)v2 + 4))(v2, Src, 0);
  NiSmartPointer_Set__((Ni2DBuffer **)&v11, v4);
  v5 = v11;
  if ( v11 )
  {
    v8 = (Ni2DBuffer *)NiRTTI_Cast((BSStringT *)dword_B3F95C, (NiObject *)v11);
    NiSmartPointer_Set__(v1, v8);
    v9 = *v1;
    v10 = 0;
    NiTMap_GetAt(&off_B09414, (int)v9, &v10);
    NiTMap_SetAt(&off_B09414, (int)*v1, v10 + 1);
    v14 = 0xFFFFFFFF;
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v5)(v5, 1);
    return 0;
  }
  if ( OBSE_g_FileFinder && OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, Src, (UInt32)v13, v11, 0xFFFFFFFF) )
    TextureByFilename = NiSourceTexture::LoadTextureByFilename(v13, (PixelLayout *)dword_B256D0, 1);
  else
    TextureByFilename = NiSourceTexture::LoadTextureByFilename(Src, (PixelLayout *)dword_B256D0, 1);
  NiSmartPointer_Set__(v1, (Ni2DBuffer *)TextureByFilename);
  (*(void (__thiscall **)(UInt32, char *, Ni2DBuffer *))(*(_DWORD *)v2 + 8))(v2, Src, *v1);
  NiTMap_SetAt(&off_B09414, (int)*v1, 1);
  return 1;
}
