NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<ShadowSceneLight>> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<ShadowSceneLight>>::NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<ShadowSceneLight>>(
        NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<ShadowSceneLight>> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<ShadowSceneLight>>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
