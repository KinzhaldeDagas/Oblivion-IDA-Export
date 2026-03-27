ActiveEffect *__thiscall AbsorbEffect::`scalar deleting destructor'(ActiveEffect *this, char a2)
{
  AbsorbEffect::~AbsorbEffect(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
