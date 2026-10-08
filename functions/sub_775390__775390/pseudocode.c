unsigned int *__thiscall sub_775390(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,enum _D3DFORMAT,NiDX9DeviceDesc::DisplayFormatInfo::RenderTargetInfo *>::`vftable'; /*0x775393*/
  NiTMap_Clear(this); /*0x775399*/
  FormHeapFree(*(this + 2)); /*0x7753a2*/
  if ( (a2 & 1) != 0 ) /*0x7753af*/
    FormHeapFree((unsigned int)this); /*0x7753b2*/
  return this; /*0x7753bc*/
}
