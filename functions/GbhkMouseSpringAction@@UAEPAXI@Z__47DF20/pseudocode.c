bhkMouseSpringAction *__thiscall bhkMouseSpringAction::`scalar deleting destructor'(
        bhkMouseSpringAction *this,
        char a2)
{
  bhkMouseSpringAction::~bhkMouseSpringAction(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
