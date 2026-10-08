NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiDX92DBufferData>> *__thiscall NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiDX92DBufferData>>::NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiDX92DBufferData>>(
        NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiDX92DBufferData>> *this,
        char a2)
{
  *(_DWORD *)this = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiDX92DBufferData>>::`vftable'; /*0x768bb3*/
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)this); /*0x768bb9*/
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiDX92DBufferData>>::`vftable'; /*0x768bc3*/
  if ( (a2 & 1) != 0 ) /*0x768bc9*/
    FormHeapFree((unsigned int)this); /*0x768bcc*/
  return this; /*0x768bd6*/
}
