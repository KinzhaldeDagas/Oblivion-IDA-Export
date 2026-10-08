NiTListBase<DFALL<TESObjectCELL *>,TESObjectCELL *> *__thiscall NiTListBase<DFALL<TESObjectCELL *>,TESObjectCELL *>::NiTListBase<DFALL<TESObjectCELL *>,TESObjectCELL *>(
        NiTListBase<DFALL<TESObjectCELL *>,TESObjectCELL *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<TESObjectCELL *>,TESObjectCELL *>::`vftable'; /*0x4ca1d8*/
  if ( (a2 & 1) != 0 ) /*0x4ca1de*/
    FormHeapFree((unsigned int)this); /*0x4ca1e1*/
  return this; /*0x4ca1eb*/
}
