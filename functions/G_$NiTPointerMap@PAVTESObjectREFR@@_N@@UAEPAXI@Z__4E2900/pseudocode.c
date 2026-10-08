unsigned int *__thiscall NiTPointerMap<TESObjectREFR *,bool>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTPointerMap<TESObjectREFR *,bool>::~NiTPointerMap<TESObjectREFR *,bool>(this); /*0x4e2903*/
  if ( (a2 & 1) != 0 ) /*0x4e290d*/
    FormHeapFree((unsigned int)this); /*0x4e2910*/
  return this; /*0x4e291a*/
}
