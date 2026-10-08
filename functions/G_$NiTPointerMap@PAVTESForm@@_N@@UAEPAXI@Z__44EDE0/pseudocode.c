unsigned int *__thiscall NiTPointerMap<TESForm *,bool>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTPointerMap<TESForm *,bool>::~NiTPointerMap<TESForm *,bool>(this); /*0x44ede3*/
  if ( (a2 & 1) != 0 ) /*0x44eded*/
    FormHeapFree((unsigned int)this); /*0x44edf0*/
  return this; /*0x44edfa*/
}
