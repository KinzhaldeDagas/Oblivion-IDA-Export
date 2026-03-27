unsigned int *__thiscall NiTPointerMap<int,TESGameSound *>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTPointerMap<int,TESGameSound *>::~NiTPointerMap<int,TESGameSound *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
