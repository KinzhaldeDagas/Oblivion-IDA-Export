ActiveEffect *__thiscall LightEffect::`scalar deleting destructor'(ActiveEffect *this, char a2)
{
  LightEffect::~LightEffect((LightEffect_DecodedLayout *)this); /*0x694ad3*/
  if ( (a2 & 1) != 0 ) /*0x694add*/
    FormHeapFree((unsigned int)this); /*0x694ae0*/
  return this; /*0x694aea*/
}
