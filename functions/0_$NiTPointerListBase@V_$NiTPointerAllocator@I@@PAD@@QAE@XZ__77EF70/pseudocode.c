NiTPointerListBase<NiTPointerAllocator<unsigned int>,char *> *__thiscall NiTPointerListBase<NiTPointerAllocator<unsigned int>,char *>::NiTPointerListBase<NiTPointerAllocator<unsigned int>,char *>(
        NiTPointerListBase<NiTPointerAllocator<unsigned int>,char *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,char *>::`vftable'; /*0x77ef73*/
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)this); /*0x77ef79*/
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,char *>::`vftable'; /*0x77ef83*/
  if ( (a2 & 1) != 0 ) /*0x77ef89*/
    FormHeapFree((unsigned int)this); /*0x77ef8c*/
  return this; /*0x77ef96*/
}
