unsigned int *__thiscall sub_77EEE0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiD3DVertexShader *>::`vftable'; /*0x77eee3*/
  NiTMap_Clear(this); /*0x77eee9*/
  FormHeapFree(*(this + 2)); /*0x77eef2*/
  if ( (a2 & 1) != 0 ) /*0x77eeff*/
    FormHeapFree((unsigned int)this); /*0x77ef02*/
  return this; /*0x77ef0c*/
}
