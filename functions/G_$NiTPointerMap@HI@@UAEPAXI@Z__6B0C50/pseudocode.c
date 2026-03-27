unsigned int *__thiscall NiTPointerMap<int,unsigned int>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTPointerMap<int,unsigned int>::~NiTPointerMap<int,unsigned int>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
