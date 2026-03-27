double __userpurge sub_5F7A80@<st0>(PlayerCharacter *this@<ecx>, double result@<st0>, float *a3, char a4)
{
  double v7; // st6
  double v8; // st7
  double v9; // st6
  double v10; // rt2
  double v11; // st6
  double v12; // st6
  double v13; // st6
  PlayerCharacter *v14; // ecx
  bool IsPlayerInCombat; // al
  char v16; // [esp+0h] [ebp-18h]
  float v17; // [esp+8h] [ebp-10h]
  float v18; // [esp+8h] [ebp-10h]
  float v19[3]; // [esp+Ch] [ebp-Ch] BYREF
  float v20; // [esp+1Ch] [ebp+4h]
  float v21; // [esp+1Ch] [ebp+4h]
  int v22; // [esp+1Ch] [ebp+4h]
  int v23; // [esp+1Ch] [ebp+4h]

  if ( this != (PlayerCharacter *)a3 && ((_DWORD)a3[2] & 0x800) == 0 )
  {
    if ( (*(int (__thiscall **)(float *))(*(_DWORD *)a3 + 0x154))(a3) )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a3 + 0xE8))(a3)
        && (!(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a3 + 0x190))(a3)
         || !sub_5E1030((Actor *)this)
         || (float *)this->vtbl->super.GetMountedHorse((Actor *)this) != a3) )
      {
        v19[0] = a3[0xB] - this->super.super.super.super.pos[0];
        v19[1] = a3[0xC] - this->super.super.super.super.pos[1];
        v19[2] = a3[0xD] - this->super.super.super.super.pos[2];
        sub_43F350(v19);
        v17 = result;
        v7 = a3 == (float *)((int (__thiscall *)(LowProcess *))this->super.super.super.process->GetActionTarget)(this->super.super.super.process)
           ? *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B36AC0) * dbl_A3FA98
           : *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B36AC0) * dbl_A31C70;
        v20 = v7;
        if ( v20 >= (double)v17
          && (v17 >= fCostant_100
           || a3 == (float *)TESDataHandler_g_PlayerRef
           || a3 == (float *)((int (__thiscall *)(LowProcess *))this->super.super.super.process->Unk_137)(this->super.super.super.process)) )
        {
          sub_683CB0(v19);
          v21 = result;
          *(float *)&v22 = v21 - this->super.super.super.super.rot.z;
          v8 = *(float *)&v22;
          v9 = dbl_A3D5B0;
          if ( *(float *)&v22 > dbl_A3D5B8 )
          {
            *(float *)&v22 = v8 - v9;
            v8 = *(float *)&v22;
          }
          v10 = v9;
          v11 = v8;
          result = v10;
          if ( v11 < dbl_A491E0 )
          {
            result = result + v11;
            *(float *)&v22 = result;
          }
          v12 = a3 == (float *)((int (__thiscall *)(LowProcess *))this->super.super.super.process->GetActionTarget)(this->super.super.super.process)
              ? flt_A6EA80
              : flt_A3F3E0;
          v18 = v12;
          *(float *)&v23 = fabs(*(float *)&v22);
          v13 = *(float *)&v23;
          if ( v18 >= (double)*(float *)&v23 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a3 + 0x190))(a3) )
            {
              v14 = TESDataHandler_g_PlayerRef;
              if ( this == TESDataHandler_g_PlayerRef || a3 == (float *)v14 )
                goto LABEL_30;
              if ( this->vtbl->super.super.super.GetSleepState((TESObjectREFR *)this) == kSitSleep_None
                || !(*(int (__thiscall **)(float *))(*(_DWORD *)a3 + 0x18C))(a3) )
              {
                v14 = TESDataHandler_g_PlayerRef;
LABEL_30:
                if ( a4 )
                {
                  a4 = 1;
                  if ( a3 == (float *)v14 )
                    IsPlayerInCombat = PlayerCharacter_IsPlayerInCombat(v14, 0);
                  else
                    result = ((double (__usercall *)@<st0>(float *@<ecx>, int, double@<st0>))*(_DWORD *)(*(_DWORD *)a3 + 0x334))(
                               a3,
                               1,
                               result);
                  LOBYTE(v23) = IsPlayerInCombat;
                  Actor_GetDetectionLevel(
                    (TESObjectREFR *)this,
                    (int)this,
                    v18,
                    v13,
                    result,
                    0,
                    (TESObjectREFR *)a3,
                    &a4,
                    v23,
                    0,
                    0,
                    v16);
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
