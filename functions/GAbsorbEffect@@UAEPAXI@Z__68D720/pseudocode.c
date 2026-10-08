ActiveEffect *__thiscall AbsorbEffect::`scalar deleting destructor'(ActiveEffect *this, char a2)
{
  AbsorbEffect::~AbsorbEffect(this); /*0x68d723*/
  if ( (a2 & 1) != 0 ) /*0x68d72d*/
    FormHeapFree((unsigned int)this); /*0x68d730*/
  return this; /*0x68d73a*/
}
