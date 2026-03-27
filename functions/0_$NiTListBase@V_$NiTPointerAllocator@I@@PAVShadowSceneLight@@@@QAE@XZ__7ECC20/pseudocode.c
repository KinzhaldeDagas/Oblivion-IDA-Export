NiTListBase<NiTPointerAllocator<unsigned int>,ShadowSceneLight *> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,ShadowSceneLight *>::NiTListBase<NiTPointerAllocator<unsigned int>,ShadowSceneLight *>(
        NiTListBase<NiTPointerAllocator<unsigned int>,ShadowSceneLight *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,ShadowSceneLight *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
