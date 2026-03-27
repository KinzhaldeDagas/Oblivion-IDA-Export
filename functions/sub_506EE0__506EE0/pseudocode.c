_DWORD *__thiscall sub_506EE0(_DWORD *this, char a2)
{
  *this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiSourceTexture>>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
