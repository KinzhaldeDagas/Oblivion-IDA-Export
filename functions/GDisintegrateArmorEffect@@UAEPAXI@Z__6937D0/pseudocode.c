ActiveEffect *__fastcall DisintegrateArmorEffect::`scalar deleting destructor'(ActiveEffect *this, int a2, char a3)
{
  DisintegrateArmorEffect::~DisintegrateArmorEffect(this, a2); /*0x6937d3*/
  if ( (a3 & 1) != 0 ) /*0x6937dd*/
    FormHeapFree((unsigned int)this); /*0x6937e0*/
  return this; /*0x6937ea*/
}
