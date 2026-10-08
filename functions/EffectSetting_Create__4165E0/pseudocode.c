EffectSetting *EffectSetting_Create()
{
  EffectSetting *v0; // eax
  EffectSetting *result; // eax

  v0 = (EffectSetting *)FormHeapAlloc(0xA8u); /*0x416606*/
  if ( v0 ) /*0x41661c*/
    result = EffectSetting::EffectSetting(v0); /*0x416620*/
  else
    result = 0; /*0x416627*/
  result->effectFlags = 0; /*0x416629*/
  result->school = 6; /*0x416630*/
  return result; /*0x416637*/
}
