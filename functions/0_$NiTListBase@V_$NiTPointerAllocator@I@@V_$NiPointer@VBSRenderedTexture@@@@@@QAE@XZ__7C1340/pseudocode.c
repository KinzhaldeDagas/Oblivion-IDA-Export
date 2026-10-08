NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<BSRenderedTexture>> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<BSRenderedTexture>>::NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<BSRenderedTexture>>(
        NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<BSRenderedTexture>> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<BSRenderedTexture>>::`vftable'; /*0x7c1348*/
  if ( (a2 & 1) != 0 ) /*0x7c134e*/
    FormHeapFree((unsigned int)this); /*0x7c1351*/
  return this; /*0x7c135b*/
}
