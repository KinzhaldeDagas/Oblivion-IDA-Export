_DWORD *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiDX9DeviceDesc::DisplayFormatInfo *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiDX9DeviceDesc::DisplayFormatInfo *>::`vftable'; /*0x775018*/
  if ( (a2 & 1) != 0 ) /*0x77501e*/
    FormHeapFree((unsigned int)this); /*0x775021*/
  return this; /*0x77502b*/
}
