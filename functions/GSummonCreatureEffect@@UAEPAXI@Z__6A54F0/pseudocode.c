ActiveEffect *__thiscall SummonCreatureEffect::`scalar deleting destructor'(ActiveEffect *this, char a2)
{
  SummonCreatureEffect::~SummonCreatureEffect(this); /*0x6a54f3*/
  if ( (a2 & 1) != 0 ) /*0x6a54fd*/
    FormHeapFree((unsigned int)this); /*0x6a5500*/
  return this; /*0x6a550a*/
}
