unsigned int *__thiscall NiTPointerMap<int,TESObjectCELL *>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTPointerMap<int,TESObjectCELL *>::~NiTPointerMap<int,TESObjectCELL *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
