NiDX9AdditionalDepthStencilBufferData *__thiscall NiDX9AdditionalDepthStencilBufferData::`scalar deleting destructor'(
        NiDX9AdditionalDepthStencilBufferData *this,
        char a2)
{
  NiDX9AdditionalDepthStencilBufferData::~NiDX9AdditionalDepthStencilBufferData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
