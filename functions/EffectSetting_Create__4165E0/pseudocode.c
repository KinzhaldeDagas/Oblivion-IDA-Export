EffectSetting *EffectSetting_Create()
{
  EffectSetting *v0; // eax
  EffectSetting *result; // eax

  v0 = (EffectSetting *)FormHeapAlloc(0xA8u);
  if ( v0 )
    result = EffectSetting::EffectSetting(v0);
  else
    result = 0;
  result->effectFlags = 0;
  result->school = 6;
  return result;
}
