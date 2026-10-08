// DDS/BMP/TGA direct-to-render texture loader. Uses d3dx9_27 D3DXGetImageInfoFromFileInMemory and D3DXCreateTextureFromFileInMemory. DDS mip-skip fast path only understands FourCC DXT1-DXT5; DX10/BC7 cannot be accepted here without replacing/hooking the loader and decoding/transcoding before D3D9 texture creation.
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
  float v15; // esi
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
  unsigned int v44; // [esp+20h] [ebp-594h] BYREF
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

  v53 = this; /*0x760dbd*/
  if ( !a5 ) /*0x760dc8*/
    return 0; /*0x760dc8*/
  device = a5->member.device; /*0x760deb*/
  if ( !device ) /*0x760def*/
    return 0; /*0x760def*/
  strcpy_s(Dst, 0x104u, Src); /*0x760dff*/
  Shared_NoOpVirtual_60D0A0(Dst); /*0x760e0c*/
  sub_748760(Dir, Dst); /*0x760e23*/
  if ( CRT_StricmpLocaleDispatch((unsigned __int8 *)Str1, ".bmp") ) /*0x760e35*/
  {
    if ( CRT_StricmpLocaleDispatch((unsigned __int8 *)Str1, ".tga") /*0x760e67*/
      && CRT_StricmpLocaleDispatch((unsigned __int8 *)Str1, ".dds") )
    {
      return 0; /*0x760de0*/
    }
  }
  HIDWORD(v42) = v4; /*0x760e77*/
  LODWORD(v42) = 0x8000; /*0x760e78*/
  GetNiFile_Indirect = (NiFile *(__cdecl *)(const char *, int, int))NiFile_GetNiFile_Indirect((int)Dst, 0, v42); /*0x760e87*/
  v7 = (NiNode **)GetNiFile_Indirect; /*0x760e8c*/
  if ( !GetNiFile_Indirect ) /*0x760e93*/
    return 0; /*0x760e93*/
  canOpenFileMode = (*(int (__thiscall **)(NiFile *(__cdecl *)(const char *, int, int), int))(*(_DWORD *)GetNiFile_Indirect /*0x760ea0*/
                                                                                            + 4))(
                      GetNiFile_Indirect,
                      v43);
  v9 = *v7; /*0x760ea4*/
  if ( !canOpenFileMode ) /*0x760ea8*/
  {
    ((void (__thiscall *)(NiNode **, int))v9->vtbl)(v7, 1); /*0x761228*/
    return 0; /*0x761234*/
  }
  v10 = ((int (__thiscall *)(NiNode **))v9->members.super.super.m_extraDataList)(v7); /*0x760eb2*/
  v11 = v10; /*0x760eb4*/
  v46 = v10; /*0x760eb8*/
  if ( !v10 ) /*0x760ebc*/
  {
    ((void (__thiscall *)(NiNode **, int))(*v7)->vtbl)(v7, 1); /*0x760ec6*/
    return 0; /*0x760eca*/
  }
  v12 = FormHeapAlloc(v10); /*0x760ed9*/
  Archive_ReadBytes((int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v7, v12, v11); /*0x760edf*/
  ((void (__thiscall *)(NiNode **, int))(*v7)->vtbl)(v7, 1); /*0x760eec*/
  if ( (int)((HRESULT (__stdcall *)(int, int, D3DXIMAGE_INFO *))D3DXGetImageInfoFromFileInMemory_0)(v12, v11, &v51) < 0 /*0x760f38*/
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
    FormHeapFree(v12); /*0x760f3b*/
    return 0; /*0x760f45*/
  }
  Height = v51.Height; /*0x760f4e*/
  Width = v51.Width; /*0x760f57*/
  v14 = 0; /*0x760f5b*/
  v54 = v51.Width; /*0x760f60*/
  if ( v51.ResourceType != D3DRTYPE_TEXTURE ) /*0x760f64*/
  {
    if ( v51.ResourceType == D3DRTYPE_CUBETEXTURE ) /*0x7610e3*/
    {
      v45 = 0; /*0x7610f1*/
      v31 = D3DXCreateCubeTextureFromFileInMemory_0((int)device, v12, v11, (int)&v45); /*0x7610f9*/
      v14 = v45; /*0x7610fe*/
      v30 = v31; /*0x761102*/
    }
    else if ( v51.ResourceType == D3DRTYPE_VOLUMETEXTURE ) /*0x761108*/
    {
      v44 = 0; /*0x761116*/
      v32 = D3DXCreateVolumeTextureFromFileInMemory_0((int)device, v12, v11, (int)&v44); /*0x76111e*/
      v14 = v44; /*0x761123*/
      v30 = v32; /*0x761127*/
    }
    else
    {
      v30 = 0x8876086C; /*0x76112b*/
    }
    goto LABEL_58; /*0x761104*/
  }
  v49 = 0; /*0x760f6e*/
  if ( v51.ImageFileFormat == D3DXIFF_DDS )     // Oblivion's persistent source-texture fast path recognizes DDS and inspects its embedded D3DXIMAGE_INFO. RGBA32 DDS reaches the native D3DX loader without the DXT-only mip-skip rewrite below. /*0x760f72*/
  {
    v15 = MEMORY[0xB3F9B0][0x9AB]; /*0x760f7b*/
    v16 = LODWORD(MEMORY[0xB3F9B0][0x9AC]); /*0x760f81*/
    if ( (*(_BYTE *)(v12 + 0x50) & 4) != 0 ) /*0x760f87*/
    {
      v17 = *(_DWORD *)(v12 + 0x54);            // This FourCC branch only implements renderer mip skipping for DXT1-DXT5. It is not the general DDS mip loader and does not rewrite RGBA32 atlas data. /*0x760f8d*/
      if ( v17 == 0x31545844 ) /*0x760f95*/
      {
        v50 = 2; /*0x760f97*/
      }
      else
      {
        if ( v17 != 0x32545844 && v17 != 0x33545844 && v17 != 0x34545844 && v17 != 0x35545844 ) /*0x760fbb*/
          goto LABEL_52; /*0x760fbb*/
        v50 = 1; /*0x760fc1*/
      }
      v18 = *(_DWORD *)(v12 + 0x1C); /*0x760fc9*/
      v48 = (void *)(v12 + 0x80); /*0x760fd2*/
      v19 = v18 - LODWORD(v15); /*0x760fd8*/
      if ( v18 - LODWORD(v15) <= v16 ) /*0x760fdc*/
        v19 = v16; /*0x760fde*/
      if ( v18 <= LODWORD(v15) ) /*0x760fe2*/
      {
        v19 = v18; /*0x760fe6*/
        if ( v18 >= v16 ) /*0x760fe8*/
          v19 = v16; /*0x760fea*/
      }
      v46 = v18; /*0x760fee*/
      if ( v19 < v18 ) /*0x760ff2*/
      {
        v44 = v18 - v19; /*0x760ff6*/
        do /*0x76105f*/
        {
          v20 = 1; /*0x761008*/
          if ( Width >> 2 ) /*0x761002*/
            v20 = Width >> 2; /*0x76100f*/
          v21 = v51.Height; /*0x761011*/
          v22 = v51.Height >> 2; /*0x761017*/
          if ( !(v51.Height >> 2) ) /*0x761017*/
            v22 = 1; /*0x76101f*/
          v23 = 0x10 * v20 * v22 / v50; /*0x76102c*/
          v48 = (char *)v48 + v23; /*0x761035*/
          v11 -= v23; /*0x761039*/
          v24 = Width >> 1; /*0x76103d*/
          v25 = Width >> 1 == 0; /*0x76103f*/
          Width = 1; /*0x761041*/
          if ( !v25 ) /*0x761043*/
            Width = v24; /*0x761045*/
          v51.Height = 1; /*0x76104d*/
          if ( v21 >> 1 ) /*0x761049*/
            v51.Height = v21 >> 1; /*0x761053*/
          --v46; /*0x761057*/
          --v44; /*0x76105b*/
        }
        while ( v44 ); /*0x76105f*/
        v18 = v46; /*0x761061*/
        v51.Width = Width; /*0x761065*/
      }
      if ( v18 != *(_DWORD *)(v12 + 0x1C) ) /*0x76106c*/
      {
        LODWORD(v41) = 0x80; /*0x761074*/
        v26 = (_DWORD *)FormHeapAlloc(v11); /*0x761079*/
        memcpy(v26, (const void *)v12, v41); /*0x76107d*/
        v27 = v46; /*0x761086*/
        v26[4] = v51.Width; /*0x76108a*/
        v26[3] = v51.Height; /*0x761091*/
        v28 = v48; /*0x761094*/
        v26[7] = v27; /*0x761098*/
        LODWORD(v40) = v11 - 0x80; /*0x7610a7*/
        v26[5] = v51.Width * v51.Height; /*0x7610b0*/
        memcpy(v26 + 0x20, v28, v40); /*0x7610b3*/
        FormHeapFree(v12); /*0x7610b9*/
        v12 = (int)v26; /*0x7610c1*/
      }
      v11 = v45; /*0x7610c3*/
    }
  }
LABEL_52:
  v29 = D3DXCreateTextureFromFileInMemory_0((int)device, v12, v11, (int)&v49);// Persistent 2D texture fast path calls d3dx9_27!D3DXCreateTextureFromFileInMemory. The exact d3dx9_27 wrapper passes Width/Height/MipLevels=D3DX_DEFAULT and Filter/MipFilter=D3DX_DEFAULT. Therefore a one-level POT DDS is expanded to a complete D3D mip chain (default image filter TRIANGLE; generated mip filter BOX); stored one-level DDS metadata does not force GetLevelCount()==1. /*0x7610c7*/
  v14 = v49; /*0x7610d8*/
  v30 = v29; /*0x7610dc*/
LABEL_58:
  FormHeapFree(v12); /*0x761130*/
  if ( v30 >= 0 && v14 ) /*0x761143*/
  {
    v33 = v53; /*0x761149*/
    v34 = (*((int (__thiscall **)(NiDX9SourceTextureData *, int))v53->vtbl + 9))(v53, v14); /*0x761155*/
    v35 = Height; /*0x76115b*/
    v36 = v34; /*0x76115f*/
    v33->Width = v54; /*0x761163*/
    v33->Height = v35; /*0x761166*/
    if ( !v34 ) /*0x761169*/
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)v14 + 8))(v14); /*0x761171*/
      return v36; /*0x7611e7*/
    }
    if ( v51.Format > D3DFMT_DXT3 ) /*0x76117e*/
    {
      if ( v51.Format == D3DFMT_DXT4 || v51.Format == D3DFMT_DXT5 ) /*0x7611f6*/
        goto LABEL_66; /*0x7611f6*/
    }
    else if ( v51.Format == D3DFMT_DXT3 || v51.Format == D3DFMT_DXT1 || v51.Format == D3DFMT_DXT2 ) /*0x76118e*/
    {
LABEL_66:
      v37 = 1; /*0x761190*/
LABEL_67:
      v38 = v51.Width * v51.Height * v37 * v51.Depth; /*0x761195*/
      LODWORD(MEMORY[0xB3F9B0][0x9A9]) += v38; /*0x7611a6*/
      v39 = 0; /*0x7611b4*/
      v33->unk60 = v38; /*0x7611b8*/
      if ( (v38 & 0xFFFFF000) != v38 ) /*0x7611bb*/
        v39 = (v38 & 0xFFFFF000) - v38 + 0x1000; /*0x7611c5*/
      LODWORD(MEMORY[0xB3F9B0][0x9AA]) += v39; /*0x7611c7*/
      return v36; /*0x7611c7*/
    }
    InitSurfacEData(&a2); /*0x7611fc*/
    D3DFMTToTextureFormat(v51.Format, &a2); /*0x76120b*/
    v37 = a2.unk01 >> 3; /*0x761218*/
    goto LABEL_67; /*0x76121b*/
  }
  return 0; /*0x760dcc*/
}
