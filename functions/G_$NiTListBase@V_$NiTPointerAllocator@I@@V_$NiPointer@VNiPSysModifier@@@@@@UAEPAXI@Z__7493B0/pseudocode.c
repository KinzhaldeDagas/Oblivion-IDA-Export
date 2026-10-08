_DWORD *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiPSysModifier>>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiPSysModifier>>::`vftable'; /*0x7493b8*/
  if ( (a2 & 1) != 0 ) /*0x7493be*/
    FormHeapFree((unsigned int)this); /*0x7493c1*/
  return this; /*0x7493cb*/
}
