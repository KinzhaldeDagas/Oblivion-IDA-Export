unsigned int *__thiscall NiTPointerMap<TESObjectREFR *,bool>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTPointerMap<TESObjectREFR *,bool>::~NiTPointerMap<TESObjectREFR *,bool>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
