NiStream *__thiscall NiStream::`scalar deleting destructor'(NiStream *this, char a2)
{
  NiStream::~NiStream(this); /*0x714803*/
  if ( (a2 & 1) != 0 ) /*0x71480d*/
    FormHeapFree((unsigned int)this); /*0x714810*/
  return this; /*0x71481a*/
}
