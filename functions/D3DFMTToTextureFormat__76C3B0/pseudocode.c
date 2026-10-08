// DX10OBSE runtime log pass 2026-05-24: D3D9 texture formats 0x17 R5G6B5 and 0x1A A4R4G4B4 appeared as high-volume mirror failures on the active D3D10 runtime. Plugin now treats legacy packed color texture/surface mirrors as RGBA8 upload targets and expands D3D9 shadow data during UpdateSubresource instead of relying on B5/B4 DXGI formats.
_DWORD *__cdecl D3DFMTToTextureFormat(D3DFORMAT a1, NiSurfaceData *a2)
{
  NiSurfaceData *p_format; // esi

  if ( a1 > D3DDDIFMT_DXT1 ) /*0x76c3bc*/
  {
    if ( a1 == D3DDDIFMT_DXT3 ) /*0x76c576*/
    {
      p_format = (NiSurfaceData *)&unk_B25FF8; /*0x76c58e*/
    }
    else if ( a1 == D3DDDIFMT_DXT5 ) /*0x76c57e*/
    {
      p_format = (NiSurfaceData *)&unk_B26040; /*0x76c587*/
    }
    else
    {
D3DFMTToTextureFormat___def_76C3DB:
      p_format = (NiSurfaceData *)&unk_B26AA8; /*0x76c580*/
    }
  }
  else if ( a1 == D3DDDIFMT_DXT1 ) /*0x76c3c2*/
  {
    p_format = (NiSurfaceData *)&unk_B25FB0; /*0x76c569*/
  }
  else
  {
    switch ( a1 ) /*0x76c3db*/
    {
      case D3DDDIFMT_R8G8B8: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B26598; /*0x76c3e2*/
        break; /*0x76c3e7*/
      case D3DDDIFMT_A8R8G8B8: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B265E0; /*0x76c3ec*/
        break; /*0x76c3f1*/
      case D3DDDIFMT_X8R8G8B8: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B26628; /*0x76c3f6*/
        break; /*0x76c3fb*/
      case D3DDDIFMT_R5G6B5: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B263E8; /*0x76c400*/
        break; /*0x76c405*/
      case D3DDDIFMT_X1R5G5B5: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B264C0; /*0x76c40a*/
        break; /*0x76c40f*/
      case D3DDDIFMT_A1R5G5B5: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B26478; /*0x76c414*/
        break; /*0x76c419*/
      case D3DDDIFMT_A4R4G4B4: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B26508; /*0x76c41e*/
        break; /*0x76c423*/
      case D3DDDIFMT_R3G3B2: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B262C8; /*0x76c428*/
        break; /*0x76c42d*/
      case D3DDDIFMT_A8: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B26280; /*0x76c432*/
        break; /*0x76c437*/
      case D3DDDIFMT_A8R3G3B2: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B26310; /*0x76c43c*/
        break; /*0x76c441*/
      case D3DDDIFMT_X4R4G4B4: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B26550; /*0x76c446*/
        break; /*0x76c44b*/
      case D3DDDIFMT_A2B10G10R10: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B266B8; /*0x76c450*/
        break; /*0x76c455*/
      case D3DDDIFMT_A8B8G8R8: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B25E00; /*0x76c45a*/
        break; /*0x76c45f*/
      case D3DDDIFMT_X8B8G8R8: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B26670; /*0x76c464*/
        break; /*0x76c469*/
      case D3DDDIFMT_G16R16: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B26748; /*0x76c46e*/
        break; /*0x76c473*/
      case D3DDDIFMT_A2R10G10B10: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B26700; /*0x76c478*/
        break; /*0x76c47d*/
      case D3DDDIFMT_A16B16G16R16: /*0x76c3db*/
      case D3DDDIFMT_A16B16G16R16F: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B260D0; /*0x76c482*/
        break; /*0x76c487*/
      case D3DDDIFMT_A8P8: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B267D8; /*0x76c48c*/
        break; /*0x76c491*/
      case D3DDDIFMT_P8: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B25D70; /*0x76c496*/
        break; /*0x76c49b*/
      case D3DDDIFMT_L8: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B26820; /*0x76c4a0*/
        break; /*0x76c4a5*/
      case D3DDDIFMT_A8L8: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B268B0; /*0x76c4b4*/
        break; /*0x76c4b9*/
      case D3DDDIFMT_A4L4: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B268F8; /*0x76c4be*/
        break; /*0x76c4c3*/
      case D3DDDIFMT_V8U8: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B25F20; /*0x76c4c8*/
        break; /*0x76c4cd*/
      case D3DDDIFMT_L6V5U5: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B26790; /*0x76c4fa*/
        break; /*0x76c4ff*/
      case D3DDDIFMT_X8L8V8U8: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B26A18; /*0x76c504*/
        break; /*0x76c509*/
      case D3DDDIFMT_Q8W8V8U8: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B26940; /*0x76c4d2*/
        break; /*0x76c4d7*/
      case D3DDDIFMT_V16U16: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B26988; /*0x76c4dc*/
        break; /*0x76c4e1*/
      case D3DDDIFMT_A2W10V10U10: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B269D0; /*0x76c50e*/
        break; /*0x76c513*/
      case D3DDDIFMT_D16_LOCKABLE: /*0x76c3db*/
      case D3DDDIFMT_D16: /*0x76c3db*/
        p_format = (NiSurfaceData *)&stru_B26AF0[3].format; /*0x76c515*/
        break; /*0x76c51a*/
      case D3DDDIFMT_D32: /*0x76c3db*/
        p_format = (NiSurfaceData *)&stru_B26AF0[4].unk10; /*0x76c51c*/
        break; /*0x76c521*/
      case D3DDDIFMT_D15S1: /*0x76c3db*/
        p_format = (NiSurfaceData *)&stru_B26AF0[5].unk14; /*0x76c523*/
        break; /*0x76c528*/
      case D3DDDIFMT_D24S8: /*0x76c3db*/
        p_format = (NiSurfaceData *)&stru_B26AF0[6].unk18; /*0x76c52a*/
        break; /*0x76c52f*/
      case D3DDDIFMT_D24X8: /*0x76c3db*/
        p_format = (NiSurfaceData *)&stru_B26AF0[8].unk20; /*0x76c531*/
        break; /*0x76c536*/
      case D3DDDIFMT_D24X4S4: /*0x76c3db*/
        p_format = (NiSurfaceData *)&stru_B26AF0[9].unk24; /*0x76c538*/
        break; /*0x76c53d*/
      case D3DDDIFMT_L16: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B26868; /*0x76c4aa*/
        break; /*0x76c4af*/
      case D3DDDIFMT_D32F_LOCKABLE: /*0x76c3db*/
      case D3DDDIFMT_D24FS8: /*0x76c3db*/
        p_format = (NiSurfaceData *)&stru_B26AF0[1].unk04; /*0x76c53f*/
        break; /*0x76c544*/
      case D3DDDIFMT_Q16W16V16U16: /*0x76c3db*/
        p_format = (NiSurfaceData *)&stru_B26AF0[2].unk08; /*0x76c4e6*/
        break; /*0x76c4eb*/
      case D3DDDIFMT_R16F: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B261F0; /*0x76c546*/
        break; /*0x76c54b*/
      case D3DDDIFMT_G16R16F: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B26160; /*0x76c54d*/
        break; /*0x76c552*/
      case D3DDDIFMT_R32F: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B26118; /*0x76c554*/
        break; /*0x76c559*/
      case D3DDDIFMT_G32R32F: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B261A8; /*0x76c55b*/
        break; /*0x76c560*/
      case D3DDDIFMT_A32B32G32R32F: /*0x76c3db*/
        p_format = (NiSurfaceData *)&unk_B26088; /*0x76c562*/
        break; /*0x76c567*/
      case D3DDDIFMT_CxV8U8: /*0x76c3db*/
        p_format = stru_B26AF0; /*0x76c4f0*/
        break; /*0x76c4f5*/
      default:
        goto D3DFMTToTextureFormat___def_76C3DB;
    }
  }
  qmemcpy(a2, p_format, sizeof(NiSurfaceData)); /*0x76c59e*/
  a2->format = a1; /*0x76c5a1*/
  a2->unk10 = 0; /*0x76c5a4*/
  return &a2->unk00; /*0x76c5a0*/
}
