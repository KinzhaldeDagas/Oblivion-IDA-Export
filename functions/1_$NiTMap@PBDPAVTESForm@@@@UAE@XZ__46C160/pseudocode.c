void __thiscall NiTMap<char const *,TESForm *>::~NiTMap<char const *,TESForm *>(unsigned int *this)
{
  *this = (unsigned int)&NiTMap<char const *,TESForm *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<DFALL<TESForm *>,char const *,TESForm *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
