unsigned int *__thiscall sub_777B10(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
