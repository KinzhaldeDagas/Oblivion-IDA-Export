// DX10OBSE resource decode: creates/loads NiDX9SourceTextureData for NiSourceTexture, creating a managed IDirect3DTexture9 and uploading source mip texels when rendererData is absent.
NiDX9SourceTextureData *__cdecl sub_761270(NiSourceTexture *a1, NiDX9Renderer *a5)
{
  NiRTTI *v3; // eax
  NiDX9SourceTextureData *v4; // eax
  NiDX9SourceTextureData *v5; // ebx
  void *pixelData; // ebp
  char *fileName; // ebp
  NiDevImageConverter *v9; // eax
  Unk6F4 *unk6F4; // esi
  int v11; // eax
  int v12; // eax
  MipMapFlag mipmapFormat; // eax
  int v14; // eax
  UInt8 ReplacementData; // al
  MipMapFlag v16; // ecx
  UInt8 v17; // cl
  int v18; // esi
  NiDevImageConverter *v19; // eax
  int v20; // ebp
  bool v21; // zf
  LONG (__stdcall *v22)(volatile LONG *); // edi
  FormatPrefs *p_formatPrefs; // [esp+18h] [ebp-14h]
  volatile LONG *v24; // [esp+1Ch] [ebp-10h]
  _DWORD v25[3]; // [esp+20h] [ebp-Ch] BYREF
  NiSourceTexture *v26; // [esp+30h] [ebp+4h]

  if ( !a1 || (v3 = a1->vtbl->super.super.GetType(a1)) == 0 ) /*0x76128a*/
  {
LABEL_5:
    v4 = (NiDX9SourceTextureData *)FormHeapAlloc(0x7Cu); /*0x76129e*/
    v5 = v4; /*0x7612a6*/
    if ( v4 ) /*0x7612ad*/
    {
      NiDX9TextureData::NiDX9TextureData((NiDX9TextureData *)v4, (NiTexture *)a1, a5); /*0x7612b7*/
      v5->vtbl = &NiDX9SourceTextureData::`vftable'; /*0x7612bc*/
      v5->ReplacementData = 0; /*0x7612c2*/
      v5->Mipmap = 0; /*0x7612c6*/
      v5->FormattedSize = 0; /*0x7612ca*/
      v5->Palette = 0; /*0x7612cd*/
      v5->LevelsSkipped = 0; /*0x7612d0*/
      v5->SourceRevID = 0; /*0x7612d3*/
      v5->PalRevID = 0; /*0x7612d6*/
      v5->unk60 = 0; /*0x7612d9*/
    }
    else
    {
      v5 = 0; /*0x7612f2*/
    }
    pixelData = a1->members.pixelData; /*0x7612f5*/
    p_formatPrefs = &a1->members.super.formatPrefs; /*0x7612fd*/
    if ( !pixelData ) /*0x761301*/
    {
      fileName = (char *)a1->members.fileName; /*0x761303*/
      if ( !fileName ) /*0x761308*/
      {
        if ( v5 ) /*0x76130c*/
          ((void (__thiscall *)(NiDX9SourceTextureData *, int))*v5->vtbl)(v5, 1); /*0x761316*/
        return 0; /*0x761321*/
      }
      if ( OB_NiDX9SourceTextureData_s_persistentFastPathEnabled_010201A0 /*0x76133e*/
        && a1->members.persistRenderData
        && a5
        && NiDX9SourceTextureData_LoadTextureFile(v5, fileName, a5, &a1->members.super.formatPrefs) )// D3DX file-memory fast path requires the global gate, NiSourceTexture::persistRenderData, and a renderer. Textures created by TES helper 0x442890 set persistRenderData=true, and WinMain sets the global gate true at 0x40E876.
      {
        v5->parent->members.rendererData = (NiDX9TextureData *)v5; /*0x76134b*/
        return v5; /*0x761356*/
      }
      v9 = sub_71B280(); /*0x761357*/
      pixelData = (void *)(*(int (__thiscall **)(NiDevImageConverter *, char *, _DWORD))(*(_DWORD *)v9 + 8))( /*0x761367*/
                            v9,
                            fileName,
                            0);
    }
    v24 = (volatile LONG *)pixelData; /*0x76136b*/
    if ( pixelData ) /*0x76136f*/
      InterlockedIncrement((volatile LONG *)pixelData + 1); /*0x761375*/
    unk6F4 = a5->member.unk6F4; /*0x76137f*/
    if ( pixelData ) /*0x761387*/
    {
      v11 = **((_DWORD **)pixelData + 0x15); /*0x7613c2*/
      if ( v11 && ((v11 - 1) & v11) == 0 && (v12 = **((_DWORD **)pixelData + 0x16)) != 0 && ((v12 - 1) & v12) == 0 /*0x7613fa*/
        || (a5->__vftable->super.GetFlags((NiRenderer *)a5) & 8) != 0 )
      {
        v26 = (NiSourceTexture *)sub_773BA0((unsigned int)pixelData + 8, p_formatPrefs, unk6F4); /*0x7614af*/
        if ( v26 ) /*0x7614b3*/
          goto LABEL_39; /*0x7614b3*/
        pixelData = sub_701400(a1, 0x80000004); /*0x7614c2*/
        v26 = (NiSourceTexture *)*(&unk6F4->unk00 + a5->member.unk874); /*0x7614d1*/
      }
      else if ( (a5->__vftable->super.GetFlags((NiRenderer *)a5) & 4) != 0 ) /*0x76140d*/
      {
        if ( p_formatPrefs->pixelLayout == kPixelLayout_Compressed ) /*0x761417*/
        {
          mipmapFormat = a1->members.super.formatPrefs.mipmapFormat; /*0x76141e*/
          v25[1] = a1->members.super.formatPrefs.alphaFormat; /*0x761429*/
          v25[2] = mipmapFormat; /*0x761431*/
          v25[0] = 2; /*0x761435*/
          v14 = sub_773BA0((unsigned int)pixelData + 8, v25, unk6F4); /*0x76143e*/
        }
        else
        {
          v14 = sub_773BA0((unsigned int)pixelData + 8, p_formatPrefs, unk6F4); /*0x761447*/
        }
        v26 = (NiSourceTexture *)v14; /*0x76144e*/
        if ( v14 ) /*0x761452*/
          goto LABEL_39; /*0x761452*/
        pixelData = sub_701400(a1, 0x80000004); /*0x76146f*/
        v26 = (NiSourceTexture *)*(&unk6F4->unk00 + a5->member.unk874); /*0x761474*/
      }
      else
      {
        pixelData = sub_701400(a1, 0x80000006); /*0x761491*/
        v26 = (NiSourceTexture *)*(&unk6F4->unk00 + a5->member.unk874); /*0x761496*/
      }
    }
    else
    {
      pixelData = sub_701400(a1, 0x80000005); /*0x76139a*/
      v26 = (NiSourceTexture *)*(&unk6F4->unk00 + a5->member.unk874); /*0x7613ae*/
      Shared_NoOpVirtual_60D0A0(v26); /*0x7613b2*/
    }
    v5->ReplacementData = 1; /*0x7614d8*/
LABEL_39:
    v5->SourceRevID = *((_DWORD *)pixelData + 0x1A); /*0x7614dc*/
    qmemcpy(&v5->PixelFormat, v26, sizeof(v5->PixelFormat)); /*0x7614ee*/
    v5->Width = **((_DWORD **)pixelData + 0x15); /*0x7614f5*/
    ReplacementData = v5->ReplacementData; /*0x7614fd*/
    v5->Height = **((_DWORD **)pixelData + 0x16); /*0x761502*/
    v17 = 0; /*0x761520*/
    if ( !ReplacementData ) /*0x761505*/
    {
      v16 = p_formatPrefs->mipmapFormat;        // Fallback NiPixelData path uses FormatPrefs mipmap mode. TES default is mode 2 (Default); when global default generation is enabled, a one-level supported POT source is expanded by 0x71E790/0x71B8D0. /*0x76150b*/
      if ( v16 == kMipMap_Enabled || v16 == kMipMap_Default && OB_NiSourceTexture_s_defaultGenerateMipmaps_010201A0 )// When true, generateMipmaps is passed to NiDevImageConverter at 0x76154B. It is not proof that file-authored mip count will be preserved. /*0x761518*/
        v17 = 1; /*0x761505*/
    }
    v5->Mipmap = v17; /*0x761528*/
    if ( ReplacementData ) /*0x76152b*/
    {
      v18 = (int)pixelData; /*0x76152d*/
    }
    else
    {
      v19 = sub_71B280(); /*0x761531*/
      v18 = (*(int (__thiscall **)(NiDevImageConverter *, void *, NiSourceTexture *, void *, _DWORD))(*(_DWORD *)v19 + 0x10))( /*0x76154b*/
              v19,
              pixelData,
              v26,
              pixelData,
              v5->Mipmap);                      // NiDevImageConverter::ConvertPixelData. With generateMipmaps=true and a one-level supported POT input, 0x71E790 calls 0x71B8D0 to allocate/fill a complete chain before D3D creation/upload.
    }
    if ( v5->dTexture || (OB_NiDX9SourceTextureData_CreateD3DTexture_010201A0(v5, v18), v5->dTexture) ) /*0x76155b*/
      OB_NiDX9SourceTextureData_UploadMipLevels_010201A0(v5, (_DWORD *)v18); /*0x761564*/
    v20 = *((_DWORD *)pixelData + 0x13); /*0x761569*/
    if ( v20 ) /*0x76156e*/
    {
      v21 = v5->Palette == v20; /*0x761570*/
      v5->PalRevID = *(_DWORD *)(v20 + 0x10); /*0x761579*/
      if ( !v21 ) /*0x76157c*/
        NiSmartPointer_Set__((Ni2DBuffer **)&v5->Palette, (Ni2DBuffer *)v20); /*0x76157f*/
    }
    v5->FormattedSize = *(_DWORD *)(v18 + 0x6C) * *(_DWORD *)(*(_DWORD *)(v18 + 0x5C) + 4 * *(_DWORD *)(v18 + 0x60)); /*0x761595*/
    InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x761598*/
    v22 = InterlockedDecrement; /*0x7615a2*/
    v5->parent->members.rendererData = (NiDX9TextureData *)v5; /*0x7615a8*/
    if ( !v22((volatile LONG *)(v18 + 4)) ) /*0x7615ab*/
      (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x7615b9*/
    if ( v24 ) /*0x7615c1*/
    {
      if ( !v22(v24 + 1) ) /*0x7615c7*/
        (**(void (__thiscall ***)(void *, int))v24)((void *)v24, 1); /*0x7615d5*/
    }
    return v5; /*0x7615d8*/
  }
  while ( v3 != (NiRTTI *)&MEMORY[0xB3F9B0][0xE1] ) /*0x761295*/
  {
    v3 = v3->parent; /*0x761297*/
    if ( !v3 ) /*0x76129c*/
      goto LABEL_5; /*0x76129c*/
  }
  return (NiDX9SourceTextureData *)sub_774550((NiTexture *)a1, a5); /*0x7612ec*/
}
