BoundItemEffect *__thiscall BoundItemEffect::`scalar deleting destructor'(BoundItemEffect *this, char a2)
{
  BoundItemEffect::~BoundItemEffect(this); /*0x6918b3*/
  if ( (a2 & 1) != 0 ) /*0x6918bd*/
    FormHeapFree((unsigned int)this); /*0x6918c0*/
  return this; /*0x6918ca*/
}
