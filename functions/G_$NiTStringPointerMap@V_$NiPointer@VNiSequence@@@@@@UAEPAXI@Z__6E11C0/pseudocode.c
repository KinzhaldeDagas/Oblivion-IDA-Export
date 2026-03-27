_DWORD *__thiscall NiTStringPointerMap<NiPointer<NiSequence>>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<NiPointer<NiSequence>>::~NiTStringPointerMap<NiPointer<NiSequence>>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
