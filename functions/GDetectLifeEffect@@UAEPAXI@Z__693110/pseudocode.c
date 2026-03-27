ActiveEffect *__thiscall DetectLifeEffect::`scalar deleting destructor'(ActiveEffect *this, char a2)
{
  this->vtbl = (ActiveEffectVtbl *)&DetectLifeEffect::`vftable';
  ActiveEffect::~ActiveEffect(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
