NiTListBase<NiTPointerAllocator<unsigned int>,BSFaceGenKeyframe *> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,BSFaceGenKeyframe *>::NiTListBase<NiTPointerAllocator<unsigned int>,BSFaceGenKeyframe *>(
        NiTListBase<NiTPointerAllocator<unsigned int>,BSFaceGenKeyframe *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,BSFaceGenKeyframe *>::`vftable'; /*0x54a438*/
  if ( (a2 & 1) != 0 ) /*0x54a43e*/
    FormHeapFree((unsigned int)this); /*0x54a441*/
  return this; /*0x54a44b*/
}
