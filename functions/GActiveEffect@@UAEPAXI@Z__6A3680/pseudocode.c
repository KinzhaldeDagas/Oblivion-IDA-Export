ActiveEffect *__thiscall ActiveEffect::`scalar deleting destructor'(ActiveEffect *this, char a2)
{
  ActiveEffect::~ActiveEffect(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
