_DWORD *__thiscall NiTStringPointerMap<XMLStorage *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<XMLStorage *>::~NiTStringPointerMap<XMLStorage *>(this); /*0x5852a3*/
  if ( (a2 & 1) != 0 ) /*0x5852ad*/
    FormHeapFree((unsigned int)this); /*0x5852b0*/
  return this; /*0x5852ba*/
}
