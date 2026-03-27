unsigned int *__thiscall NiTPointerMap<NiObject *,bool>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTPointerMap<NiObject *,bool>::~NiTPointerMap<NiObject *,bool>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
