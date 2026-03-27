void __thiscall NiTMap<char const *,Setting *>::~NiTMap<char const *,Setting *>(unsigned int *this)
{
  *this = (unsigned int)&NiTMap<char const *,Setting *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<DFALL<Setting *>,char const *,Setting *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
