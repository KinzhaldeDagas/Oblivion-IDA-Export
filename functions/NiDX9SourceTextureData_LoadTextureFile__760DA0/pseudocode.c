char __thiscall NiDX9SourceTextureData_LoadTextureFile(
        NiDX9SourceTextureData *this,
        char *Src,
        NiDX9Renderer *a5,
        _DWORD *a6)
{
  int v4; // esi
  NiFile *(__cdecl *GetNiFile_Indirect)(const char *, int, int); // eax
  NiNode **v7; // esi
  char canOpenFileMode; // al
  NiNode *v9; // edx
  unsigned int v10; // eax
  int v11; // edi
  int v12; // ebp
  UINT Width; // ebx
  int v14; // esi
  unsigned int v15; // esi
  unsigned int v16; // edx
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // ecx
  int v20; // ecx
  UINT v21; // esi
  UINT v22; // eax
  unsigned int v23; // eax
  UINT v24; // eax
  bool v25; // cf
  _DWORD *v26; // esi
  unsigned int v27; // ecx
  void *v28; // eax
  int v29; // eax
  int v30; // edi
  int v31; // eax
  int v32; // eax
  NiDX9SourceTextureData *v33; // edi
  char v34; // al
  UINT v35; // edx
  char v36; // bl
  int v37; // ecx
  UINT v38; // eax
  unsigned int v39; // edx
  size_t v40; // [esp-4h] [ebp-5B8h]
  size_t v41; // [esp+8h] [ebp-5ACh]
  __int64 v42; // [esp+18h] [ebp-59Ch]
  int v43; // [esp+1Ch] [ebp-598h]
  int v44; // [esp+20h] [ebp-594h] BYREF
  int v45; // [esp+24h] [ebp-590h] BYREF
  unsigned int v46; // [esp+28h] [ebp-58Ch]
  IDirect3DDevice9 *device; // [esp+2Ch] [ebp-588h]
  void *v48; // [esp+30h] [ebp-584h]
  int v49; // [esp+34h] [ebp-580h] BYREF
  unsigned int v50; // [esp+38h] [ebp-57Ch]
  D3DXIMAGE_INFO v51; // [esp+3Ch] [ebp-578h] BYREF
  UINT Height; // [esp+58h] [ebp-55Ch]
  NiDX9SourceTextureData *v53; // [esp+5Ch] [ebp-558h]
  UINT v54; // [esp+60h] [ebp-554h]
  NiSurfaceData a2; // [esp+64h] [ebp-550h] BYREF
  char Dir[259]; // [esp+A8h] [ebp-50Ch] BYREF
  char Str1[769]; // [esp+1ABh] [ebp-409h] BYREF
  char Dst[260]; // [esp+4ACh] [ebp-108h] BYREF

  v53 = this;
  if ( !a5 )
    return 0;
  device = a5->member.device;
  if ( !device )
    return 0;
  strcpy_s(Dst, 0x104u, Src);
  TESTexture::ClearComponentReferences(Dst);
  sub_748760(Dir, Dst);
  if ( _strcmp(Str1, ".bmp") )
  {
    if ( _strcmp(Str1, ".tga") && _strcmp(Str1, ".dds") )
      return 0;
  }
  HIDWORD(v42) = v4;
  LODWORD(v42) = 0x8000;
  GetNiFile_Indirect = (NiFile *(__cdecl *)(const char *, int, int))NiFile_GetNiFile_Indirect((int)Dst, 0, v42);
  v7 = (NiNode **)GetNiFile_Indirect;
  if ( !GetNiFile_Indirect )
    return 0;
  canOpenFileMode = (*(int (__thiscall **)(NiFile *(__cdecl *)(const char *, int, int), int))(*(_DWORD *)GetNiFile_Indirect
                                                                                            + 4))(
                      GetNiFile_Indirect,
                      v43);
  v9 = *v7;
  if ( !canOpenFileMode )
  {
    ((void (__thiscall *)(NiNode **, int))v9->vtbl)(v7, 1);
    return 0;
  }
  v10 = ((int (__thiscall *)(NiNode **))v9->members.super.super.m_extraDataList)(v7);
  v11 = v10;
  v46 = v10;
  if ( !v10 )
  {
    ((void (__thiscall *)(NiNode **, int))(*v7)->vtbl)(v7, 1);
    return 0;
  }
  v12 = FormHeapAlloc(v10);
  ReadFile__((int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v7, v12, v11);
  ((void (__thiscall *)(NiNode **, int))(*v7)->vtbl)(v7, 1);
  if ( (int)((HRESULT (__stdcall *)(int, int, D3DXIMAGE_INFO *))D3DXGetImageInfoFromFileInMemory_0)(v12, v11, &v51) < 0
    || *a6 == 4
    && v51.Format != D3DFMT_V8U8
    && v51.Format != D3DFMT_Q8W8V8U8
    && v51.Format != D3DFMT_V16U16
    && v51.Format != D3DFMT_Q16W16V16U16
    && v51.Format != D3DFMT_CxV8U8
    && v51.Format != D3DFMT_L6V5U5
    && v51.Format != D3DFMT_X8L8V8U8
    && v51.Format != D3DFMT_A2W10V10U10 )
  {
    FormHeapFree(v12);
    return 0;
  }
  Height = v51.Height;
  Width = v51.Width;
  v14 = 0;
  v54 = v51.Width;
  if ( v51.ResourceType != D3DRTYPE_TEXTURE )
  {
    if ( v51.ResourceType == D3DRTYPE_CUBETEXTURE )
    {
      v45 = 0;
      v31 = D3DXCreateCubeTextureFromFileInMemory_0(device, v12, v11, &v45);
      v14 = v45;
      v30 = v31;
    }
    else if ( v51.ResourceType == D3DRTYPE_VOLUMETEXTURE )
    {
      v44 = 0;
      v32 = D3DXCreateVolumeTextureFromFileInMemory_0(device, v12, v11, &v44);
      v14 = v44;
      v30 = v32;
    }
    else
    {
      v30 = 0x8876086C;
    }
    goto LABEL_58;
  }
  v49 = 0;
  if ( v51.ImageFileFormat == D3DXIFF_DDS )
  {
    v15 = textMipmapStuff_;
    v16 = dword_B42060;
    if ( (*(_BYTE *)(v12 + 0x50) & 4) != 0 )
    {
      v17 = *(_DWORD *)(v12 + 0x54);
      if ( v17 == 0x31545844 )
      {
        v50 = 2;
      }
      else
      {
        if ( v17 != 0x32545844 && v17 != 0x33545844 && v17 != 0x34545844 && v17 != 0x35545844 )
          goto LABEL_52;
        v50 = 1;
      }
      v18 = *(_DWORD *)(v12 + 0x1C);
      v48 = (void *)(v12 + 0x80);
      v19 = v18 - v15;
      if ( v18 - v15 <= v16 )
        v19 = v16;
      if ( v18 <= v15 )
      {
        v19 = v18;
        if ( v18 >= v16 )
          v19 = v16;
      }
      v46 = v18;
      if ( v19 < v18 )
      {
        v44 = v18 - v19;
        do
        {
          v20 = 1;
          if ( Width >> 2 )
            v20 = Width >> 2;
          v21 = v51.Height;
          v22 = v51.Height >> 2;
          if ( !(v51.Height >> 2) )
            v22 = 1;
          v23 = 0x10 * v20 * v22 / v50;
          v48 = (char *)v48 + v23;
          v11 -= v23;
          v24 = Width >> 1;
          v25 = Width >> 1 == 0;
          Width = 1;
          if ( !v25 )
            Width = v24;
          v51.Height = 1;
          if ( v21 >> 1 )
            v51.Height = v21 >> 1;
          --v46;
          --v44;
        }
        while ( v44 );
        v18 = v46;
        v51.Width = Width;
      }
      if ( v18 != *(_DWORD *)(v12 + 0x1C) )
      {
        LODWORD(v41) = 0x80;
        v26 = (_DWORD *)FormHeapAlloc(v11);
        memcpy(v26, (const void *)v12, v41);
        v27 = v46;
        v26[4] = v51.Width;
        v26[3] = v51.Height;
        v28 = v48;
        v26[7] = v27;
        LODWORD(v40) = v11 - 0x80;
        v26[5] = v51.Width * v51.Height;
        memcpy(v26 + 0x20, v28, v40);
        FormHeapFree(v12);
        v12 = (int)v26;
      }
      v11 = v45;
    }
  }
LABEL_52:
  v29 = D3DXCreateTextureFromFileInMemory_0((int)device, v12, v11, (int)&v49);
  v14 = v49;
  v30 = v29;
LABEL_58:
  FormHeapFree(v12);
  if ( v30 >= 0 && v14 )
  {
    v33 = v53;
    v34 = (*((int (__thiscall **)(NiDX9SourceTextureData *, int))v53->vtbl + 9))(v53, v14);
    v35 = Height;
    v36 = v34;
    v33->Width = v54;
    v33->Height = v35;
    if ( !v34 )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      return v36;
    }
    if ( v51.Format > D3DFMT_DXT3 )
    {
      if ( v51.Format == D3DFMT_DXT4 || v51.Format == D3DFMT_DXT5 )
        goto LABEL_66;
    }
    else if ( v51.Format == D3DFMT_DXT3 || v51.Format == D3DFMT_DXT1 || v51.Format == D3DFMT_DXT2 )
    {
LABEL_66:
      v37 = 1;
LABEL_67:
      v38 = v51.Width * v51.Height * v37 * v51.Depth;
      dword_B42054 += v38;
      v39 = 0;
      v33->unk60 = v38;
      if ( (v38 & 0xFFFFF000) != v38 )
        v39 = (v38 & 0xFFFFF000) - v38 + 0x1000;
      dword_B42058 += v39;
      return v36;
    }
    InitSurfacEData(&a2);
    D3DFMTToTextureFormat(v51.Format, &a2);
    v37 = a2.unk01 >> 3;
    goto LABEL_67;
  }
  return 0;
}
