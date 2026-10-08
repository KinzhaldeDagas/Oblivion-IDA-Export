NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,XMLStorage *> *__thiscall NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,XMLStorage *>::NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,XMLStorage *>(
        NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,XMLStorage *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,XMLStorage *>::`vftable'; /*0x584473*/
  NiTMap_Clear(this); /*0x584479*/
  FormHeapFree(*((_DWORD *)this + 2)); /*0x584482*/
  if ( (a2 & 1) != 0 ) /*0x58448f*/
    FormHeapFree((unsigned int)this); /*0x584492*/
  return this; /*0x58449c*/
}
