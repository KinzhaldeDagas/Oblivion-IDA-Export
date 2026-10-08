double __thiscall sub_6A6AF0(float *this)
{
  int v2; // ecx
  TESObjectREFR *v3; // eax
  TESObjectREFR *v4; // edi
  TESObjectCELL *DwordAtOffset40; // esi
  Sky *sky; // esi
  TESWeather *firstWeather; // eax
  double v8; // st7
  double v9; // st4
  TESWeather *secondWeather; // eax
  double weatherPercent; // st4
  ExtraDataList *v12; // eax
  float v14; // [esp+28h] [ebp-1Ch]
  float v15; // [esp+2Ch] [ebp-18h]
  char v16; // [esp+2Ch] [ebp-18h]
  float v17; // [esp+30h] [ebp-14h]
  double WaterHeight; // [esp+30h] [ebp-14h]
  float v19; // [esp+38h] [ebp-Ch]
  float v20; // [esp+3Ch] [ebp-8h]
  float unk0D0; // [esp+40h] [ebp-4h]

  v2 = *((_DWORD *)this + 8); /*0x6a6af6*/
  if ( !v2 ) /*0x6a6afd*/
    return 0.0; /*0x6a6afd*/
  v3 = (TESObjectREFR *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6a6b08*/
  v4 = v3; /*0x6a6b0a*/
  if ( !v3 ) /*0x6a6b0e*/
    return 0.0; /*0x6a6b0e*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v3); /*0x6a6b1d*/
  if ( sub_4D8B90(v4) && (!DwordAtOffset40 || !TESObjectCELL_HasFlag80(DwordAtOffset40)) ) /*0x6a6b32*/
    return 0.0; /*0x6a6c79*/
  sky = MEMORY[0xB333A0]->sky; /*0x6a6b44*/
  unk0D0 = sky->unk0D0; /*0x6a6b4f*/
  v20 = sub_499140(sky); /*0x6a6b5a*/
  v19 = sub_499200(sky); /*0x6a6b63*/
  firstWeather = sky->firstWeather; /*0x6a6b67*/
  v8 = dbl_A3F398; /*0x6a6b6a*/
  if ( firstWeather ) /*0x6a6b76*/
    v9 = (double)*((unsigned __int8 *)firstWeather + 0x4D) * v8 * (1.0 - 0.0) + 0.0; /*0x6a6b8c*/
  else
    v9 = 0.0; /*0x6a6b90*/
  secondWeather = sky->secondWeather; /*0x6a6b92*/
  v14 = v9; /*0x6a6b95*/
  if ( secondWeather ) /*0x6a6b9b*/
  {
    v15 = v8 * (double)*((unsigned __int8 *)secondWeather + 0x4D) * (1.0 - 0.0) + 0.0; /*0x6a6bbf*/
    weatherPercent = sky->weatherPercent; /*0x6a6bcb*/
    v17 = weatherPercent * v14; /*0x6a6bd7*/
    v14 = (1.0 - weatherPercent) * v15 + v17; /*0x6a6bdf*/
  }
  v16 = 0; /*0x6a6bed*/
  if ( (*(_BYTE *)(Shared_GetDwordAtOffset40(v4) + 0x24) & 2) != 0 ) /*0x6a6bff*/
  {
    v12 = (ExtraDataList *)Shared_GetDwordAtOffset40(v4); /*0x6a6c03*/
    WaterHeight = TESObjectCELL_GetWaterHeight(v12); /*0x6a6c0f*/
    v16 = v4->vtbl->GetPos(v4)[2] <= WaterHeight; /*0x6a6c2d*/
  }
  return Calc_SunDamage__(*(this + 6), unk0D0, v20, v19, 1, v14, v16); /*0x6a6c72*/
}
