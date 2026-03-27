NiTListBase<DFALL<TESObjectCELL *>,TESObjectCELL *> *__thiscall NiTListBase<DFALL<TESObjectCELL *>,TESObjectCELL *>::NiTListBase<DFALL<TESObjectCELL *>,TESObjectCELL *>(
        NiTListBase<DFALL<TESObjectCELL *>,TESObjectCELL *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<TESObjectCELL *>,TESObjectCELL *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
