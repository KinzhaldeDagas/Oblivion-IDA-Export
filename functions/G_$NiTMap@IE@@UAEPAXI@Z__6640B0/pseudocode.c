unsigned int *__thiscall NiTMap<unsigned int,unsigned char>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTMap<unsigned int,unsigned char>::~NiTMap<unsigned int,unsigned char>(this); /*0x6640b3*/
  if ( (a2 & 1) != 0 ) /*0x6640bd*/
    FormHeapFree((unsigned int)this); /*0x6640c0*/
  return this; /*0x6640ca*/
}
