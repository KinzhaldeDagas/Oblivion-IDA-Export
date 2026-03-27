char __usercall sub_5E8B80@<al>(TESObjectREFR *this@<ecx>, int a2@<ebx>)
{
  ActorAnimData *v3; // eax
  char result; // al
  char v5; // bl
  double v6; // st7
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v8; // edi
  int *SafeFloatPointer; // eax
  double v10; // st6
  int v11; // ecx
  int v12; // esi
  char v14; // [esp+15h] [ebp-1Dh]
  float v15; // [esp+16h] [ebp-1Ch]
  double v16; // [esp+16h] [ebp-1Ch]
  float v17; // [esp+1Eh] [ebp-14h]
  float v18; // [esp+1Eh] [ebp-14h]
  double v19; // [esp+1Eh] [ebp-14h]
  float v20; // [esp+1Eh] [ebp-14h]

  v3 = this->vtbl->GetAnimData(this);
  result = sub_470D00(v3, 0x21);
  if ( !result )
    return result;
  v5 = 0;
  v14 = 0;
  if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, int, int))this->vtbl[1].GetSleepState)(this, 1, a2) )
    return (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x16) + 0xF0))(*((_DWORD *)this + 0x16), 1) != 0;
  TimeGlobals_GetGameHour(&TimeGlobals);
  if ( ((int (__thiscall *)(TESObjectREFR *, int))this->vtbl[1].Unk_37)(this, 0x29) <= 0 )
    v6 = 0.0;
  else
    v6 = fDetectionNightEyeBonus;
  v15 = v6;
  ParentCell = TESObjectREFR_GetParentCell(this);
  v8 = ParentCell;
  if ( ParentCell && TESObjectCELL_IsInterior(ParentCell) )
  {
    if ( TESObjectCELL_GetMusicType(v8, 0) != (BSExtraData *)2 )
      goto LABEL_21;
    v18 = ((double (__thiscall *)(_DWORD, TESObjectREFR *, int))*(_DWORD *)(**((_DWORD **)this + 0x16) + 0x3AC))(
            *((_DWORD *)this + 0x16),
            this,
            1);
    if ( v18 > fCostant_100 )
      v18 = flt_A2FE7C;
    v19 = v18 - v15;
    if ( *(float *)GameSetting_GetSafeFloatPointer((int *)&fTorchLightLevelInterior) <= v19 )
    {
      if ( (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x16) + 0xF0))(*((_DWORD *)this + 0x16), 1) )
      {
        SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&fTorchLightLevelInterior);
        v16 = *(float *)SafeFloatPointer + *(float *)SafeFloatPointer;
        v20 = v19;
        if ( *(float *)GameSetting_GetSafeFloatPointer((int *)&fTorchLightLevelInterior) + v16 > v20 )
        {
          v5 = 1;
          v14 = 1;
        }
      }
      goto LABEL_21;
    }
  }
  else
  {
    if ( flt_A417B4 >= (double)v17 )
      v10 = fTorchLightLevelMorning;
    else
      v10 = fTorchLightLevelNight;
    if ( v10 <= *(float *)&TES->sky->unk03C[0xA]
              + *(float *)&TES->sky->unk03C[9]
              + *(float *)&TES->sky->unk03C[0xB]
              - v15 )
      goto LABEL_21;
  }
  v5 = 1;
LABEL_21:
  v11 = *((_DWORD *)this + 0x16);
  if ( v11 )
  {
    if ( (unsigned int)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11) <= 1 )
    {
      v12 = *((_DWORD *)this + 0x16);
      if ( v12 )
      {
        if ( v14 )
        {
          *(float *)(v12 + 0xBC) = fTorchEvaluationTimer * dbl_A3F3F0;
          return v5;
        }
        *(float *)(v12 + 0xBC) = fTorchEvaluationTimer;
      }
    }
  }
  return v5;
}
