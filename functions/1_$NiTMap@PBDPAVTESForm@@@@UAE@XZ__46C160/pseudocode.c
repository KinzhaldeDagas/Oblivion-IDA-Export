void __thiscall NiTMap<char const *,TESForm *>::~NiTMap<char const *,TESForm *>(unsigned int *this)
{
  *this = (unsigned int)&NiTMap<char const *,TESForm *>::`vftable'; /*0x46c188*/
  NiTMap_Clear(this); /*0x46c196*/
  *this = (unsigned int)&NiTMapBase<DFALL<TESForm *>,char const *,TESForm *>::`vftable'; /*0x46c1a5*/
  NiTMap_Clear(this); /*0x46c1ab*/
  FormHeapFree(*(this + 2)); /*0x46c1b4*/
}
