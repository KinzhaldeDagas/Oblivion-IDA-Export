_DWORD *__thiscall NiTStringPointerMap<unsigned short>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<unsigned short>::~NiTStringPointerMap<unsigned short>(this); /*0x7146f3*/
  if ( (a2 & 1) != 0 ) /*0x7146fd*/
    FormHeapFree((unsigned int)this); /*0x714700*/
  return this; /*0x71470a*/
}
