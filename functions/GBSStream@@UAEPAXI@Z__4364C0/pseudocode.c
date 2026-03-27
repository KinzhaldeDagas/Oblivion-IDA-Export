BSStream *__thiscall BSStream::`scalar deleting destructor'(BSStream *this, char a2)
{
  BSStream::~BSStream(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
