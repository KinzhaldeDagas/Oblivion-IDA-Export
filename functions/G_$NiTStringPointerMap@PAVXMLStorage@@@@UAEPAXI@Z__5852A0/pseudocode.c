_DWORD *__thiscall NiTStringPointerMap<XMLStorage *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<XMLStorage *>::~NiTStringPointerMap<XMLStorage *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
