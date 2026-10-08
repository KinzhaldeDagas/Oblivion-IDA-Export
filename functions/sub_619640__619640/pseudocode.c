void __usercall sub_619640(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  _BYTE *v5; // ecx
  TESObjectREFR *v6; // edi
  ActorAnimData *v7; // eax
  _DWORD *v8; // ebp
  void (__thiscall **v9)(_DWORD *, int, int, int); // edi
  int v10; // eax
  TESObjectREFR *v11; // edi
  TESObjectREFR *v12; // eax
  char *v13; // eax
  _DWORD *v14; // eax
  int CurrentTarget; // eax
  char *Name; // eax
  UInt32 v17; // [esp-14h] [ebp-1Ch]
  UInt32 QueuedAnimType; // [esp-Ch] [ebp-14h]
  char *v19; // [esp-8h] [ebp-10h]
  float v20; // [esp+4h] [ebp-4h]

  if ( *(_DWORD *)(a1 + 0x70) == 5 ) /*0x619648*/
  {
    if ( *(_BYTE *)(a1 + 0x4A) ) /*0x61964e*/
    {
      if ( !*(_DWORD *)(a1 + 0xC8) /*0x619726*/
        || (v14 = (_DWORD *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)(a1 + 0x3C) + 0x164))(
                              *(_DWORD *)(a1 + 0x3C),
                              a4,
                              a3,
                              a2),
            ActorAnimData_IsIdleInactive(v14)) )
      {
        *(_BYTE *)(a1 + 0x4A) = 0; /*0x619735*/
        if ( CombatController_GetCurrentTarget(a1) ) /*0x619739*/
        {
          CurrentTarget = CombatController_GetCurrentTarget(a1); /*0x619744*/
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)CurrentTarget + 0x36C))( /*0x619757*/
            CurrentTarget,
            *(_DWORD *)(a1 + 0x3C));
        }
        if ( Actor_IsBlocking(*(_DWORD **)(a1 + 0x3C)) ) /*0x61975c*/
          Actor_UpdateBlockingState(*(Actor **)(a1 + 0x3C), 0); /*0x61976a*/
        sub_6160B0((Actor **)a1); /*0x619771*/
        v20 = (double)(Game_RandomLargeInteger(0) % 0xA) / dbl_A3F3E8 * g_GameSettingStringPointers_B36CD8[0x26] /*0x6197a7*/
            + g_GameSettingStringPointers_B36CD8[0x24];
        *(float *)(a1 + 0xD4) = *(float *)(a1 + 0x44); /*0x6197ae*/
        *(float *)(a1 + 0xD8) = v20; /*0x6197b8*/
        *(float *)(a1 + 0xDC) = kTerrainLODQuadRayDirectionZ; /*0x6197c4*/
        if ( *(_DWORD *)(a1 + 0x70) != 6 ) /*0x6197cd*/
        {
          if ( unk_B3B908 ) /*0x6197cf*/
          {
            Name = TESObjectREFR_GetName(*(TESObjectREFR **)(a1 + 0x3C)); /*0x6197e0*/
            Interface_ConsolePrint("%.20s is going to %s!", Name, "...just kinda stand around"); /*0x6197eb*/
          }
          *(float *)(a1 + 0x188) = kTerrainLODQuadRayDirectionZ; /*0x6197f9*/
        }
        *(_DWORD *)(a1 + 0x70) = 6; /*0x6197ff*/
        *(_BYTE *)(a1 + 0x17D) = 1; /*0x619802*/
      }
    }
    else
    {
      if ( Actor_IsBlocking(*(_DWORD **)(a1 + 0x3C)) ) /*0x61965c*/
        Actor_UpdateBlockingState(*(Actor **)(a1 + 0x3C), 0); /*0x61966a*/
      v5 = *(_BYTE **)(a1 + 0xC8); /*0x61966f*/
      *(_BYTE *)(a1 + 0x4A) = 1; /*0x619677*/
      *(_BYTE *)(a1 + 0x4E) = 0; /*0x61967b*/
      if ( v5 ) /*0x61967f*/
      {
        v6 = *(TESObjectREFR **)(a1 + 0x3C); /*0x619681*/
        QueuedAnimType = TESIdleForm_GetQueuedAnimType(v5); /*0x61968d*/
        v17 = *(_DWORD *)(a1 + 0xC8); /*0x619695*/
        v7 = v6->vtbl->GetAnimData(v6); /*0x61969e*/
        ActorAnimData_QueueIdle(v7, v17, v6, QueuedAnimType, 2); /*0x6196a2*/
      }
      v8 = *(_DWORD **)(a1 + 0x3C); /*0x6196a8*/
      v9 = (void (__thiscall **)(_DWORD *, int, int, int))(*v8 + 0x308); /*0x6196b4*/
      v10 = CombatController_GetCurrentTarget(a1); /*0x6196ba*/
      (*v9)(v8, v10, 5, 1); /*0x6196c4*/
      if ( unk_B3B908 ) /*0x6196c6*/
      {
        if ( CombatController_GetCurrentTarget(a1) ) /*0x6196d6*/
        {
          v11 = *(TESObjectREFR **)(a1 + 0x3C); /*0x6196e3*/
          v12 = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x6196e8*/
          v19 = TESObjectREFR_GetName(v12); /*0x6196f4*/
          v13 = TESObjectREFR_GetName(v11); /*0x6196f7*/
          Interface_ConsolePrint("%.20s wants to yield to %.20s!", v13, v19); /*0x619702*/
        }
      }
    }
  }
}
