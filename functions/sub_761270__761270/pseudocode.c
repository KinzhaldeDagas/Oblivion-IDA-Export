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

  if ( !a1 || (v3 = a1->vtbl->super.super.GetType(a1)) == 0 )
  {
LABEL_5:
    v4 = (NiDX9SourceTextureData *)FormHeapAlloc(0x7Cu);
    v5 = v4;
    if ( v4 )
    {
      NiDX9TextureData::NiDX9TextureData((NiDX9TextureData *)v4, (NiTexture *)a1, a5);
      v5->vtbl = &NiDX9SourceTextureData::`vftable';
      v5->ReplacementData = 0;
      v5->Mipmap = 0;
      v5->FormattedSize = 0;
      v5->Palette = 0;
      v5->LevelsSkipped = 0;
      v5->SourceRevID = 0;
      v5->PalRevID = 0;
      v5->unk60 = 0;
    }
    else
    {
      v5 = 0;
    }
    pixelData = a1->members.pixelData;
    p_formatPrefs = &a1->members.super.formatPrefs;
    if ( !pixelData )
    {
      fileName = (char *)a1->members.fileName;
      if ( !fileName )
      {
        if ( v5 )
          ((void (__thiscall *)(NiDX9SourceTextureData *, int))*v5->vtbl)(v5, 1);
        return 0;
      }
      if ( byte_B3F709
        && a1->members.persistRenderData
        && a5
        && NiDX9SourceTextureData_LoadTextureFile(v5, fileName, a5, &a1->members.super.formatPrefs) )
      {
        v5->parent->members.rendererData = (NiDX9TextureData *)v5;
        return v5;
      }
      v9 = sub_71B280();
      pixelData = (void *)(*(int (__thiscall **)(NiDevImageConverter *, char *, _DWORD))(*(_DWORD *)v9 + 8))(
                            v9,
                            fileName,
                            0);
    }
    v24 = (volatile LONG *)pixelData;
    if ( pixelData )
      InterlockedIncrement((volatile LONG *)pixelData + 1);
    unk6F4 = a5->member.unk6F4;
    if ( pixelData )
    {
      v11 = **((_DWORD **)pixelData + 0x15);
      if ( v11 && ((v11 - 1) & v11) == 0 && (v12 = **((_DWORD **)pixelData + 0x16)) != 0 && ((v12 - 1) & v12) == 0
        || (a5->__vftable->super.GetFlags((NiRenderer *)a5) & 8) != 0 )
      {
        v26 = (NiSourceTexture *)sub_773BA0((unsigned int)pixelData + 8, p_formatPrefs, unk6F4);
        if ( v26 )
          goto LABEL_39;
        pixelData = sub_701400(a1, 0x80000004);
        v26 = (NiSourceTexture *)*(&unk6F4->unk00 + a5->member.unk874);
      }
      else if ( (a5->__vftable->super.GetFlags((NiRenderer *)a5) & 4) != 0 )
      {
        if ( p_formatPrefs->pixelLayout == kPixelLayout_Compressed )
        {
          mipmapFormat = a1->members.super.formatPrefs.mipmapFormat;
          v25[1] = a1->members.super.formatPrefs.alphaFormat;
          v25[2] = mipmapFormat;
          v25[0] = 2;
          v14 = sub_773BA0((unsigned int)pixelData + 8, v25, unk6F4);
        }
        else
        {
          v14 = sub_773BA0((unsigned int)pixelData + 8, p_formatPrefs, unk6F4);
        }
        v26 = (NiSourceTexture *)v14;
        if ( v14 )
          goto LABEL_39;
        pixelData = sub_701400(a1, 0x80000004);
        v26 = (NiSourceTexture *)*(&unk6F4->unk00 + a5->member.unk874);
      }
      else
      {
        pixelData = sub_701400(a1, 0x80000006);
        v26 = (NiSourceTexture *)*(&unk6F4->unk00 + a5->member.unk874);
      }
    }
    else
    {
      pixelData = sub_701400(a1, 0x80000005);
      v26 = (NiSourceTexture *)*(&unk6F4->unk00 + a5->member.unk874);
      TESTexture::ClearComponentReferences(v26);
    }
    v5->ReplacementData = 1;
LABEL_39:
    v5->SourceRevID = *((_DWORD *)pixelData + 0x1A);
    qmemcpy(&v5->PixelFormat, v26, sizeof(v5->PixelFormat));
    v5->Width = **((_DWORD **)pixelData + 0x15);
    ReplacementData = v5->ReplacementData;
    v5->Height = **((_DWORD **)pixelData + 0x16);
    v17 = 0;
    if ( !ReplacementData )
    {
      v16 = p_formatPrefs->mipmapFormat;
      if ( v16 == kMipMap_Enabled || v16 == kMipMap_Default && byte_B3F708 )
        v17 = 1;
    }
    v5->Mipmap = v17;
    if ( ReplacementData )
    {
      v18 = (int)pixelData;
    }
    else
    {
      v19 = sub_71B280();
      v18 = (*(int (__thiscall **)(NiDevImageConverter *, void *, NiSourceTexture *, void *, _DWORD))(*(_DWORD *)v19 + 0x10))(
              v19,
              pixelData,
              v26,
              pixelData,
              v5->Mipmap);
    }
    if ( v5->dTexture || (sub_760700(v5, v18), v5->dTexture) )
      sub_760CC0(v5, (_DWORD *)v18);
    v20 = *((_DWORD *)pixelData + 0x13);
    if ( v20 )
    {
      v21 = v5->Palette == v20;
      v5->PalRevID = *(_DWORD *)(v20 + 0x10);
      if ( !v21 )
        NiSmartPointer_Set__((Ni2DBuffer **)&v5->Palette, (Ni2DBuffer *)v20);
    }
    v5->FormattedSize = *(_DWORD *)(v18 + 0x6C) * *(_DWORD *)(*(_DWORD *)(v18 + 0x5C) + 4 * *(_DWORD *)(v18 + 0x60));
    InterlockedIncrement((volatile LONG *)(v18 + 4));
    v22 = InterlockedDecrement;
    v5->parent->members.rendererData = (NiDX9TextureData *)v5;
    if ( !v22((volatile LONG *)(v18 + 4)) )
      (**(void (__thiscall ***)(int, int))v18)(v18, 1);
    if ( v24 )
    {
      if ( !v22(v24 + 1) )
        (**(void (__thiscall ***)(void *, int))v24)((void *)v24, 1);
    }
    return v5;
  }
  while ( v3 != (NiRTTI *)dword_B3FD34 )
  {
    v3 = v3->parent;
    if ( !v3 )
      goto LABEL_5;
  }
  return (NiDX9SourceTextureData *)sub_774550((NiTexture *)a1, a5);
}
