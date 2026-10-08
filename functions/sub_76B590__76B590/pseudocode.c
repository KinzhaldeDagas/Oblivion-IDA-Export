unsigned int *__thiscall sub_76B590(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTPointerMap<NiDynamicTexture *,NiDX9DynamicTextureData *>::`vftable'; /*0x76b593*/
  NiTMap_Clear(this); /*0x76b599*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,NiDynamicTexture *,NiDX9DynamicTextureData *>::`vftable'; /*0x76b5a0*/
  NiTMap_Clear(this); /*0x76b5a6*/
  FormHeapFree(*(this + 2)); /*0x76b5af*/
  if ( (a2 & 1) != 0 ) /*0x76b5bc*/
    FormHeapFree((unsigned int)this); /*0x76b5bf*/
  return this; /*0x76b5c9*/
}
