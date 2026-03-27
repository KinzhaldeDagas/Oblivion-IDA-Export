NiTMapBase<DFALL<TESForm *>,char const *,TESForm *> *__thiscall NiTMapBase<DFALL<TESForm *>,char const *,TESForm *>::NiTMapBase<DFALL<TESForm *>,char const *,TESForm *>(
        NiTMapBase<DFALL<TESForm *>,char const *,TESForm *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTMapBase<DFALL<TESForm *>,char const *,TESForm *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*((_DWORD *)this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
