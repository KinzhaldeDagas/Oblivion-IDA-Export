_DWORD *__thiscall NiTStringPointerMap<NiControllerSequence *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<NiControllerSequence *>::~NiTStringPointerMap<NiControllerSequence *>(this); /*0x6c5343*/
  if ( (a2 & 1) != 0 ) /*0x6c534d*/
    FormHeapFree((unsigned int)this); /*0x6c5350*/
  return this; /*0x6c535a*/
}
