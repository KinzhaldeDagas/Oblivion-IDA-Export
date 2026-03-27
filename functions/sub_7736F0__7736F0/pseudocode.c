const char *__cdecl sub_7736F0(unsigned int a1)
{
  const char *result; // eax

  if ( a1 > 0x88760818 )
  {
    switch ( a1 )
    {
      case 0x88760819:
        result = "D3DERR_UNSUPPORTEDCOLOROPERATION";
        break;
      case 0x8876081A:
        result = "D3DERR_UNSUPPORTEDCOLORARG";
        break;
      case 0x8876081B:
        result = "D3DERR_UNSUPPORTEDALPHAOPERATION";
        break;
      case 0x8876081C:
        result = "D3DERR_UNSUPPORTEDALPHAARG";
        break;
      case 0x8876081D:
        result = "D3DERR_TOOMANYOPERATIONS";
        break;
      case 0x8876081E:
        result = "D3DERR_CONFLICTINGTEXTUREFILTER";
        break;
      case 0x8876081F:
        result = "D3DERR_UNSUPPORTEDFACTORVALUE";
        break;
      case 0x88760821:
        result = "D3DERR_CONFLICTINGRENDERSTATE";
        break;
      case 0x88760822:
        result = "D3DERR_UNSUPPORTEDTEXTUREFILTER";
        break;
      case 0x88760826:
        result = "D3DERR_CONFLICTINGTEXTUREPALETTE";
        break;
      case 0x88760827:
        result = "D3DERR_DRIVERINTERNALERROR";
        break;
      case 0x88760866:
        result = "D3DERR_NOTFOUND";
        break;
      case 0x88760867:
        result = "D3DERR_MOREDATA";
        break;
      case 0x88760868:
        result = "D3DERR_DEVICELOST";
        break;
      case 0x88760869:
        result = "D3DERR_DEVICENOTRESET";
        break;
      case 0x8876086A:
        result = "D3DERR_NOTAVAILABLE";
        break;
      case 0x8876086B:
        result = "D3DERR_INVALIDDEVICE";
        break;
      case 0x8876086C:
        result = "D3DERR_INVALIDCALL";
        break;
      default:
        return "UNKNOWN!";
    }
  }
  else if ( a1 == 0x88760818 )
  {
    return "D3DERR_WRONGTEXTUREFORMAT";
  }
  else
  {
    if ( a1 > 0x80070057 )
    {
      if ( a1 == 0x8876017C )
        return "D3DERR_OUTOFVIDEOMEMORY";
    }
    else
    {
      switch ( a1 )
      {
        case 0x80070057:
          return "E_INVALIDARG";
        case 0x80004005:
          return "E_FAIL";
        case 0x8007000E:
          return "E_OUTOFMEMORY";
      }
    }
    return "UNKNOWN!";
  }
  return result;
}
