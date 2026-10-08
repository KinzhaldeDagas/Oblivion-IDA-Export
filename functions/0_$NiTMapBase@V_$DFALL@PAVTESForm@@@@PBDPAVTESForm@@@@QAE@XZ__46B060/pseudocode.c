NiTMapBase<DFALL<TESForm *>,char const *,TESForm *> *__thiscall NiTMapBase<DFALL<TESForm *>,char const *,TESForm *>::NiTMapBase<DFALL<TESForm *>,char const *,TESForm *>(
        NiTMapBase<DFALL<TESForm *>,char const *,TESForm *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTMapBase<DFALL<TESForm *>,char const *,TESForm *>::`vftable'; /*0x46b063*/
  NiTMap_Clear(this); /*0x46b069*/
  FormHeapFree(*((_DWORD *)this + 2)); /*0x46b072*/
  if ( (a2 & 1) != 0 ) /*0x46b07f*/
    FormHeapFree((unsigned int)this); /*0x46b082*/
  return this; /*0x46b08c*/
}
