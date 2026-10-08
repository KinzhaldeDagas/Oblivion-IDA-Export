void __thiscall NiTPointerMap<NiObject *,NiObject *>::~NiTPointerMap<NiObject *,NiObject *>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<NiObject *,NiObject *>::`vftable'; /*0x478678*/
  NiTMap_Clear(this); /*0x478686*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,NiObject *,NiObject *>::`vftable'; /*0x478695*/
  NiTMap_Clear(this); /*0x47869b*/
  FormHeapFree(*(this + 2)); /*0x4786a4*/
}
