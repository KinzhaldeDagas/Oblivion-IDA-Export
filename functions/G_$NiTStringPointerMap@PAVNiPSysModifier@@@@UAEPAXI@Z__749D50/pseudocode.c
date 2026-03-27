_DWORD *__thiscall NiTStringPointerMap<NiPSysModifier *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<NiPSysModifier *>::~NiTStringPointerMap<NiPSysModifier *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
