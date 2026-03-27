NiTListBase<NiTPointerAllocator<unsigned int>,NiNode *> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiNode *>::NiTListBase<NiTPointerAllocator<unsigned int>,NiNode *>(
        NiTListBase<NiTPointerAllocator<unsigned int>,NiNode *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiNode *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
