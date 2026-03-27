NiTMap_TESCELL *__thiscall EffectSettingCollection::`scalar deleting destructor'(NiTMap_TESCELL *this, char a2)
{
  EffectSettingCollection::~EffectSettingCollection(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
