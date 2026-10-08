unsigned int *__thiscall NiTPointerMap<NiObject *,bool>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTPointerMap<NiObject *,bool>::~NiTPointerMap<NiObject *,bool>(this); /*0x478c63*/
  if ( (a2 & 1) != 0 ) /*0x478c6d*/
    FormHeapFree((unsigned int)this); /*0x478c70*/
  return this; /*0x478c7a*/
}
