NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<ShadowSceneLight>> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<ShadowSceneLight>>::NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<ShadowSceneLight>>(
        NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<ShadowSceneLight>> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<ShadowSceneLight>>::`vftable'; /*0x7c59c8*/
  if ( (a2 & 1) != 0 ) /*0x7c59ce*/
    FormHeapFree((unsigned int)this); /*0x7c59d1*/
  return this; /*0x7c59db*/
}
