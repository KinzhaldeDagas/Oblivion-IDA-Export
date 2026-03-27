NiTMapBase<DFALL<unsigned int>,NiSourceTexture *,unsigned int> *__thiscall NiTMapBase<DFALL<unsigned int>,NiSourceTexture *,unsigned int>::NiTMapBase<DFALL<unsigned int>,NiSourceTexture *,unsigned int>(
        NiTMapBase<DFALL<unsigned int>,NiSourceTexture *,unsigned int> *this,
        char a2)
{
  *(_DWORD *)this = &NiTMapBase<DFALL<unsigned int>,NiSourceTexture *,unsigned int>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*((_DWORD *)this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
