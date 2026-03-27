_DWORD *__thiscall NiTStringMap<NiD3DGlobalConstantEntry *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringMap<NiD3DGlobalConstantEntry *>::~NiTStringMap<NiD3DGlobalConstantEntry *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
