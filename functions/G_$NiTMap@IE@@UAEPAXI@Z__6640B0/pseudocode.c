unsigned int *__thiscall NiTMap<unsigned int,unsigned char>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTMap<unsigned int,unsigned char>::~NiTMap<unsigned int,unsigned char>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
