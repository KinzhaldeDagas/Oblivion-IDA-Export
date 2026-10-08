unsigned int *__thiscall NiTPointerMap<char const *,NiAVObject *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<char const *,NiAVObject *>::~NiTPointerMap<char const *,NiAVObject *>(this); /*0x6c50a3*/
  if ( (a2 & 1) != 0 ) /*0x6c50ad*/
    FormHeapFree((unsigned int)this); /*0x6c50b0*/
  return this; /*0x6c50ba*/
}
