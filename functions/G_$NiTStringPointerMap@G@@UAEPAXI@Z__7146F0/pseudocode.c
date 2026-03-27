_DWORD *__thiscall NiTStringPointerMap<unsigned short>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<unsigned short>::~NiTStringPointerMap<unsigned short>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
