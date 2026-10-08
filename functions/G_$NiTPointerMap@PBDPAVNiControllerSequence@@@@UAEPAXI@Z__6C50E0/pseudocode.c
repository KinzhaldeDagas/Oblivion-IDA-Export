unsigned int *__thiscall NiTPointerMap<char const *,NiControllerSequence *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<char const *,NiControllerSequence *>::~NiTPointerMap<char const *,NiControllerSequence *>(this); /*0x6c50e3*/
  if ( (a2 & 1) != 0 ) /*0x6c50ed*/
    FormHeapFree((unsigned int)this); /*0x6c50f0*/
  return this; /*0x6c50fa*/
}
