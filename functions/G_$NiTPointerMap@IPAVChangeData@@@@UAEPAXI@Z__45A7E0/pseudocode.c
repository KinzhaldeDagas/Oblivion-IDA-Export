unsigned int *__thiscall NiTPointerMap<unsigned int,ChangeData *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,ChangeData *>::~NiTPointerMap<unsigned int,ChangeData *>(this); /*0x45a7e3*/
  if ( (a2 & 1) != 0 ) /*0x45a7ed*/
    FormHeapFree((unsigned int)this); /*0x45a7f0*/
  return this; /*0x45a7fa*/
}
