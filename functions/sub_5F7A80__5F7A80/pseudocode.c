double __userpurge sub_5F7A80@<st0>(PlayerCharacter *this@<ecx>, double result@<st0>, float *a3, char a4)
{
  double v6; // st6
  double v7; // st7
  double v8; // st6
  double v9; // rt2
  double v10; // st6
  double v11; // st6
  double v12; // st6
  float *v13; // ecx
  bool IsPlayerInCombat; // al
  char v15; // [esp+0h] [ebp-18h]
  float v16; // [esp+8h] [ebp-10h]
  float v17; // [esp+8h] [ebp-10h]
  float v18[3]; // [esp+Ch] [ebp-Ch] BYREF
  float v19; // [esp+1Ch] [ebp+4h]
  float v20; // [esp+1Ch] [ebp+4h]
  int v21; // [esp+1Ch] [ebp+4h]
  int v22; // [esp+1Ch] [ebp+4h]

  if ( this != (PlayerCharacter *)a3 && ((_DWORD)a3[2] & 0x800) == 0 )
  {
    if ( (*(int (__thiscall **)(float *))(*(_DWORD *)a3 + 0x154))(a3) )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a3 + 0xE8))(a3)
        && (!(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a3 + 0x190))(a3)
         || !sub_5E1030((Actor *)this)
         || (float *)this->vtbl->super.GetMountedHorse(this) != a3) )
      {
        v18[0] = a3[0xB] - this->super.super.super.super.pos[0]; /*0x5f7afe*/
        v18[1] = a3[0xC] - this->super.super.super.super.pos[1]; /*0x5f7b08*/
        v18[2] = a3[0xD] - this->super.super.super.super.pos[2]; /*0x5f7b12*/
        Vector3_NormalizeInPlace(v18); /*0x5f7b16*/
        v16 = result; /*0x5f7b1e*/
        v6 = a3 == (float *)((int (__thiscall *)(LowProcess *))this->super.super.super.process->GetActionTarget)(this->super.super.super.process)
           ? *(float *)GameSetting_GetSafeFloatPointer((int *)unk_B36AC0) * dbl_A3FA98
           : *(float *)GameSetting_GetSafeFloatPointer((int *)unk_B36AC0) * dbl_A31C70;
        v19 = v6; /*0x5f7b51*/
        if ( v19 >= (double)v16
          && (v16 >= fCostant_100
           || a3 == (float *)reference
           || a3 == (float *)((int (__thiscall *)(LowProcess *))this->super.super.super.process->Unk_137)(this->super.super.super.process)) )
        {
          Vector3_CalculateHeadingRadiansXY(v18); /*0x5f7b9d*/
          v20 = result; /*0x5f7ba2*/
          *(float *)&v21 = v20 - this->super.super.super.super.rot.z; /*0x5f7bb0*/
          v7 = *(float *)&v21; /*0x5f7bb4*/
          v8 = dbl_A3D5B0; /*0x5f7bc0*/
          if ( *(float *)&v21 > dbl_A3D5B8 ) /*0x5f7bc9*/
          {
            *(float *)&v21 = v7 - v8; /*0x5f7bcf*/
            v7 = *(float *)&v21; /*0x5f7bd7*/
          }
          v9 = v8; /*0x5f7bd9*/
          v10 = v7; /*0x5f7bd9*/
          result = v9; /*0x5f7bd9*/
          if ( v10 < dbl_A491E0 ) /*0x5f7be6*/
          {
            result = result + v10; /*0x5f7be8*/
            *(float *)&v21 = result; /*0x5f7bea*/
          }
          v11 = a3 == (float *)((int (__thiscall *)(LowProcess *))this->super.super.super.process->GetActionTarget)(this->super.super.super.process)
              ? flt_A6EA80
              : flt_A3F3E0;
          v17 = v11; /*0x5f7c13*/
          *(float *)&v22 = fabs(*(float *)&v21); /*0x5f7c1d*/
          v12 = *(float *)&v22; /*0x5f7c21*/
          if ( v17 >= (double)*(float *)&v22 ) /*0x5f7c30*/
          {
            if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a3 + 0x190))(a3) ) /*0x5f7c40*/
            {
              v13 = (float *)reference; /*0x5f7c4a*/
              if ( this == reference || a3 == v13 ) /*0x5f7c56*/
                goto LABEL_30; /*0x5f7c56*/
              if ( this->vtbl->super.super.super.GetSleepState((TESObjectREFR *)this) == kSitSleep_None /*0x5f7c72*/
                || !(*(int (__thiscall **)(float *))(*(_DWORD *)a3 + 0x18C))(a3) )
              {
                v13 = (float *)reference; /*0x5f7c7c*/
LABEL_30:
                if ( a4 ) /*0x5f7c87*/
                {
                  a4 = 1; /*0x5f7c8b*/
                  if ( a3 == v13 ) /*0x5f7c90*/
                    IsPlayerInCombat = PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)v13, 0); /*0x5f7c94*/
                  else
                    result = ((double (__usercall *)@<st0>(float *@<ecx>, int, double@<st0>))*(_DWORD *)(*(_DWORD *)a3 + 0x334))( /*0x5f7ca7*/
                               a3,
                               1,
                               result);
                  LOBYTE(v22) = IsPlayerInCombat; /*0x5f7cad*/
                  Actor_GetDetectionLevelAgainstActor( /*0x5f7cc0*/
                    (TESObjectREFR *)this,
                    (int)this,
                    v17,
                    v12,
                    result,
                    0,
                    (TESObjectREFR *)a3,
                    &a4,
                    v22,
                    0,
                    0,
                    v15);
                }
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x5f7b68*/
}
