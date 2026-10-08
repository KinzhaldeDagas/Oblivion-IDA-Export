unsigned int *__thiscall NiTPointerMap<int,TESObjectCELL *>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTPointerMap<int,TESObjectCELL *>::~NiTPointerMap<int,TESObjectCELL *>(this); /*0x4f29f3*/
  if ( (a2 & 1) != 0 ) /*0x4f29fd*/
    FormHeapFree((unsigned int)this); /*0x4f2a00*/
  return this; /*0x4f2a0a*/
}
