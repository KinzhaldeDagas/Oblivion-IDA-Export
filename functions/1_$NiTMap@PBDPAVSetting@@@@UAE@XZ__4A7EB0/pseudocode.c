void __thiscall NiTMap<char const *,Setting *>::~NiTMap<char const *,Setting *>(unsigned int *this)
{
  *this = (unsigned int)&NiTMap<char const *,Setting *>::`vftable'; /*0x4a7ed8*/
  NiTMap_Clear(this); /*0x4a7ee6*/
  *this = (unsigned int)&NiTMapBase<DFALL<Setting *>,char const *,Setting *>::`vftable'; /*0x4a7ef5*/
  NiTMap_Clear(this); /*0x4a7efb*/
  FormHeapFree(*(this + 2)); /*0x4a7f04*/
}
