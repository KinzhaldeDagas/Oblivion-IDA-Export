bhkAction *__thiscall bhkAction::`scalar deleting destructor'(bhkAction *this, char a2)
{
  bhkAction::~bhkAction(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
