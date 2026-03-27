#552 *__thiscall HighProcess::`scalar deleting destructor'(#552 *this, char a2)
{
  HighProcess::~HighProcess(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
