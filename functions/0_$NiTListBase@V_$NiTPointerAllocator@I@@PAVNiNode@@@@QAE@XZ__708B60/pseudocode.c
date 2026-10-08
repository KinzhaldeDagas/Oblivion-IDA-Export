NiTListBase<NiTPointerAllocator<unsigned int>,NiNode *> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiNode *>::NiTListBase<NiTPointerAllocator<unsigned int>,NiNode *>(
        NiTListBase<NiTPointerAllocator<unsigned int>,NiNode *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiNode *>::`vftable'; /*0x708b68*/
  if ( (a2 & 1) != 0 ) /*0x708b6e*/
    FormHeapFree((unsigned int)this); /*0x708b71*/
  return this; /*0x708b7b*/
}
