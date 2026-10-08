NiTListBase<DFALL<TESObjectREFR *>,TESObjectREFR *> *__thiscall NiTListBase<DFALL<TESObjectREFR *>,TESObjectREFR *>::NiTListBase<DFALL<TESObjectREFR *>,TESObjectREFR *>(
        NiTListBase<DFALL<TESObjectREFR *>,TESObjectREFR *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<TESObjectREFR *>,TESObjectREFR *>::`vftable'; /*0x4ca1f8*/
  if ( (a2 & 1) != 0 ) /*0x4ca1fe*/
    FormHeapFree((unsigned int)this); /*0x4ca201*/
  return this; /*0x4ca20b*/
}
