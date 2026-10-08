NiTMap<char const *,NiD3DGlobalConstantEntry *> *__thiscall NiTMap<char const *,NiD3DGlobalConstantEntry *>::NiTMap<char const *,NiD3DGlobalConstantEntry *>(
        NiTMap<char const *,NiD3DGlobalConstantEntry *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTMap<char const *,NiD3DGlobalConstantEntry *>::`vftable'; /*0x77cdc3*/
  NiTMap_Clear(this); /*0x77cdc9*/
  *(_DWORD *)this = &NiTMapBase<DFALL<NiD3DGlobalConstantEntry *>,char const *,NiD3DGlobalConstantEntry *>::`vftable'; /*0x77cdd0*/
  NiTMap_Clear(this); /*0x77cdd6*/
  FormHeapFree(*((_DWORD *)this + 2)); /*0x77cddf*/
  if ( (a2 & 1) != 0 ) /*0x77cdec*/
    FormHeapFree((unsigned int)this); /*0x77cdef*/
  return this; /*0x77cdf9*/
}
