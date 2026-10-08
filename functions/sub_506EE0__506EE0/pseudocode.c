_DWORD *__thiscall sub_506EE0(_DWORD *this, char a2)
{
  *this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiSourceTexture>>::`vftable'; /*0x506ee8*/
  if ( (a2 & 1) != 0 ) /*0x506eee*/
    FormHeapFree((unsigned int)this); /*0x506ef1*/
  return this; /*0x506efb*/
}
