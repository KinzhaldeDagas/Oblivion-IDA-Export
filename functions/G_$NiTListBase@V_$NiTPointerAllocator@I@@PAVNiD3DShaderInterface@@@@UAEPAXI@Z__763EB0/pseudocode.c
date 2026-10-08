_DWORD *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiD3DShaderInterface *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiD3DShaderInterface *>::`vftable'; /*0x763eb8*/
  if ( (a2 & 1) != 0 ) /*0x763ebe*/
    FormHeapFree((unsigned int)this); /*0x763ec1*/
  return this; /*0x763ecb*/
}
