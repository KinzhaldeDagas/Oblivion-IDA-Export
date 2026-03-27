NiStream *__thiscall NiStream::`scalar deleting destructor'(NiStream *this, char a2)
{
  NiStream::~NiStream(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
