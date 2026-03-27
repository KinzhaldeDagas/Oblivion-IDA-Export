bhkUnaryAction *__thiscall bhkUnaryAction::`scalar deleting destructor'(bhkUnaryAction *this, char a2)
{
  bhkUnaryAction::~bhkUnaryAction(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
