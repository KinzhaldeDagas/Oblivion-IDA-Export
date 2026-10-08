char __usercall sub_6191B0@<al>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  BSAnimGroupSequence *NormalizedSequenceSlot; // eax
  ActorAnimData *v6; // eax
  ActorAnimData *v7; // eax
  _DWORD **CurrentTarget; // eax
  _DWORD **v9; // eax
  char v10; // bl
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  Actor *v16; // eax
  Actor *v17; // eax
  Actor *v18; // eax
  bool v19; // cl
  bool v20; // zf
  bool v22; // [esp+9h] [ebp-Bh]
  bool IsCurrentActionInRange2To5; // [esp+Ah] [ebp-Ah]
  char v24; // [esp+Bh] [ebp-9h]
  float CachedTargetSurfaceDistance; // [esp+Ch] [ebp-8h]
  float DesiredCombatDistance; // [esp+10h] [ebp-4h]

  NormalizedSequenceSlot = (BSAnimGroupSequence *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)(a1 + 0x3C) + 0x164))( /*0x6191c2*/
                                                    *(_DWORD *)(a1 + 0x3C),
                                                    a4,
                                                    a3,
                                                    a2);
  if ( !NormalizedSequenceSlot /*0x6191fe*/
    || (v6 = (ActorAnimData *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C)),
        (NormalizedSequenceSlot = ActorAnimData_GetNormalizedSequenceSlot(v6, 1u)) == 0)
    || (v7 = (ActorAnimData *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C)),
        NormalizedSequenceSlot = ActorAnimData_GetNormalizedSequenceSlot(v7, 1u),
        *((_DWORD *)NormalizedSequenceSlot + 0x11) == 1) )
  {
    if ( *(_BYTE *)(a1 + 0x49) || *(_DWORD *)(a1 + 0x74) == 1 ) /*0x61920d*/
    {
      if ( !CombatController_GetCurrentTarget(a1) || *(_DWORD *)(a1 + 0x70) == 0xB ) /*0x619226*/
      {
        LOBYTE(NormalizedSequenceSlot) = Actor_IsBlocking(*(_DWORD **)(a1 + 0x3C)); /*0x61939f*/
        if ( (_BYTE)NormalizedSequenceSlot ) /*0x6193a6*/
          LOBYTE(NormalizedSequenceSlot) = Actor_UpdateBlockingState(*(Actor **)(a1 + 0x3C), 0); /*0x6193ad*/
        v20 = *(_DWORD *)(a1 + 0x74) == 1; /*0x6193b2*/
        *(_BYTE *)(a1 + 0x49) = 0; /*0x6193b5*/
        if ( v20 ) /*0x6193b9*/
        {
          *(_DWORD *)(a1 + 0x78) = 1; /*0x6193bb*/
          *(_DWORD *)(a1 + 0x74) = 3; /*0x6193bf*/
        }
      }
      else
      {
        CurrentTarget = (_DWORD **)CombatController_GetCurrentTarget(a1); /*0x61922f*/
        IsCurrentActionInRange2To5 = Actor_IsCurrentActionInRange2To5(CurrentTarget); /*0x61923d*/
        v9 = (_DWORD **)CombatController_GetCurrentTarget(a1); /*0x619241*/
        v22 = Actor_GetCurrentAction(v9) == 3; /*0x619250*/
        v10 = 0; /*0x619257*/
        v11 = CombatController_GetCurrentTarget(a1); /*0x619259*/
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x330))(v11) ) /*0x619268*/
        {
          v12 = CombatController_GetCurrentTarget(a1); /*0x619270*/
          v10 = *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x330))(v12) + 0x49); /*0x619281*/
        }
        CachedTargetSurfaceDistance = CombatController_GetCachedTargetSurfaceDistance(a1, 1); /*0x61928b*/
        DesiredCombatDistance = CombatController_GetDesiredCombatDistance((void *)a1); /*0x619296*/
        v13 = CombatController_GetCurrentTarget(a1); /*0x61929c*/
        v24 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v13 + 0x58) + 0x138))(*(_DWORD *)(v13 + 0x58)); /*0x6192b0*/
        v14 = CombatController_GetCurrentTarget(a1); /*0x6192b4*/
        v19 = 1; /*0x61931c*/
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 0x1A0))(v14) ) /*0x6192c3*/
        {
          v15 = CombatController_GetCurrentTarget(a1); /*0x6192cb*/
          if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v15 + 0x19C))(v15) ) /*0x6192da*/
          {
            v16 = (Actor *)CombatController_GetCurrentTarget(a1); /*0x6192e2*/
            if ( Actor::GetDeadState(v16) != 3 ) /*0x6192f1*/
            {
              v17 = (Actor *)CombatController_GetCurrentTarget(a1); /*0x6192f5*/
              if ( !Actor::IsSleeping(v17) ) /*0x6192fc*/
              {
                v18 = (Actor *)CombatController_GetCurrentTarget(a1); /*0x619307*/
                if ( Actor::GetDeadState(v18) != 5 ) /*0x619316*/
                  v19 = 0; /*0x6192c7*/
              }
            }
          }
        }
        if ( DesiredCombatDistance < (double)CachedTargetSurfaceDistance /*0x61936a*/
          || v19
          || v22
          || v10
          || Game_RandomLargeInteger(0) % 0x64 < 5 && (!IsCurrentActionInRange2To5 || v24)
          || (LOBYTE(NormalizedSequenceSlot) = Actor_IsBlocking(*(_DWORD **)(a1 + 0x3C)), !(_BYTE)NormalizedSequenceSlot) )
        {
          LOBYTE(NormalizedSequenceSlot) = Actor_IsBlocking(*(_DWORD **)(a1 + 0x3C)); /*0x61936f*/
          if ( (_BYTE)NormalizedSequenceSlot ) /*0x619376*/
            LOBYTE(NormalizedSequenceSlot) = Actor_UpdateBlockingState(*(Actor **)(a1 + 0x3C), 0); /*0x61937d*/
          v20 = *(_DWORD *)(a1 + 0x74) == 1; /*0x619382*/
          *(_BYTE *)(a1 + 0x49) = 0; /*0x619385*/
          if ( v20 ) /*0x619389*/
          {
            *(_DWORD *)(a1 + 0x78) = 1; /*0x61938b*/
            *(_DWORD *)(a1 + 0x74) = 3; /*0x61938e*/
          }
        }
      }
    }
  }
  return (char)NormalizedSequenceSlot; /*0x619396*/
}
