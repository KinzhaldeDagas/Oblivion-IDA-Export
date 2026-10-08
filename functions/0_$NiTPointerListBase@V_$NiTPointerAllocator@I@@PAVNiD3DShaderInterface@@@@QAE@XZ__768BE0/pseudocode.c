NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiD3DShaderInterface *> *__thiscall NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiD3DShaderInterface *>::NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiD3DShaderInterface *>(
        NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiD3DShaderInterface *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiD3DShaderInterface *>::`vftable'; /*0x768be3*/
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)this); /*0x768be9*/
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiD3DShaderInterface *>::`vftable'; /*0x768bf3*/
  if ( (a2 & 1) != 0 ) /*0x768bf9*/
    FormHeapFree((unsigned int)this); /*0x768bfc*/
  return this; /*0x768c06*/
}
