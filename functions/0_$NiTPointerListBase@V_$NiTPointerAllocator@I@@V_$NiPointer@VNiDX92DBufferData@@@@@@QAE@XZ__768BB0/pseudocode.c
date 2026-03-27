NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiDX92DBufferData>> *__thiscall NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiDX92DBufferData>>::NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiDX92DBufferData>>(
        NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiDX92DBufferData>> *this,
        char a2)
{
  *(_DWORD *)this = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiDX92DBufferData>>::`vftable';
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)this);
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiDX92DBufferData>>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
