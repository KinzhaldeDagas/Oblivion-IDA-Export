const char *__cdecl OB_D3DFormat_ToString_010201A0(signed int a1)
{
  const char *result; // eax

  if ( a1 > 0x3154454D ) /*0x774bd9*/
  {
    if ( a1 > 0x34545844 ) /*0x774d30*/
    {
      if ( a1 > 0x47424752 ) /*0x774d75*/
      {
        if ( a1 == 0x59565955 ) /*0x774d9e*/
          return "D3DFMT_UYVY"; /*0x774da6*/
      }
      else
      {
        switch ( a1 ) /*0x774d77*/
        {
          case 0x47424752: /*0x774d77*/
            return "D3DFMT_R8G8_B8G8"; /*0x774d98*/
          case 0x35545844: /*0x774d77*/
            return "D3DFMT_DXT5";               // Oblivion's DX9 format domain explicitly recognizes FourCC DXT5 (0x35545844); SpeedTreeRT 4.1 reference leaf DDS assets predominantly use DXT5. /*0x774d92*/
          case 0x42475247: /*0x774d77*/
            return "D3DFMT_G8R8_G8B8"; /*0x774d8c*/
        }
      }
    }
    else
    {
      if ( a1 == 0x34545844 ) /*0x774d32*/
        return "D3DFMT_DXT4"; /*0x774d6f*/
      if ( a1 > 0x32595559 ) /*0x774d39*/
      {
        if ( a1 == 0x33545844 ) /*0x774d62*/
          return "D3DFMT_DXT3";                 // Oblivion's DX9 format domain explicitly recognizes FourCC DXT3 (0x33545844); SpeedTreeRT 4.1 reference leaf DDS assets include this format. /*0x774d69*/
      }
      else
      {
        switch ( a1 ) /*0x774d3b*/
        {
          case 0x32595559: /*0x774d3b*/
            return "D3DFMT_YUY2"; /*0x774d5c*/
          case 0x31545844: /*0x774d3b*/
            return "D3DFMT_DXT1";               // Oblivion's DX9 format domain explicitly recognizes FourCC DXT1 (0x31545844); retained SpeedTree leaf atlases may need CPU DXT1 base-level decode before repacking. /*0x774d56*/
          case 0x32545844: /*0x774d3b*/
            return "D3DFMT_DXT2"; /*0x774d50*/
        }
      }
    }
    return "UNKNOWN"; /*0x774da5*/
  }
  if ( a1 == 0x3154454D ) /*0x774bdf*/
    return "D3DFMT_MULTI2_ARGB8"; /*0x774d25*/
  switch ( a1 ) /*0x774bf8*/
  {
    case 0x14: /*0x774bf8*/
      result = "D3DFMT_R8G8B8"; /*0x774bff*/
      break; /*0x774c04*/
    case 0x15: /*0x774bf8*/
      result = "D3DFMT_A8R8G8B8"; /*0x774c05*/
      break; /*0x774c0a*/
    case 0x16: /*0x774bf8*/
      result = "D3DFMT_X8R8G8B8"; /*0x774c0b*/
      break; /*0x774c10*/
    case 0x17: /*0x774bf8*/
      result = "D3DFMT_R5G6B5"; /*0x774c11*/
      break; /*0x774c16*/
    case 0x18: /*0x774bf8*/
      result = "D3DFMT_X1R5G5B5"; /*0x774c17*/
      break; /*0x774c1c*/
    case 0x19: /*0x774bf8*/
      result = "D3DFMT_A1R5G5B5"; /*0x774c1d*/
      break; /*0x774c22*/
    case 0x1A: /*0x774bf8*/
      result = "D3DFMT_A4R4G4B4"; /*0x774c23*/
      break; /*0x774c28*/
    case 0x1B: /*0x774bf8*/
      result = "D3DFMT_R3G3B2"; /*0x774c29*/
      break; /*0x774c2e*/
    case 0x1C: /*0x774bf8*/
      result = "D3DFMT_A8"; /*0x774c2f*/
      break; /*0x774c34*/
    case 0x1D: /*0x774bf8*/
      result = "D3DFMT_A8R3G3B2"; /*0x774c35*/
      break; /*0x774c3a*/
    case 0x1E: /*0x774bf8*/
      result = "D3DFMT_X4R4G4B4"; /*0x774c3b*/
      break; /*0x774c40*/
    case 0x1F: /*0x774bf8*/
      result = "D3DFMT_A2B10G10R10"; /*0x774c41*/
      break; /*0x774c46*/
    case 0x20: /*0x774bf8*/
      result = "D3DFMT_A8B8G8R8"; /*0x774c47*/
      break; /*0x774c4c*/
    case 0x21: /*0x774bf8*/
      result = "D3DFMT_X8B8G8R8"; /*0x774c4d*/
      break; /*0x774c52*/
    case 0x22: /*0x774bf8*/
      result = "D3DFMT_G16R16"; /*0x774c53*/
      break; /*0x774c58*/
    case 0x23: /*0x774bf8*/
      result = "D3DFMT_A2R10G10B10"; /*0x774c59*/
      break; /*0x774c5e*/
    case 0x24: /*0x774bf8*/
      result = "D3DFMT_A16B16G16R16"; /*0x774c5f*/
      break; /*0x774c64*/
    case 0x28: /*0x774bf8*/
      result = "D3DFMT_A8P8"; /*0x774c65*/
      break; /*0x774c6a*/
    case 0x29: /*0x774bf8*/
      result = "D3DFMT_P8"; /*0x774c6b*/
      break; /*0x774c70*/
    case 0x32: /*0x774bf8*/
      result = "D3DFMT_L8"; /*0x774c71*/
      break; /*0x774c76*/
    case 0x33: /*0x774bf8*/
      result = "D3DFMT_A8L8"; /*0x774c77*/
      break; /*0x774c7c*/
    case 0x34: /*0x774bf8*/
      result = "D3DFMT_A4L4"; /*0x774c7d*/
      break; /*0x774c82*/
    case 0x3C: /*0x774bf8*/
      result = "D3DFMT_V8U8"; /*0x774c83*/
      break; /*0x774c88*/
    case 0x3D: /*0x774bf8*/
      result = "D3DFMT_L6V5U5"; /*0x774c89*/
      break; /*0x774c8e*/
    case 0x3E: /*0x774bf8*/
      result = "D3DFMT_X8L8V8U8"; /*0x774c8f*/
      break; /*0x774c94*/
    case 0x3F: /*0x774bf8*/
      result = "D3DFMT_Q8W8V8U8"; /*0x774c95*/
      break; /*0x774c9a*/
    case 0x40: /*0x774bf8*/
      result = "D3DFMT_V16U16"; /*0x774c9b*/
      break; /*0x774ca0*/
    case 0x43: /*0x774bf8*/
      result = "D3DFMT_A2W10V10U10"; /*0x774ca1*/
      break; /*0x774ca6*/
    case 0x46: /*0x774bf8*/
      result = "D3DFMT_D16_LOCKABLE"; /*0x774ca7*/
      break; /*0x774cac*/
    case 0x47: /*0x774bf8*/
      result = "D3DFMT_D32"; /*0x774cad*/
      break; /*0x774cb2*/
    case 0x49: /*0x774bf8*/
      result = "D3DFMT_D15S1"; /*0x774cb3*/
      break; /*0x774cb8*/
    case 0x4B: /*0x774bf8*/
      result = "D3DFMT_D24S8"; /*0x774cb9*/
      break; /*0x774cbe*/
    case 0x4D: /*0x774bf8*/
      result = "D3DFMT_D24X8"; /*0x774cbf*/
      break; /*0x774cc4*/
    case 0x4F: /*0x774bf8*/
      result = "D3DFMT_D24X4S4"; /*0x774cc5*/
      break; /*0x774cca*/
    case 0x50: /*0x774bf8*/
      result = "D3DFMT_D16"; /*0x774ccb*/
      break; /*0x774cd0*/
    case 0x51: /*0x774bf8*/
      result = "D3DFMT_L16"; /*0x774cdd*/
      break; /*0x774ce2*/
    case 0x52: /*0x774bf8*/
      result = "D3DFMT_D32F_LOCKABLE"; /*0x774cd1*/
      break; /*0x774cd6*/
    case 0x53: /*0x774bf8*/
      result = "D3DFMT_D24FS8"; /*0x774cd7*/
      break; /*0x774cdc*/
    case 0x64: /*0x774bf8*/
      result = "D3DFMT_VERTEXDATA"; /*0x774ce3*/
      break; /*0x774ce8*/
    case 0x65: /*0x774bf8*/
      result = "D3DFMT_INDEX16"; /*0x774ce9*/
      break; /*0x774cee*/
    case 0x66: /*0x774bf8*/
      result = "D3DFMT_INDEX32"; /*0x774cef*/
      break; /*0x774cf4*/
    case 0x6E: /*0x774bf8*/
      result = "D3DFMT_Q16W16V16U16"; /*0x774cf5*/
      break; /*0x774cfa*/
    case 0x6F: /*0x774bf8*/
      result = "D3DFMT_R16F"; /*0x774cfb*/
      break; /*0x774d00*/
    case 0x70: /*0x774bf8*/
      result = "D3DFMT_G16R16F"; /*0x774d01*/
      break; /*0x774d06*/
    case 0x71: /*0x774bf8*/
      result = "D3DFMT_A16B16G16R16F"; /*0x774d07*/
      break; /*0x774d0c*/
    case 0x72: /*0x774bf8*/
      result = "D3DFMT_R32F"; /*0x774d0d*/
      break; /*0x774d12*/
    case 0x73: /*0x774bf8*/
      result = "D3DFMT_G32R32F"; /*0x774d13*/
      break; /*0x774d18*/
    case 0x74: /*0x774bf8*/
      result = "D3DFMT_A32B32G32R32F"; /*0x774d19*/
      break; /*0x774d1e*/
    case 0x75: /*0x774bf8*/
      result = "D3DFMT_CxV8U8"; /*0x774d1f*/
      break; /*0x774d24*/
    default:
      return "UNKNOWN";
  }
  return result; /*0x774c04*/
}
