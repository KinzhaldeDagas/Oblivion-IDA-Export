unsigned int *__thiscall sub_76B510(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTPointerMap<NiRenderedTexture *,NiDX9RenderedTextureData *>::`vftable'; /*0x76b513*/
  NiTMap_Clear(this); /*0x76b519*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,NiRenderedTexture *,NiDX9RenderedTextureData *>::`vftable'; /*0x76b520*/
  NiTMap_Clear(this); /*0x76b526*/
  FormHeapFree(*(this + 2)); /*0x76b52f*/
  if ( (a2 & 1) != 0 ) /*0x76b53c*/
    FormHeapFree((unsigned int)this); /*0x76b53f*/
  return this; /*0x76b549*/
}
