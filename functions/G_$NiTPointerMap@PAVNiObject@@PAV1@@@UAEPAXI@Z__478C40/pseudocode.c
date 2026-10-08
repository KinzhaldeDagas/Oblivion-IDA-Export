unsigned int *__thiscall NiTPointerMap<NiObject *,NiObject *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<NiObject *,NiObject *>::~NiTPointerMap<NiObject *,NiObject *>(this); /*0x478c43*/
  if ( (a2 & 1) != 0 ) /*0x478c4d*/
    FormHeapFree((unsigned int)this); /*0x478c50*/
  return this; /*0x478c5a*/
}
