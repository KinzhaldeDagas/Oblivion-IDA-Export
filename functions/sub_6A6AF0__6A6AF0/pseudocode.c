double __thiscall sub_6A6AF0(float *this)
{
  int v2; // ecx
  TESObjectREFR *v3; // eax
  TESObjectREFR *v4; // edi
  TESObjectCELL *ParentCell; // esi
  Sky *sky; // esi
  TESWeather *firstWeather; // eax
  double v8; // st7
  double v9; // st4
  TESWeather *secondWeather; // eax
  double weatherPercent; // st4
  TESObjectCELL *v12; // eax
  float v14; // [esp+28h] [ebp-1Ch]
  float v15; // [esp+2Ch] [ebp-18h]
  char v16; // [esp+2Ch] [ebp-18h]
  float v17; // [esp+30h] [ebp-14h]
  double WaterHeight; // [esp+30h] [ebp-14h]
  float v19; // [esp+38h] [ebp-Ch]
  float v20; // [esp+3Ch] [ebp-8h]
  float unk0D0; // [esp+40h] [ebp-4h]

  v2 = *((_DWORD *)this + 8);
  if ( !v2 )
    return 0.0;
  v3 = (TESObjectREFR *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v4 = v3;
  if ( !v3 )
    return 0.0;
  ParentCell = TESObjectREFR_GetParentCell(v3);
  if ( sub_4D8B90(v4) && (!ParentCell || !sub_4C9820(ParentCell)) )
    return 0.0;
  sky = TES->sky;
  unk0D0 = sky->unk0D0;
  v20 = sub_499140(sky);
  v19 = sub_499200(sky);
  firstWeather = sky->firstWeather;
  v8 = dbl_A3F398;
  if ( firstWeather )
    v9 = (double)*((unsigned __int8 *)firstWeather + 0x4D) * v8 * (1.0 - 0.0) + 0.0;
  else
    v9 = 0.0;
  secondWeather = sky->secondWeather;
  v14 = v9;
  if ( secondWeather )
  {
    v15 = v8 * (double)*((unsigned __int8 *)secondWeather + 0x4D) * (1.0 - 0.0) + 0.0;
    weatherPercent = sky->weatherPercent;
    v17 = weatherPercent * v14;
    v14 = (1.0 - weatherPercent) * v15 + v17;
  }
  v16 = 0;
  if ( (TESObjectREFR_GetParentCell(v4)->members.flags0 & 2) != 0 )
  {
    v12 = TESObjectREFR_GetParentCell(v4);
    WaterHeight = TESObjectCELL_GetWaterHeight((ExtraDataList *)v12);
    v16 = v4->vtbl->GetPos(v4)[2] <= WaterHeight;
  }
  return Calc_SunDamage__(*(this + 6), unk0D0, v20, v19, 1, v14, v16);
}
