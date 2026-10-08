unsigned int *__thiscall NiTPointerMap<NiObject const *,unsigned int>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<NiObject const *,unsigned int>::~NiTPointerMap<NiObject const *,unsigned int>(this); /*0x7146b3*/
  if ( (a2 & 1) != 0 ) /*0x7146bd*/
    FormHeapFree((unsigned int)this); /*0x7146c0*/
  return this; /*0x7146ca*/
}
