NiTMap_TESCELL *__thiscall EffectSettingCollection::`scalar deleting destructor'(NiTMap_TESCELL *this, char a2)
{
  EffectSettingCollection::~EffectSettingCollection(this); /*0x417093*/
  if ( (a2 & 1) != 0 ) /*0x41709d*/
    FormHeapFree((unsigned int)this); /*0x4170a0*/
  return this; /*0x4170aa*/
}
