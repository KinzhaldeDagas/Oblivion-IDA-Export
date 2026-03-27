unsigned int *__thiscall NiTPointerMap<unsigned int,bool>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTPointerMap<unsigned int,bool>::~NiTPointerMap<unsigned int,bool>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
