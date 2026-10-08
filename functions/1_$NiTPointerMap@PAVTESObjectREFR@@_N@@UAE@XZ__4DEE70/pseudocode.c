void __thiscall NiTPointerMap<TESObjectREFR *,bool>::~NiTPointerMap<TESObjectREFR *,bool>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<TESObjectREFR *,bool>::`vftable'; /*0x4dee98*/
  NiTMap_Clear(this); /*0x4deea6*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,TESObjectREFR *,bool>::`vftable'; /*0x4deeb5*/
  NiTMap_Clear(this); /*0x4deebb*/
  FormHeapFree(*(this + 2)); /*0x4deec4*/
}
