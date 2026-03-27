_DWORD *__thiscall NiTStringPointerMap<NiAVObject *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<NiAVObject *>::~NiTStringPointerMap<NiAVObject *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
