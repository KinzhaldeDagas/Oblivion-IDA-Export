NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<BSRenderedTexture>> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<BSRenderedTexture>>::NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<BSRenderedTexture>>(
        NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<BSRenderedTexture>> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<BSRenderedTexture>>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
