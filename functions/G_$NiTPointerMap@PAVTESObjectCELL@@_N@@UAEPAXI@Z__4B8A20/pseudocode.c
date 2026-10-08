unsigned int *__thiscall NiTPointerMap<TESObjectCELL *,bool>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTPointerMap<TESObjectCELL *,bool>::~NiTPointerMap<TESObjectCELL *,bool>(this); /*0x4b8a23*/
  if ( (a2 & 1) != 0 ) /*0x4b8a2d*/
    FormHeapFree((unsigned int)this); /*0x4b8a30*/
  return this; /*0x4b8a3a*/
}
