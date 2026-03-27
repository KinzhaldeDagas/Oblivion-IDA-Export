const char *__cdecl sub_774BD0(signed int a1)
{
  const char *result; // eax

  if ( a1 > 0x3154454D )
  {
    if ( a1 > 0x34545844 )
    {
      if ( a1 > 0x47424752 )
      {
        if ( a1 == 0x59565955 )
          return "D3DFMT_UYVY";
      }
      else
      {
        switch ( a1 )
        {
          case 0x47424752:
            return "D3DFMT_R8G8_B8G8";
          case 0x35545844:
            return "D3DFMT_DXT5";
          case 0x42475247:
            return "D3DFMT_G8R8_G8B8";
        }
      }
    }
    else
    {
      if ( a1 == 0x34545844 )
        return "D3DFMT_DXT4";
      if ( a1 > 0x32595559 )
      {
        if ( a1 == 0x33545844 )
          return "D3DFMT_DXT3";
      }
      else
      {
        switch ( a1 )
        {
          case 0x32595559:
            return "D3DFMT_YUY2";
          case 0x31545844:
            return "D3DFMT_DXT1";
          case 0x32545844:
            return "D3DFMT_DXT2";
        }
      }
    }
    return "UNKNOWN";
  }
  if ( a1 == 0x3154454D )
    return "D3DFMT_MULTI2_ARGB8";
  switch ( a1 )
  {
    case 0x14:
      result = "D3DFMT_R8G8B8";
      break;
    case 0x15:
      result = "D3DFMT_A8R8G8B8";
      break;
    case 0x16:
      result = "D3DFMT_X8R8G8B8";
      break;
    case 0x17:
      result = "D3DFMT_R5G6B5";
      break;
    case 0x18:
      result = "D3DFMT_X1R5G5B5";
      break;
    case 0x19:
      result = "D3DFMT_A1R5G5B5";
      break;
    case 0x1A:
      result = "D3DFMT_A4R4G4B4";
      break;
    case 0x1B:
      result = "D3DFMT_R3G3B2";
      break;
    case 0x1C:
      result = "D3DFMT_A8";
      break;
    case 0x1D:
      result = "D3DFMT_A8R3G3B2";
      break;
    case 0x1E:
      result = "D3DFMT_X4R4G4B4";
      break;
    case 0x1F:
      result = "D3DFMT_A2B10G10R10";
      break;
    case 0x20:
      result = "D3DFMT_A8B8G8R8";
      break;
    case 0x21:
      result = "D3DFMT_X8B8G8R8";
      break;
    case 0x22:
      result = "D3DFMT_G16R16";
      break;
    case 0x23:
      result = "D3DFMT_A2R10G10B10";
      break;
    case 0x24:
      result = "D3DFMT_A16B16G16R16";
      break;
    case 0x28:
      result = "D3DFMT_A8P8";
      break;
    case 0x29:
      result = "D3DFMT_P8";
      break;
    case 0x32:
      result = "D3DFMT_L8";
      break;
    case 0x33:
      result = "D3DFMT_A8L8";
      break;
    case 0x34:
      result = "D3DFMT_A4L4";
      break;
    case 0x3C:
      result = "D3DFMT_V8U8";
      break;
    case 0x3D:
      result = "D3DFMT_L6V5U5";
      break;
    case 0x3E:
      result = "D3DFMT_X8L8V8U8";
      break;
    case 0x3F:
      result = "D3DFMT_Q8W8V8U8";
      break;
    case 0x40:
      result = "D3DFMT_V16U16";
      break;
    case 0x43:
      result = "D3DFMT_A2W10V10U10";
      break;
    case 0x46:
      result = "D3DFMT_D16_LOCKABLE";
      break;
    case 0x47:
      result = "D3DFMT_D32";
      break;
    case 0x49:
      result = "D3DFMT_D15S1";
      break;
    case 0x4B:
      result = "D3DFMT_D24S8";
      break;
    case 0x4D:
      result = "D3DFMT_D24X8";
      break;
    case 0x4F:
      result = "D3DFMT_D24X4S4";
      break;
    case 0x50:
      result = "D3DFMT_D16";
      break;
    case 0x51:
      result = "D3DFMT_L16";
      break;
    case 0x52:
      result = "D3DFMT_D32F_LOCKABLE";
      break;
    case 0x53:
      result = "D3DFMT_D24FS8";
      break;
    case 0x64:
      result = "D3DFMT_VERTEXDATA";
      break;
    case 0x65:
      result = "D3DFMT_INDEX16";
      break;
    case 0x66:
      result = "D3DFMT_INDEX32";
      break;
    case 0x6E:
      result = "D3DFMT_Q16W16V16U16";
      break;
    case 0x6F:
      result = "D3DFMT_R16F";
      break;
    case 0x70:
      result = "D3DFMT_G16R16F";
      break;
    case 0x71:
      result = "D3DFMT_A16B16G16R16F";
      break;
    case 0x72:
      result = "D3DFMT_R32F";
      break;
    case 0x73:
      result = "D3DFMT_G32R32F";
      break;
    case 0x74:
      result = "D3DFMT_A32B32G32R32F";
      break;
    case 0x75:
      result = "D3DFMT_CxV8U8";
      break;
    default:
      return "UNKNOWN";
  }
  return result;
}
