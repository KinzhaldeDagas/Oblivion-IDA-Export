_DWORD *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiDX9DeviceDesc::DisplayFormatInfo *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiDX9DeviceDesc::DisplayFormatInfo *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
