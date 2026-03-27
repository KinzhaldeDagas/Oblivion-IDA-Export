int EffectSettingCollection_AddFull(
        int a2,
        char *arg4,
        UInt32 a3,
        float a4,
        UInt32 a5,
        UInt32 a6,
        UInt32 a7,
        int a8,
        ...)
{
  EffectSetting *v8; // eax
  EffectSetting *v9; // esi
  unsigned __int16 v11; // [esp+0h] [ebp-A4h]
  int v12; // [esp+4h] [ebp-A0h]
  _DWORD v13[10]; // [esp+54h] [ebp-50h] BYREF
  _DWORD v14[7]; // [esp+7Ch] [ebp-28h] BYREF
  int v15; // [esp+A0h] [ebp-4h]
  va_list va; // [esp+C8h] [ebp+24h] BYREF

  va_start(va, a8);
  v8 = (EffectSetting *)FormHeapAlloc(0xA8u);
  v15 = 0;
  if ( v8 )
    v9 = EffectSetting::EffectSetting(v8);
  else
    v9 = 0;
  v15 = 0xFFFFFFFF;
  v9->effectFlags = a6;
  if ( a2 != 0x46464553 && (a6 & 0x800000) == 0 && (a6 & 0x70) == 0 )
  {
    sub_414750((int)v14, "Registered EffectSetting does not allow any range!");
    v15 = 1;
    sub_4146E0((std::exception *)v13, v14);
    v13[0] = &EffectSettingCollection::exNoRangeFlags::`vftable';
    ThrowException__((int)v13, &_TI4_AVexNoRangeFlags_EffectSettingCollection__);
  }
  v9->effectCode = a2;
  EffectSetting_SetName((unsigned int *)v9, arg4);
  v9->baseCost = a4;
  v9->data = a5;
  v9->school = a3;
  v9->resistValue = a7;
  if ( (_WORD)a8 )
    EffectSetting_SetCounterEffects(v9, a8, (int)va, v11, v12);
  return NiTMap_SetAt(&EffectSettingCollection, a2, (int)v9);
}
