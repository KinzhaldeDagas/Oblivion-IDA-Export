NiTListBase<NiTPointerAllocator<unsigned int>,ShadowSceneLight *> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,ShadowSceneLight *>::NiTListBase<NiTPointerAllocator<unsigned int>,ShadowSceneLight *>(
        NiTListBase<NiTPointerAllocator<unsigned int>,ShadowSceneLight *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,ShadowSceneLight *>::`vftable'; /*0x7ecc28*/
  if ( (a2 & 1) != 0 ) /*0x7ecc2e*/
    FormHeapFree((unsigned int)this); /*0x7ecc31*/
  return this; /*0x7ecc3b*/
}
