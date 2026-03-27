NiTListBase<NiTPointerAllocator<unsigned int>,BSFaceGenKeyframe *> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,BSFaceGenKeyframe *>::NiTListBase<NiTPointerAllocator<unsigned int>,BSFaceGenKeyframe *>(
        NiTListBase<NiTPointerAllocator<unsigned int>,BSFaceGenKeyframe *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,BSFaceGenKeyframe *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
