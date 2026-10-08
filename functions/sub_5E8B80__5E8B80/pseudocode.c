char __usercall sub_5E8B80@<al>(TESObjectREFR *this@<ecx>, int a2@<ebx>)
{
  ActorAnimData *v3; // eax
  char result; // al
  char v5; // bl
  double v6; // st7
  TESObjectCELL *DwordAtOffset40; // eax
  TESObjectCELL *v8; // edi
  float *SafeFloatPointer; // eax
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

  v3 = this->vtbl->GetAnimData(this); /*0x5e8b90*/
  result = ActorAnimData_HasAnimKey(v3, 0x21u); /*0x5e8b94*/
  if ( !result ) /*0x5e8b9b*/
    return result; /*0x5e8b9b*/
  v5 = 0; /*0x5e8bab*/
  v14 = 0; /*0x5e8bb1*/
  if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, int, int))this->vtbl[1].GetSleepState)(this, 1, a2) ) /*0x5e8bb5*/
    return (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x16) + 0xF0))(*((_DWORD *)this + 0x16), 1) != 0; /*0x5e8bd4*/
  TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x5e8bda*/
  if ( ((int (__thiscall *)(TESObjectREFR *, int))this->vtbl[1].Unk_37)(this, 0x29) <= 0 ) /*0x5e8bf3*/
    v6 = 0.0; /*0x5e8bfd*/
  else
    v6 = MEMORY[0xB37A50]; /*0x5e8bf5*/
  v15 = v6; /*0x5e8c00*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x5e8c06*/
  v8 = DwordAtOffset40; /*0x5e8c0b*/
  if ( DwordAtOffset40 && TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x5e8c17*/
  {
    if ( TESObjectCELL_GetMusicType(v8, 0) != (BSExtraData *)2 ) /*0x5e8c30*/
      goto LABEL_21; /*0x5e8c30*/
    v18 = ((double (__thiscall *)(_DWORD, TESObjectREFR *, int))*(_DWORD *)(**((_DWORD **)this + 0x16) + 0x3AC))( /*0x5e8c46*/
            *((_DWORD *)this + 0x16),
            this,
            1);
    if ( v18 > fCostant_100 ) /*0x5e8c59*/
      v18 = flt_A2FE7C; /*0x5e8c61*/
    v19 = v18 - v15; /*0x5e8c72*/
    if ( *GameSetting_GetSafeFloatPointer(MEMORY[0xB37740]) <= v19 ) /*0x5e8c86*/
    {
      if ( (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x16) + 0xF0))(*((_DWORD *)this + 0x16), 1) ) /*0x5e8c99*/
      {
        SafeFloatPointer = GameSetting_GetSafeFloatPointer(MEMORY[0xB37740]); /*0x5e8ca8*/
        v16 = *SafeFloatPointer + *SafeFloatPointer; /*0x5e8cb6*/
        v20 = v19; /*0x5e8cc3*/
        if ( *GameSetting_GetSafeFloatPointer(MEMORY[0xB37740]) + v16 > v20 ) /*0x5e8cd8*/
        {
          v5 = 1; /*0x5e8cda*/
          v14 = 1; /*0x5e8cdc*/
        }
      }
      goto LABEL_21; /*0x5e8ce0*/
    }
  }
  else
  {
    if ( flt_A417B4 >= (double)v17 ) /*0x5e8d1e*/
      v10 = MEMORY[0xB37730]; /*0x5e8d28*/
    else
      v10 = MEMORY[0xB37738]; /*0x5e8d20*/
    if ( v10 <= *(float *)&MEMORY[0xB333A0]->sky->unk03C[0xA] /*0x5e8d35*/
              + *(float *)&MEMORY[0xB333A0]->sky->unk03C[9]
              + *(float *)&MEMORY[0xB333A0]->sky->unk03C[0xB]
              - v15 )
      goto LABEL_21; /*0x5e8d35*/
  }
  v5 = 1; /*0x5e8d37*/
LABEL_21:
  v11 = *((_DWORD *)this + 0x16); /*0x5e8d39*/
  if ( v11 ) /*0x5e8d3f*/
  {
    if ( (unsigned int)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11) <= 1 ) /*0x5e8d4b*/
    {
      v12 = *((_DWORD *)this + 0x16); /*0x5e8d4d*/
      if ( v12 ) /*0x5e8d52*/
      {
        if ( v14 ) /*0x5e8d59*/
        {
          *(float *)(v12 + 0xBC) = MEMORY[0xB37A58][0] * dbl_A3F3F0; /*0x5e8d6a*/
          return v5; /*0x5e8d74*/
        }
        *(float *)(v12 + 0xBC) = MEMORY[0xB37A58][0]; /*0x5e8d7b*/
      }
    }
  }
  return v5; /*0x5e8b9d*/
}
