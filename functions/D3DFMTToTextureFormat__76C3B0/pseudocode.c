_DWORD *__cdecl D3DFMTToTextureFormat(D3DFORMAT a1, NiSurfaceData *a2)
{
  NiSurfaceData *p_format; // esi

  if ( a1 > D3DDDIFMT_DXT1 )
  {
    if ( a1 == D3DDDIFMT_DXT3 )
    {
      p_format = (NiSurfaceData *)&unk_B25FF8;
    }
    else if ( a1 == D3DDDIFMT_DXT5 )
    {
      p_format = (NiSurfaceData *)&unk_B26040;
    }
    else
    {
D3DFMTToTextureFormat___def_76C3DB:
      p_format = (NiSurfaceData *)&unk_B26AA8;
    }
  }
  else if ( a1 == D3DDDIFMT_DXT1 )
  {
    p_format = (NiSurfaceData *)&unk_B25FB0;
  }
  else
  {
    switch ( a1 )
    {
      case D3DDDIFMT_R8G8B8:
        p_format = (NiSurfaceData *)&unk_B26598;
        break;
      case D3DDDIFMT_A8R8G8B8:
        p_format = (NiSurfaceData *)&unk_B265E0;
        break;
      case D3DDDIFMT_X8R8G8B8:
        p_format = (NiSurfaceData *)&unk_B26628;
        break;
      case D3DDDIFMT_R5G6B5:
        p_format = (NiSurfaceData *)&unk_B263E8;
        break;
      case D3DDDIFMT_X1R5G5B5:
        p_format = (NiSurfaceData *)&unk_B264C0;
        break;
      case D3DDDIFMT_A1R5G5B5:
        p_format = (NiSurfaceData *)&unk_B26478;
        break;
      case D3DDDIFMT_A4R4G4B4:
        p_format = (NiSurfaceData *)&unk_B26508;
        break;
      case D3DDDIFMT_R3G3B2:
        p_format = (NiSurfaceData *)&unk_B262C8;
        break;
      case D3DDDIFMT_A8:
        p_format = (NiSurfaceData *)&unk_B26280;
        break;
      case D3DDDIFMT_A8R3G3B2:
        p_format = (NiSurfaceData *)&unk_B26310;
        break;
      case D3DDDIFMT_X4R4G4B4:
        p_format = (NiSurfaceData *)&unk_B26550;
        break;
      case D3DDDIFMT_A2B10G10R10:
        p_format = (NiSurfaceData *)&unk_B266B8;
        break;
      case D3DDDIFMT_A8B8G8R8:
        p_format = (NiSurfaceData *)&unk_B25E00;
        break;
      case D3DDDIFMT_X8B8G8R8:
        p_format = (NiSurfaceData *)&unk_B26670;
        break;
      case D3DDDIFMT_G16R16:
        p_format = (NiSurfaceData *)&unk_B26748;
        break;
      case D3DDDIFMT_A2R10G10B10:
        p_format = (NiSurfaceData *)&unk_B26700;
        break;
      case D3DDDIFMT_A16B16G16R16:
      case D3DDDIFMT_A16B16G16R16F:
        p_format = (NiSurfaceData *)&unk_B260D0;
        break;
      case D3DDDIFMT_A8P8:
        p_format = (NiSurfaceData *)&unk_B267D8;
        break;
      case D3DDDIFMT_P8:
        p_format = (NiSurfaceData *)&unk_B25D70;
        break;
      case D3DDDIFMT_L8:
        p_format = (NiSurfaceData *)&unk_B26820;
        break;
      case D3DDDIFMT_A8L8:
        p_format = (NiSurfaceData *)&unk_B268B0;
        break;
      case D3DDDIFMT_A4L4:
        p_format = (NiSurfaceData *)&unk_B268F8;
        break;
      case D3DDDIFMT_V8U8:
        p_format = (NiSurfaceData *)&unk_B25F20;
        break;
      case D3DDDIFMT_L6V5U5:
        p_format = (NiSurfaceData *)&unk_B26790;
        break;
      case D3DDDIFMT_X8L8V8U8:
        p_format = (NiSurfaceData *)&unk_B26A18;
        break;
      case D3DDDIFMT_Q8W8V8U8:
        p_format = (NiSurfaceData *)&unk_B26940;
        break;
      case D3DDDIFMT_V16U16:
        p_format = (NiSurfaceData *)&unk_B26988;
        break;
      case D3DDDIFMT_A2W10V10U10:
        p_format = (NiSurfaceData *)&unk_B269D0;
        break;
      case D3DDDIFMT_D16_LOCKABLE:
      case D3DDDIFMT_D16:
        p_format = (NiSurfaceData *)&stru_B26AF0[3].format;
        break;
      case D3DDDIFMT_D32:
        p_format = (NiSurfaceData *)&stru_B26AF0[4].unk10;
        break;
      case D3DDDIFMT_D15S1:
        p_format = (NiSurfaceData *)&stru_B26AF0[5].unk14;
        break;
      case D3DDDIFMT_D24S8:
        p_format = (NiSurfaceData *)&stru_B26AF0[6].unk18;
        break;
      case D3DDDIFMT_D24X8:
        p_format = (NiSurfaceData *)&stru_B26AF0[8].unk20;
        break;
      case D3DDDIFMT_D24X4S4:
        p_format = (NiSurfaceData *)&stru_B26AF0[9].unk24;
        break;
      case D3DDDIFMT_L16:
        p_format = (NiSurfaceData *)&unk_B26868;
        break;
      case D3DDDIFMT_D32F_LOCKABLE:
      case D3DDDIFMT_D24FS8:
        p_format = (NiSurfaceData *)&stru_B26AF0[1].unk04;
        break;
      case D3DDDIFMT_Q16W16V16U16:
        p_format = (NiSurfaceData *)&stru_B26AF0[2].unk08;
        break;
      case D3DDDIFMT_R16F:
        p_format = (NiSurfaceData *)&unk_B261F0;
        break;
      case D3DDDIFMT_G16R16F:
        p_format = (NiSurfaceData *)&unk_B26160;
        break;
      case D3DDDIFMT_R32F:
        p_format = (NiSurfaceData *)&unk_B26118;
        break;
      case D3DDDIFMT_G32R32F:
        p_format = (NiSurfaceData *)&unk_B261A8;
        break;
      case D3DDDIFMT_A32B32G32R32F:
        p_format = (NiSurfaceData *)&unk_B26088;
        break;
      case D3DDDIFMT_CxV8U8:
        p_format = stru_B26AF0;
        break;
      default:
        goto D3DFMTToTextureFormat___def_76C3DB;
    }
  }
  qmemcpy(a2, p_format, sizeof(NiSurfaceData));
  a2->format = a1;
  a2->unk10 = 0;
  return &a2->unk00;
}
