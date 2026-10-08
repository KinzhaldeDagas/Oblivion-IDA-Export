// NiDevImageConverter conversion entry. The generateMipmaps flag triggers a full-chain path only for one-level, power-of-two, supported RGB/RGBA-style pixel data; otherwise it preserves/converts the available levels.
// local variable allocation has failed, the output may be wrong!
void *__thiscall OB_NiDevImageConverter_ConvertPixelData_010201A0(
        void *this,
        void *srcPixelData,
        const void *dstPixelFormat,
        void *reusePixelData,
        unsigned __int8 generateMipmaps)
{
  void (__stdcall **v5)(char *); // ebp
  void *v6; // esi
  _DWORD *v7; // ebx
  int v8; // ecx
  NiPixelData *v9; // eax
  _DWORD *v10; // edi
  int v11; // eax
  unsigned int v12; // eax
  Ni2DBuffer *MipChain_Box_010201A0; // eax
  int v15; // edi
  int v16; // eax
  Ni2DBuffer *v17; // eax
  void *v18; // ebx
  NiPixelData *v19; // eax
  NiPixelData *v20; // ebx
  int (__thiscall *v21)(void (__stdcall **)(char *), NiPixelData *, void *, unsigned int); // edx
  char v22; // al
  LONG (__stdcall *v23)(volatile LONG *); // ebp
  void (__thiscall ***v24)(void *, int); // esi
  void (__thiscall ***v25)(_DWORD, int); // esi
  LONG (__stdcall *v26)(volatile LONG *); // ebx
  void (__thiscall ***v27)(void *, int); // esi
  void (__thiscall ***v28)(_DWORD, int); // esi
  UInt32 v29; // [esp+28h] [ebp-14h] BYREF
  void (__stdcall **v30)(char *); // [esp+2Ch] [ebp-10h]
  unsigned int v31; // [esp+38h] [ebp-4h]

  v5 = (void (__stdcall **)(char *))this; /*0x71e7b7*/
  v30 = (void (__stdcall **)(char *))this; /*0x71e7b9*/
  v29 = 0; /*0x71e7bf*/
  v31 = 0; /*0x71e7c3*/
  v6 = srcPixelData; /*0x71e7cf*/
  if ( (*((_BYTE *)srcPixelData + 8) & 1) == 0 ) /*0x71e7d1*/
    return 0; /*0x71e7d1*/
  v7 = dstPixelFormat; /*0x71e7d7*/
  if ( (*(_BYTE *)dstPixelFormat & 1) == 0 ) /*0x71e7de*/
    return 0; /*0x71e7de*/
  v8 = *((_DWORD *)srcPixelData + 3); /*0x71e7e4*/
  if ( v8 >= 4 && v8 <= 6 && *((_DWORD *)dstPixelFormat + 1) != *((_DWORD *)srcPixelData + 3) ) /*0x71e7f7*/
  {
    v9 = sub_734460(v5 + 0x1A0, (int)srcPixelData); /*0x71e800*/
    NiSmartPointer_Set__((Ni2DBuffer **)&v29, (Ni2DBuffer *)v9); /*0x71e80a*/
    v6 = (void *)v29; /*0x71e80f*/
  }
  srcPixelData = 0; /*0x71e813*/
  v10 = reusePixelData; /*0x71e820*/
  LOBYTE(v31) = 1; /*0x71e824*/
  if ( generateMipmaps ) /*0x71e829*/
  {                                             // Mip generation is considered only when source NiPixelData levelCount (+0x60) is <=1.
    if ( *((_DWORD *)v6 + 0x18) <= 1u ) /*0x71e82f*/
    {
      v11 = **((_DWORD **)v6 + 0x15); /*0x71e834*/
      if ( v11 ) /*0x71e838*/
      {                                         // Both dimensions must be nonzero powers of two before the converter synthesizes a mip chain.
        if ( ((v11 - 1) & v11) == 0 && sub_71B460(**((_DWORD **)v6 + 0x16)) ) /*0x71e84c*/
        {
          v12 = v7[1]; /*0x71e858*/
          if ( v12 < 2 || v12 == 8 || v12 == 9 ) /*0x71e86c*/
          {
            MipChain_Box_010201A0 = (Ni2DBuffer *)OB_NiDevImageConverter_GenerateMipChain_Box_010201A0(v5, v6, v10);// Calls the decoded full-chain generator. A reusable output is accepted only when format matches and its level count is >1. /*0x71e872*/
            NiSmartPointer_Set__((Ni2DBuffer **)&srcPixelData, MipChain_Box_010201A0); /*0x71e87c*/
            if ( srcPixelData ) /*0x71e887*/
              v6 = srcPixelData; /*0x71e889*/
          }
        }
      }
    }
  }
  if ( v10 /*0x71e8df*/
    && sub_71AD40(v10 + 2, (int)v7)
    && (!generateMipmaps || v10[0x18] > 1u)
    && (v10 == v6
     || (*((unsigned __int8 (__thiscall **)(void (__stdcall **)(char *), _DWORD *, void *, unsigned int))*v5 + 0xB))(
          v5,
          v10,
          v6,
          0xFFFFFFFF)) )
  {
    LOBYTE(v31) = 0; /*0x71e8b1*/
    NiPointerSlot_Release((NiD3DVertexShader *)&srcPixelData); /*0x71e8b6*/
    v31 = 0xFFFFFFFF; /*0x71e8bf*/
    NiPointerSlot_Release((NiD3DVertexShader *)&v29); /*0x71e8c7*/
    return v10; /*0x71e8ce*/
  }
  v15 = 0; /*0x71e8e5*/
  *(_DWORD *)&generateMipmaps = 0; /*0x71e8e7*/
  v16 = v7[1]; /*0x71e8eb*/
  LOBYTE(v31) = 2; /*0x71e8f1*/
  if ( v16 == 8 || v16 == 9 ) /*0x71e8fb*/
  {
    v17 = (Ni2DBuffer *)(*((int (__thiscall **)(void (__stdcall **)(char *), void *, _DWORD *))*v5 + 0xC))(v5, v6, v7); /*0x71e907*/
    NiSmartPointer_Set__((Ni2DBuffer **)&generateMipmaps, v17); /*0x71e90e*/
    v15 = generateMipmaps; /*0x71e913*/
    if ( generateMipmaps ) /*0x71e919*/
      v6 = (void *)generateMipmaps; /*0x71e91b*/
  }
  v18 = (void *)FormHeapAlloc(0x70u); /*0x71e924*/
  reusePixelData = v18; /*0x71e929*/
  LOBYTE(v31) = 3; /*0x71e92f*/
  if ( v18 ) /*0x71e934*/
  {
    v19 = NiPixelData::NiPixelData( /*0x71e951*/
            (NiPixelData *)v18,
            **((_DWORD **)v6 + 0x15),
            **((_DWORD **)v6 + 0x16),
            (int)dstPixelFormat,
            *((_DWORD *)v6 + 0x18),
            *((_DWORD *)v6 + 0x1B));
    v5 = v30; /*0x71e956*/
    v20 = v19; /*0x71e95a*/
  }
  else
  {
    v20 = 0; /*0x71e95e*/
  }
  v21 = *((int (__thiscall **)(void (__stdcall **)(char *), NiPixelData *, void *, unsigned int))*v5 + 0xB); /*0x71e963*/
  LOBYTE(v31) = 2; /*0x71e96c*/
  v22 = v21(v5, v20, v6, 0xFFFFFFFF); /*0x71e971*/
  LOBYTE(v31) = 1; /*0x71e975*/
  if ( !v22 ) /*0x71e97a*/
  {
    v26 = InterlockedDecrement; /*0x71e9e5*/
    if ( v15 ) /*0x71e9eb*/
    {
      if ( !v26((volatile LONG *)(v15 + 4)) ) /*0x71e9f1*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x71e9ff*/
    }
    v27 = (void (__thiscall ***)(void *, int))srcPixelData; /*0x71ea01*/
    LOBYTE(v31) = 0; /*0x71ea07*/
    if ( srcPixelData ) /*0x71ea0c*/
    {
      if ( !v26((volatile LONG *)srcPixelData + 1) ) /*0x71ea12*/
        (**v27)(v27, 1); /*0x71ea20*/
    }
    v28 = (void (__thiscall ***)(_DWORD, int))v29; /*0x71ea22*/
    v31 = 0xFFFFFFFF; /*0x71ea28*/
    if ( v29 ) /*0x71ea30*/
    {
      if ( !v26((volatile LONG *)(v29 + 4)) ) /*0x71ea36*/
        (**v28)(v28, 1); /*0x71ea44*/
    }
    return 0; /*0x71ea46*/
  }
  v23 = InterlockedDecrement; /*0x71e97e*/
  if ( v15 ) /*0x71e984*/
  {
    if ( !v23((volatile LONG *)(v15 + 4)) ) /*0x71e98a*/
      (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x71e998*/
  }
  v24 = (void (__thiscall ***)(void *, int))srcPixelData; /*0x71e99a*/
  LOBYTE(v31) = 0; /*0x71e9a0*/
  if ( srcPixelData ) /*0x71e9a5*/
  {
    if ( !v23((volatile LONG *)srcPixelData + 1) ) /*0x71e9ab*/
      (**v24)(v24, 1); /*0x71e9b9*/
  }
  v25 = (void (__thiscall ***)(_DWORD, int))v29; /*0x71e9bb*/
  v31 = 0xFFFFFFFF; /*0x71e9c1*/
  if ( v29 ) /*0x71e9c9*/
  {
    if ( !v23((volatile LONG *)(v29 + 4)) ) /*0x71e9cf*/
      (**v25)(v25, 1); /*0x71e9dd*/
  }
  return v20; /*0x71ea48*/
}
