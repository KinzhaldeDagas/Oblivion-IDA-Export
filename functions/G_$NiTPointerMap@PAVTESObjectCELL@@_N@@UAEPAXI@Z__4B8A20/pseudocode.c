unsigned int *__thiscall NiTPointerMap<TESObjectCELL *,bool>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTPointerMap<TESObjectCELL *,bool>::~NiTPointerMap<TESObjectCELL *,bool>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
