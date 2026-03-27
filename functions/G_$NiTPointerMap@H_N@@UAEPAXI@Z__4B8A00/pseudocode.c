unsigned int *__thiscall NiTPointerMap<int,bool>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTPointerMap<int,bool>::~NiTPointerMap<int,bool>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
