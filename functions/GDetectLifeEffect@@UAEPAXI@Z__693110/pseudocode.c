ActiveEffect *__thiscall DetectLifeEffect::`scalar deleting destructor'(ActiveEffect *this, char a2)
{
  this->vtbl = (ActiveEffectVtbl *)&DetectLifeEffect::`vftable'; /*0x693113*/
  ActiveEffect::~ActiveEffect(this); /*0x693119*/
  if ( (a2 & 1) != 0 ) /*0x693123*/
    FormHeapFree((unsigned int)this); /*0x693126*/
  return this; /*0x693130*/
}
