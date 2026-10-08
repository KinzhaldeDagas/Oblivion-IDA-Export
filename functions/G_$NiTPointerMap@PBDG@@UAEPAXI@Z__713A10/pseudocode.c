unsigned int *__thiscall NiTPointerMap<char const *,unsigned short>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<char const *,unsigned short>::~NiTPointerMap<char const *,unsigned short>(this); /*0x713a13*/
  if ( (a2 & 1) != 0 ) /*0x713a1d*/
    FormHeapFree((unsigned int)this); /*0x713a20*/
  return this; /*0x713a2a*/
}
