_DWORD *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
