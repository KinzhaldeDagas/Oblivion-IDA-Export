NiTListBase<DFALL<TESObjectREFR *>,TESObjectREFR *> *__thiscall NiTListBase<DFALL<TESObjectREFR *>,TESObjectREFR *>::NiTListBase<DFALL<TESObjectREFR *>,TESObjectREFR *>(
        NiTListBase<DFALL<TESObjectREFR *>,TESObjectREFR *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<TESObjectREFR *>,TESObjectREFR *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
