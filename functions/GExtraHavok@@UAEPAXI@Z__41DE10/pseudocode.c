ExtraHavok *__thiscall ExtraHavok::`scalar deleting destructor'(ExtraHavok *this, char a2)
{
  ExtraHavok::~ExtraHavok(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
