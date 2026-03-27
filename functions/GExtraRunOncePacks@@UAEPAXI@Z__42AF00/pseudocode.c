ExtraRunOncePacks *__thiscall ExtraRunOncePacks::`scalar deleting destructor'(ExtraRunOncePacks *this, char a2)
{
  ExtraRunOncePacks::~ExtraRunOncePacks(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
