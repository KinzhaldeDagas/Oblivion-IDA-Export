ActiveEffect *__fastcall DisintegrateArmorEffect::`scalar deleting destructor'(ActiveEffect *this, int a2, char a3)
{
  DisintegrateArmorEffect::~DisintegrateArmorEffect(this, a2);
  if ( (a3 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
