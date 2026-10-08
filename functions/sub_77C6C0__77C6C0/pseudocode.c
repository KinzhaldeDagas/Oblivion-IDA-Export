unsigned int *__thiscall sub_77C6C0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<DFALL<NiD3DGlobalConstantEntry *>,char const *,NiD3DGlobalConstantEntry *>::`vftable'; /*0x77c6c3*/
  NiTMap_Clear(this); /*0x77c6c9*/
  FormHeapFree(*(this + 2)); /*0x77c6d2*/
  if ( (a2 & 1) != 0 ) /*0x77c6df*/
    FormHeapFree((unsigned int)this); /*0x77c6e2*/
  return this; /*0x77c6ec*/
}
