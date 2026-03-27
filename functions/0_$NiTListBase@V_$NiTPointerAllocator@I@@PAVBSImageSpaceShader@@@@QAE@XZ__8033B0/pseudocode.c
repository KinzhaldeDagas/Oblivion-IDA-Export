NiTListBase<NiTPointerAllocator<unsigned int>,BSImageSpaceShader *> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,BSImageSpaceShader *>::NiTListBase<NiTPointerAllocator<unsigned int>,BSImageSpaceShader *>(
        NiTListBase<NiTPointerAllocator<unsigned int>,BSImageSpaceShader *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,BSImageSpaceShader *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
