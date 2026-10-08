// Converts an Oblivion/Gamebryo NiPixelFormat into D3DFORMAT. Honors an explicit format at +0x0C; otherwise maps channel masks, bit depth, compressed DXT1/3/5, float, luminance, palette, and depth/stencil layouts. Returns D3DFMT_UNKNOWN for unsupported layouts.
D3DFORMAT __cdecl NiDX9Renderer_ConvertPixelFormatToD3DFormat(const void *pixelFormat)
{
  D3DFORMAT result; // eax
  unsigned __int8 v2; // cl
  D3DFORMAT v3; // edi
  char v4; // al

  result = *((_DWORD *)pixelFormat + 3); /*0x76bef5*/
  v2 = *((_BYTE *)pixelFormat + 1); /*0x76befb*/
  if ( result == 0xFFFFFFFF )
  {
    v3 = D3DFMT_UNKNOWN; /*0x76bf04*/
    switch ( *((_DWORD *)pixelFormat + 1) )
    {
      case 0:
        switch ( v2 ) /*0x76bf28*/
        {
          case 8u: /*0x76bf28*/
            if ( sub_700B60((char *)pixelFormat, 0) == 0xE0 ) /*0x76bf3d*/
            {
              v3 = D3DFMT_R3G3B2; /*0x76bf3f*/
              goto LABEL_6; /*0x76bf3f*/
            }
            if ( sub_700B60((char *)pixelFormat, 0) ) /*0x76bf4d*/
              goto LABEL_6; /*0x76bf54*/
            return D3DFMT_L8; /*0x76bf5f*/
          case 0x10u: /*0x76bf28*/
            if ( sub_700B60((char *)pixelFormat, 0) == 0xF800 ) /*0x76bf6e*/
              return D3DFMT_R5G6B5; /*0x76bf79*/
            if ( sub_700B60((char *)pixelFormat, 0) == 0x7C00 ) /*0x76bf88*/
              return D3DFMT_X1R5G5B5; /*0x76bf93*/
            if ( sub_700B60((char *)pixelFormat, 0) == 0xF00 ) /*0x76bfa2*/
              return D3DFMT_X4R4G4B4; /*0x76bfad*/
            if ( sub_700B60((char *)pixelFormat, 0) ) /*0x76bfb2*/
              goto LABEL_6; /*0x76bfb9*/
            return D3DFMT_L16; /*0x76bfc4*/
          case 0x18u: /*0x76bf28*/
            return D3DFMT_R8G8B8; /*0x76bfce*/
          case 0x20u: /*0x76bf28*/
            if ( sub_700B60((char *)pixelFormat, 0) == 0xFF0000 ) /*0x76bfdd*/
              return D3DFMT_X8R8G8B8; /*0x76bfe8*/
            if ( sub_700B60((char *)pixelFormat, 0) == 0xFF ) /*0x76bff7*/
              return D3DFMT_X8B8G8R8; /*0x76c002*/
            if ( sub_700B60((char *)pixelFormat, 0) != 0xFFFF0000 ) /*0x76c011*/
              goto LABEL_6; /*0x76c011*/
            result = D3DFMT_G16R16; /*0x76c01c*/
            break; /*0x76c020*/
          default:
            goto LABEL_25;
        }
        break; /*0x76c020*/
      case 1:
        switch ( v2 ) /*0x76c03a*/
        {
          case 8u: /*0x76c03a*/
            if ( !sub_700B60((char *)pixelFormat, 9) ) /*0x76c045*/
              return D3DFMT_A8; /*0x76c057*/
            if ( sub_700B60((char *)pixelFormat, 9) != 0xF ) /*0x76c064*/
              goto LABEL_6; /*0x76c064*/
            return D3DFMT_A4L4; /*0x76c073*/
          case 0x10u: /*0x76c03a*/
            if ( sub_700B60((char *)pixelFormat, 0) == 0x7C00 ) /*0x76c082*/
              return D3DFMT_A1R5G5B5; /*0x76c08d*/
            if ( sub_700B60((char *)pixelFormat, 0) == 0xF00 ) /*0x76c09c*/
              return D3DFMT_A4R4G4B4; /*0x76c0a7*/
            if ( sub_700B60((char *)pixelFormat, 0) == 0xE0 ) /*0x76c0b6*/
              return D3DFMT_A8R3G3B2; /*0x76c0c1*/
            if ( !sub_700B60((char *)pixelFormat, 0) ) /*0x76c0c6*/
              goto LABEL_38; /*0x76c0cd*/
            goto LABEL_6; /*0x76c0cd*/
          case 0x20u: /*0x76c03a*/
            if ( sub_700B60((char *)pixelFormat, 0) == 0xFF0000 ) /*0x76c0eb*/
              goto LABEL_71; /*0x76c0eb*/
            if ( sub_700B60((char *)pixelFormat, 0) == 0x3FF ) /*0x76c0ff*/
              return D3DFMT_A2B10G10R10; /*0x76c10a*/
            if ( sub_700B60((char *)pixelFormat, 0) == 0xFF ) /*0x76c119*/
              return D3DFMT_A8B8G8R8; /*0x76c124*/
            if ( sub_700B60((char *)pixelFormat, 0) != 0x3FF00000 ) /*0x76c133*/
              goto LABEL_6; /*0x76c133*/
            result = D3DFMT_A2R10G10B10; /*0x76c13e*/
            break; /*0x76c142*/
          case 0x40u: /*0x76c03a*/
            goto LABEL_46;
          case 0x80u: /*0x76c03a*/
            goto LABEL_70;
          default:
            goto LABEL_25;
        }
        break; /*0x76c142*/
      case 2:
        result = D3DFMT_P8; /*0x76c152*/
        break; /*0x76c156*/
      case 3:
      case 0xA:
      case 0xD:
LABEL_25:
        result = D3DFMT_UNKNOWN; /*0x76c021*/
        break; /*0x76c027*/
      case 4:
        result = D3DFMT_DXT1; /*0x76c15c*/
        break; /*0x76c160*/
      case 5:
        result = D3DFMT_DXT3; /*0x76c166*/
        break; /*0x76c16a*/
      case 6:
        result = D3DFMT_DXT5; /*0x76c170*/
        break; /*0x76c174*/
      case 8:
        result = D3DFMT_V8U8; /*0x76c17a*/
        break; /*0x76c17e*/
      case 9:
        if ( v2 == 0x10 ) /*0x76c182*/
        {
          result = D3DFMT_L6V5U5; /*0x76c189*/
        }
        else
        {
          if ( v2 != 0x20 ) /*0x76c191*/
            goto LABEL_6; /*0x76c191*/
          result = D3DFMT_X8L8V8U8; /*0x76c19c*/
        }
        break; /*0x76c18d*/
      case 0xB:
        switch ( v2 )
        {
          case 8u:
            result = sub_700B60((char *)pixelFormat, 3) != 0 ? D3DFMT_A8 : D3DFMT_L8;
            break;
          case 0x10u:
            result = D3DFMT_R16F; /*0x76c1c3*/
            break;
          case 0x20u:
            result = D3DFMT_R32F; /*0x76c1b9*/
            break;
          default:
            goto LABEL_6; /*0x76c1ae*/
        }
        break; /*0x76c1bd*/
      case 0xC:
        switch ( v2 ) /*0x76c1e5*/
        {
          case 0x10u: /*0x76c1e5*/
LABEL_38:
            result = D3DFMT_A8L8; /*0x76c0d3*/
            break;
          case 0x20u: /*0x76c1e5*/
            result = D3DFMT_G16R16F; /*0x76c208*/
            break;
          case 0x40u: /*0x76c1e5*/
            result = D3DFMT_G32R32F; /*0x76c1fe*/
            break;
          default:
            goto LABEL_6; /*0x76c1f3*/
        }
        break; /*0x76c202*/
      case 0xE:
        switch ( v2 ) /*0x76c213*/
        {
          case 0x20u: /*0x76c213*/
LABEL_71:
            result = D3DFMT_A8R8G8B8; /*0x76c231*/
            break;
          case 0x40u: /*0x76c213*/
LABEL_46:
            result = D3DFMT_A16B16G16R16F; /*0x76c143*/
            break;
          case 0x80u: /*0x76c213*/
LABEL_70:
            result = D3DFMT_A32B32G32R32F; /*0x76c227*/
            break;
          default:
            goto LABEL_6; /*0x76c221*/
        }
        break; /*0x76c230*/
      case 0xF:
        if ( v2 == 0x10 )
        {
          result = sub_71B4A0((char *)pixelFormat, 0x12) != 1 ? D3DFMT_D16 : D3DFMT_D15S1;
        }
        else
        {
          if ( v2 != 0x20 ) /*0x76c243*/
            goto LABEL_6; /*0x76c243*/
          v4 = sub_71B4A0((char *)pixelFormat, 0x12); /*0x76c24d*/
          if ( v4 == 4 )
          {
            result = D3DFMT_D24X4S4; /*0x76c27b*/
          }
          else if ( v4 == 8 )
          {
            result = D3DFMT_D24S8; /*0x76c273*/
          }
          else
          {
            result = sub_71B4A0((char *)pixelFormat, 0x11) != 0x18 ? D3DFMT_D32 : D3DFMT_D24X8;
          }
        }
        break; /*0x76c271*/
      default:
LABEL_6:
        result = v3; /*0x76bf44*/
        break; /*0x76bf44*/
    }
  }
  return result; /*0x76bf47*/
}
