unsigned int *__thiscall sub_775D60(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTPointerMap<enum _D3DFORMAT,NiDX9DeviceDesc::DisplayFormatInfo::RenderTargetInfo *>::`vftable'; /*0x775d63*/
  NiTMap_Clear(this); /*0x775d69*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,enum _D3DFORMAT,NiDX9DeviceDesc::DisplayFormatInfo::RenderTargetInfo *>::`vftable'; /*0x775d70*/
  NiTMap_Clear(this); /*0x775d76*/
  FormHeapFree(*(this + 2)); /*0x775d7f*/
  if ( (a2 & 1) != 0 ) /*0x775d8c*/
    FormHeapFree((unsigned int)this); /*0x775d8f*/
  return this; /*0x775d99*/
}
