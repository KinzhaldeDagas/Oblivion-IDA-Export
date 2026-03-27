NiTPointerListBase<NiTPointerAllocator<unsigned int>,char *> *__thiscall NiTPointerListBase<NiTPointerAllocator<unsigned int>,char *>::NiTPointerListBase<NiTPointerAllocator<unsigned int>,char *>(
        NiTPointerListBase<NiTPointerAllocator<unsigned int>,char *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,char *>::`vftable';
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)this);
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,char *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
