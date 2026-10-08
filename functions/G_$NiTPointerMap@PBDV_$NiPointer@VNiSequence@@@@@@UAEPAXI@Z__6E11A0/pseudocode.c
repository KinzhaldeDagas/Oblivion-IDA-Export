unsigned int *__thiscall NiTPointerMap<char const *,NiPointer<NiSequence>>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<char const *,NiPointer<NiSequence>>::~NiTPointerMap<char const *,NiPointer<NiSequence>>(this); /*0x6e11a3*/
  if ( (a2 & 1) != 0 ) /*0x6e11ad*/
    FormHeapFree((unsigned int)this); /*0x6e11b0*/
  return this; /*0x6e11ba*/
}
