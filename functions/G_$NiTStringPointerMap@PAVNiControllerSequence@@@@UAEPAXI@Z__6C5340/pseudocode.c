_DWORD *__thiscall NiTStringPointerMap<NiControllerSequence *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<NiControllerSequence *>::~NiTStringPointerMap<NiControllerSequence *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
