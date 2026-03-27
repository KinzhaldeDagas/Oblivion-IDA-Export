unsigned int *__thiscall NiTPointerMap<TESForm *,bool>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTPointerMap<TESForm *,bool>::~NiTPointerMap<TESForm *,bool>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
