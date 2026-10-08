int __usercall EffectSettingCollection_AddFull@<eax>(
        char a1@<bpl>,
        int a2,
        char *arg4,
        UInt32 a4,
        float a5,
        UInt32 a6,
        UInt32 a7,
        UInt32 a8,
        int a9,
        ...)
{
  EffectSetting *v9; // eax
  EffectSetting *v10; // esi
  unsigned __int16 v12; // [esp+0h] [ebp-A4h]
  int v13; // [esp+4h] [ebp-A0h]
  _DWORD v14[10]; // [esp+54h] [ebp-50h] BYREF
  OB_stString28_010201A0 v15; // [esp+7Ch] [ebp-28h] BYREF
  int v16; // [esp+A0h] [ebp-4h]
  va_list va; // [esp+C8h] [ebp+24h] BYREF

  va_start(va, a9);
  v9 = (EffectSetting *)FormHeapAlloc(0xA8u); /*0x417250*/
  v16 = 0; /*0x41725e*/
  if ( v9 ) /*0x417269*/
    v10 = EffectSetting::EffectSetting(v9); /*0x417272*/
  else
    v10 = 0; /*0x417276*/
  v16 = 0xFFFFFFFF; /*0x41728c*/
  v10->effectFlags = a7; /*0x417297*/
  if ( a2 != 0x46464553 && (a7 & 0x800000) == 0 && (a7 & 0x70) == 0 ) /*0x4172a8*/
  {
    sub_414750(&v15, "Registered EffectSetting does not allow any range!"); /*0x4172b6*/
    v16 = 1; /*0x4172c4*/
    sub_4146E0((std::exception *)v14, &v15); /*0x4172cf*/
    v14[0] = &EffectSettingCollection::exNoRangeFlags::`vftable'; /*0x4172de*/
    ThrowException__((DWORD)v14, &_TI4_AVexNoRangeFlags_EffectSettingCollection__); /*0x4172e6*/
  }
  v10->effectCode = a2; /*0x41738b*/
  EffectSetting_SetName((unsigned int *)v10, arg4); /*0x417391*/
  v10->baseCost = a5; /*0x4173a4*/
  v10->data = a6; /*0x4173b5*/
  v10->school = a4; /*0x4173b8*/
  v10->resistValue = a8; /*0x4173bb*/
  if ( (_WORD)a9 ) /*0x4173c8*/
    EffectSetting_SetCounterEffects(v10, a1, a2, a9, (int)va, v12, v13); /*0x4173d5*/
  return NiTMap_SetAt(&MEMORY[0xB33508], a2, (int)v10); /*0x4173e6*/
}
