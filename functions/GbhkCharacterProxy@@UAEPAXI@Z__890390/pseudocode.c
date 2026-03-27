bhkCharacterProxy *__thiscall bhkCharacterProxy::`scalar deleting destructor'(bhkCharacterProxy *this, char a2)
{
  bhkCharacterProxy::~bhkCharacterProxy(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
