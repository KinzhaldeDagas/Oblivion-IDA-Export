NiTListBase<NiTPointerAllocator<unsigned int>,BSImageSpaceShader *> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,BSImageSpaceShader *>::NiTListBase<NiTPointerAllocator<unsigned int>,BSImageSpaceShader *>(
        NiTListBase<NiTPointerAllocator<unsigned int>,BSImageSpaceShader *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,BSImageSpaceShader *>::`vftable'; /*0x8033b8*/
  if ( (a2 & 1) != 0 ) /*0x8033be*/
    FormHeapFree((unsigned int)this); /*0x8033c1*/
  return this; /*0x8033cb*/
}
