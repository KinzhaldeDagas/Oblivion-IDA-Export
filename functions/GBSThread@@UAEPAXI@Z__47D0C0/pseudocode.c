BSThread *__thiscall BSThread::`scalar deleting destructor'(BSThread *this, char a2)
{
  this->vtbl = &BSThread::`vftable'; /*0x47d0c3*/
  sub_47D060(this); /*0x47d0c9*/
  if ( (a2 & 1) != 0 ) /*0x47d0d3*/
    FormHeapFree((unsigned int)this); /*0x47d0d6*/
  return this; /*0x47d0e0*/
}
