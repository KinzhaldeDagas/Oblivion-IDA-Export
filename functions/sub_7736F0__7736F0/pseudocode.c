// Maps common COM/D3D9 HRESULT values to diagnostic names, including DEVICELOST, DEVICENOTRESET, INVALIDCALL, OUTOFVIDEOMEMORY, and format/state failures.
const char *__cdecl D3D9_HResultToString(unsigned int hresult)
{
  const char *result; // eax

  if ( hresult > 0x88760818 ) /*0x7736f9*/
  {
    switch ( hresult ) /*0x773752*/
    {
      case 0x88760819: /*0x773752*/
        result = "D3DERR_UNSUPPORTEDCOLOROPERATION"; /*0x7737b3*/
        break; /*0x7737b8*/
      case 0x8876081A: /*0x773752*/
        result = "D3DERR_UNSUPPORTEDCOLORARG"; /*0x7737ad*/
        break; /*0x7737b2*/
      case 0x8876081B: /*0x773752*/
        result = "D3DERR_UNSUPPORTEDALPHAOPERATION"; /*0x7737a7*/
        break; /*0x7737ac*/
      case 0x8876081C: /*0x773752*/
        result = "D3DERR_UNSUPPORTEDALPHAARG"; /*0x7737a1*/
        break; /*0x7737a6*/
      case 0x8876081D: /*0x773752*/
        result = "D3DERR_TOOMANYOPERATIONS"; /*0x77379b*/
        break; /*0x7737a0*/
      case 0x8876081E: /*0x773752*/
        result = "D3DERR_CONFLICTINGTEXTUREFILTER"; /*0x77375f*/
        break; /*0x773764*/
      case 0x8876081F: /*0x773752*/
        result = "D3DERR_UNSUPPORTEDFACTORVALUE"; /*0x7737b9*/
        break; /*0x7737be*/
      case 0x88760821: /*0x773752*/
        result = "D3DERR_CONFLICTINGRENDERSTATE"; /*0x773759*/
        break; /*0x77375e*/
      case 0x88760822: /*0x773752*/
        result = "D3DERR_UNSUPPORTEDTEXTUREFILTER"; /*0x7737bf*/
        break; /*0x7737c4*/
      case 0x88760826: /*0x773752*/
        result = "D3DERR_CONFLICTINGTEXTUREPALETTE"; /*0x773765*/
        break; /*0x77376a*/
      case 0x88760827: /*0x773752*/
        result = "D3DERR_DRIVERINTERNALERROR"; /*0x773777*/
        break; /*0x77377c*/
      case 0x88760866: /*0x773752*/
        result = "D3DERR_NOTFOUND"; /*0x773795*/
        break; /*0x77379a*/
      case 0x88760867: /*0x773752*/
        result = "D3DERR_MOREDATA"; /*0x773789*/
        break; /*0x77378e*/
      case 0x88760868: /*0x773752*/
        result = "D3DERR_DEVICELOST"; /*0x77376b*/
        break; /*0x773770*/
      case 0x88760869: /*0x773752*/
        result = "D3DERR_DEVICENOTRESET"; /*0x773771*/
        break; /*0x773776*/
      case 0x8876086A: /*0x773752*/
        result = "D3DERR_NOTAVAILABLE"; /*0x77378f*/
        break; /*0x773794*/
      case 0x8876086B: /*0x773752*/
        result = "D3DERR_INVALIDDEVICE"; /*0x773783*/
        break; /*0x773788*/
      case 0x8876086C: /*0x773752*/
        result = "D3DERR_INVALIDCALL"; /*0x77377d*/
        break; /*0x773782*/
      default:
        return "UNKNOWN!";
    }
  }
  else if ( hresult == 0x88760818 ) /*0x7736fb*/
  {
    return "D3DERR_WRONGTEXTUREFORMAT"; /*0x77373b*/
  }
  else
  {
    if ( hresult > 0x80070057 ) /*0x773702*/
    {
      if ( hresult == 0x8876017C ) /*0x77372f*/
        return "D3DERR_OUTOFVIDEOMEMORY"; /*0x77373a*/
    }
    else
    {
      switch ( hresult ) /*0x773704*/
      {
        case 0x80070057: /*0x773704*/
          return "E_INVALIDARG"; /*0x773729*/
        case 0x80004005: /*0x773704*/
          return "E_FAIL"; /*0x773723*/
        case 0x8007000E: /*0x773704*/
          return "E_OUTOFMEMORY"; /*0x77371d*/
      }
    }
    return "UNKNOWN!"; /*0x7737c5*/
  }
  return result; /*0x77371d*/
}
