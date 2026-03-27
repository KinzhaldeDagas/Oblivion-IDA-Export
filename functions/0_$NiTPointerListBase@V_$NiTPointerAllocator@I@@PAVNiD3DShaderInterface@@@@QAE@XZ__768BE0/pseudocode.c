NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiD3DShaderInterface *> *__thiscall NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiD3DShaderInterface *>::NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiD3DShaderInterface *>(
        NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiD3DShaderInterface *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiD3DShaderInterface *>::`vftable';
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)this);
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiD3DShaderInterface *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
