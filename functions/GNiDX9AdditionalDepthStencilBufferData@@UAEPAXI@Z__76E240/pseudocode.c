NiDX9AdditionalDepthStencilBufferData *__thiscall NiDX9AdditionalDepthStencilBufferData::`scalar deleting destructor'(
        NiDX9AdditionalDepthStencilBufferData *this,
        char a2)
{
  NiDX9AdditionalDepthStencilBufferData::~NiDX9AdditionalDepthStencilBufferData(this); /*0x76e243*/
  if ( (a2 & 1) != 0 ) /*0x76e24d*/
    FormHeapFree((unsigned int)this); /*0x76e250*/
  return this; /*0x76e25a*/
}
