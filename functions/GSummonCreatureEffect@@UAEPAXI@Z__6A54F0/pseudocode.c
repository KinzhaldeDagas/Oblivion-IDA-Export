ActiveEffect *__thiscall SummonCreatureEffect::`scalar deleting destructor'(ActiveEffect *this, char a2)
{
  SummonCreatureEffect::~SummonCreatureEffect(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
