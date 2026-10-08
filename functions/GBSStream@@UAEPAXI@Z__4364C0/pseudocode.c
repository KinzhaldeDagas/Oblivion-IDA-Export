BSStream *__thiscall BSStream::`scalar deleting destructor'(BSStream *this, char a2)
{
  BSStream::~BSStream(this); /*0x4364c3*/
  if ( (a2 & 1) != 0 ) /*0x4364cd*/
    FormHeapFree((unsigned int)this); /*0x4364d0*/
  return this; /*0x4364da*/
}
