NiTMapBase<DFALL<unsigned int>,NiSourceTexture *,unsigned int> *__thiscall NiTMapBase<DFALL<unsigned int>,NiSourceTexture *,unsigned int>::NiTMapBase<DFALL<unsigned int>,NiSourceTexture *,unsigned int>(
        NiTMapBase<DFALL<unsigned int>,NiSourceTexture *,unsigned int> *this,
        char a2)
{
  *(_DWORD *)this = &NiTMapBase<DFALL<unsigned int>,NiSourceTexture *,unsigned int>::`vftable'; /*0x4c8d53*/
  NiTMap_Clear(this); /*0x4c8d59*/
  FormHeapFree(*((_DWORD *)this + 2)); /*0x4c8d62*/
  if ( (a2 & 1) != 0 ) /*0x4c8d6f*/
    FormHeapFree((unsigned int)this); /*0x4c8d72*/
  return this; /*0x4c8d7c*/
}
