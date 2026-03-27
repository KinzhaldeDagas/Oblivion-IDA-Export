TESTopic *__thiscall TESTopic::`scalar deleting destructor'(TESTopic *this, char a2)
{
  TESTopic::~TESTopic(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
