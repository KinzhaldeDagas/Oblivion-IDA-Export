unsigned int *__thiscall sub_775D60(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTPointerMap<enum _D3DFORMAT,NiDX9DeviceDesc::DisplayFormatInfo::RenderTargetInfo *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,enum _D3DFORMAT,NiDX9DeviceDesc::DisplayFormatInfo::RenderTargetInfo *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
