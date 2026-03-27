unsigned int *__thiscall sub_778B50(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
