EffectSetting *__thiscall EffectSetting::`scalar deleting destructor'(EffectSetting *this, char a2)
{
  EffectSetting::~EffectSetting((int)this); /*0x416563*/
  if ( (a2 & 1) != 0 ) /*0x41656d*/
    FormHeapFree((unsigned int)this); /*0x416570*/
  return this; /*0x41657a*/
}
