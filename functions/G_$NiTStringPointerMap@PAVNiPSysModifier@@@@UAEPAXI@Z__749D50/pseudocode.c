_DWORD *__thiscall NiTStringPointerMap<NiPSysModifier *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<NiPSysModifier *>::~NiTStringPointerMap<NiPSysModifier *>(this); /*0x749d53*/
  if ( (a2 & 1) != 0 ) /*0x749d5d*/
    FormHeapFree((unsigned int)this); /*0x749d60*/
  return this; /*0x749d6a*/
}
