// Map D3D depth/stencil formats to their depth-bit and stencil-bit counts for compatibility ranking.
void __cdecl D3DDepthStencilFormat_GetBitCounts(D3DFORMAT format, unsigned int *depthBits, unsigned int *stencilBits)
{
  switch ( format ) /*0x774af0*/
  {
    case D3DFMT_D16_LOCKABLE: /*0x774af0*/
      *depthBits = 0x10; /*0x774aff*/
      *stencilBits = 0; /*0x774b05*/
      break; /*0x774b0b*/
    case D3DFMT_D32: /*0x774af0*/
      *depthBits = 0x20; /*0x774b29*/
      *stencilBits = 0; /*0x774b2f*/
      break; /*0x774b35*/
    case D3DFMT_D15S1: /*0x774af0*/
      *depthBits = 0xF; /*0x774b3e*/
      *stencilBits = 1; /*0x774b44*/
      break; /*0x774b4a*/
    case D3DFMT_D24S8: /*0x774af0*/
      *depthBits = 0x18; /*0x774b14*/
      *stencilBits = 8; /*0x774b1a*/
      break; /*0x774b20*/
    case D3DFMT_D24X8: /*0x774af0*/
      *depthBits = 0x18; /*0x774b68*/
      *stencilBits = 0; /*0x774b6e*/
      break; /*0x774b74*/
    case D3DFMT_D24X4S4: /*0x774af0*/
      *depthBits = 0x18; /*0x774b7d*/
      *stencilBits = 4; /*0x774b83*/
      break; /*0x774b89*/
    case D3DFMT_D16: /*0x774af0*/
      *depthBits = 0x10; /*0x774b53*/
      *stencilBits = 0; /*0x774b59*/
      break; /*0x774b5f*/
    default:
      *depthBits = 0; /*0x774b92*/
      *stencilBits = 0; /*0x774b98*/
      break; /*0x774b98*/
  }
}
