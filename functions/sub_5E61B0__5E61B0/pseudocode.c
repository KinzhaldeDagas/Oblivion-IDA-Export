void __userpurge sub_5E61B0(Actor *a1@<ecx>, int a2@<edi>, double st7_0@<st0>, int a4, int a5)
{
  CombatController *v6; // eax
  CombatController *v7; // eax
  int v8; // edi
  UInt32 v9; // ebp
  int v10; // ebx
  CombatController *v11; // eax
  CombatController *v12; // eax
  CombatController *v13; // eax
  int CurrentTarget; // eax
  CombatController *v15; // eax
  int v16; // eax
  CombatController *v17; // eax
  CombatController *v18; // eax
  int v19; // eax
  CombatController *v20; // eax
  CombatController *v21; // eax
  LowProcess *process; // ebx
  void (__thiscall **p_Unk_122)(LowProcess *, int); // edi
  int v24; // eax
  int v25; // eax
  CombatController *v26; // eax
  CombatController *v27; // eax
  CombatController *v28; // eax
  CombatController *v29; // eax
  int v30; // eax
  int v31; // edi
  ActorVtbl *vtbl; // edi
  CombatController *v33; // eax
  int v34; // eax
  CombatController *v35; // eax
  float retaddr; // [esp+24h] [ebp+0h]

  sub_572EA0(2); /*0x5e61bc*/
  if ( st7_0 <= *(float *)&SrcStr ) /*0x5e61cc*/
  {
    if ( !a1->vtbl->IsInCombat(a1, 1) /*0x5e6241*/
      || !a1->vtbl->GetCombatController(a1)
      || a1->members.DeadState == 5
      || (v6 = a1->vtbl->GetCombatController(a1), !CombatController_GetCurrentTarget((int)v6))
      || (v7 = a1->vtbl->GetCombatController(a1),
          (PlayerCharacter *)CombatController_GetCurrentTarget((int)v7) == reference)
      && reference->unk5C0 )
    {
      if ( a1->vtbl->GetCombatController(a1) ) /*0x5e652e*/
      {
        v35 = a1->vtbl->GetCombatController(a1); /*0x5e6542*/
        if ( !CombatController_GetCurrentTarget((int)v35) ) /*0x5e6546*/
          ((void (__thiscall *)(Actor *, _DWORD))a1->vtbl->Unk_D0)(a1, 0); /*0x5e655e*/
      }
    }
    else
    {
      v8 = 0xFFFFFFFF; /*0x5e6259*/
      v9 = a1->members.super.process->GetProcessLevel(a1->members.super.process); /*0x5e625e*/
      v10 = 0; /*0x5e626a*/
      if ( a1->vtbl->GetCombatController(a1) ) /*0x5e626c*/
      {
        v11 = a1->vtbl->GetCombatController(a1); /*0x5e627c*/
        if ( CombatController_GetCurrentTarget((int)v11) ) /*0x5e6280*/
        {
          v12 = a1->vtbl->GetCombatController(a1); /*0x5e6293*/
          if ( *(_DWORD *)(CombatController_GetCurrentTarget((int)v12) + 0x58) ) /*0x5e629c*/
          {
            v13 = a1->vtbl->GetCombatController(a1); /*0x5e62ab*/
            CurrentTarget = CombatController_GetCurrentTarget((int)v13); /*0x5e62af*/
            v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(CurrentTarget + 0x58) + 8))(*(_DWORD *)(CurrentTarget + 0x58)); /*0x5e62be*/
            v15 = a1->vtbl->GetCombatController(a1); /*0x5e62ca*/
            v16 = CombatController_GetCurrentTarget((int)v15); /*0x5e62ce*/
            v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0x154))(v16); /*0x5e62df*/
          }
        }
      }
      v17 = a1->vtbl->GetCombatController(a1); /*0x5e62eb*/
      if ( !CombatController_GetCurrentTarget((int)v17) /*0x5e6363*/
        || (v18 = a1->vtbl->GetCombatController(a1),
            v19 = CombatController_GetCurrentTarget((int)v18),
            (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v19 + 0x198))(v19, 0))
        || (v20 = a1->vtbl->GetCombatController(a1),
            (*(_DWORD *)(CombatController_GetCurrentTarget((int)v20) + 8) & 0x800) != 0)
        || (v21 = a1->vtbl->GetCombatController(a1),
            (*(_DWORD *)(CombatController_GetCurrentTarget((int)v21) + 8) & 0x20) != 0) )
      {
        vtbl = a1->vtbl; /*0x5e64fe*/
        v33 = a1->vtbl->GetCombatController(a1); /*0x5e6508*/
        v34 = CombatController_GetCurrentTarget((int)v33); /*0x5e650c*/
        ((void (__thiscall *)(Actor *, int))vtbl->Unk_D0)(a1, v34); /*0x5e651a*/
      }
      else
      {
        if ( (PlayerCharacter *)a1->vtbl->GetCombatTarget(a1) == reference ) /*0x5e637d*/
          sub_65DF40(reference, (int)a1); /*0x5e6380*/
        if ( v9 || !a1->vtbl->super.super.GetNiNode(a1) || v8 || !v10 ) /*0x5e63ab*/
        {
          if ( a1->vtbl->GetCombatController(a1) ) /*0x5e644d*/
          {
            v28 = a1->vtbl->GetCombatController(a1); /*0x5e645d*/
            if ( CombatController_GetCurrentTarget((int)v28) ) /*0x5e6461*/
            {
              v29 = a1->vtbl->GetCombatController(a1); /*0x5e6474*/
              v30 = CombatController_GetCurrentTarget((int)v29); /*0x5e6478*/
              v31 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v30 + 0x58) + 8))(*(_DWORD *)(v30 + 0x58)); /*0x5e648c*/
              if ( a1->members.super.process->GetProcessLevel(a1->members.super.process) != v31 ) /*0x5e6495*/
              {
                a1->members.super.process->SetCurrentPackage(a1->members.super.process, 0); /*0x5e64a4*/
                ((void (__thiscall *)(LowProcess *, Actor *, _DWORD, int, int))a1->members.super.process->Unk_65)( /*0x5e64bb*/
                  a1->members.super.process,
                  a1,
                  0,
                  0x201,
                  1);
                a1->members.super.process->Unk_08(a1->members.super.process); /*0x5e64c5*/
                if ( Actor::GetProcessLevel(a1) == 1 ) /*0x5e64d1*/
                {
                  sub_674550((int)a1, 1); /*0x5e64de*/
                  ActorProcessManager_AddMobileObject( /*0x5e64f1*/
                    (ActorProcessManager *)&qword_B3BB2C[0x75],
                    (MobileObject *)a1,
                    1,
                    1,
                    0,
                    0);
                }
              }
            }
          }
        }
        else
        {
          process = a1->members.super.process; /*0x5e63b1*/
          p_Unk_122 = (void (__thiscall **)(LowProcess *, int))&process->Unk_122; /*0x5e63c0*/
          v24 = ((int (__thiscall *)(Actor *, int))a1->vtbl->GetCombatController)(a1, a2); /*0x5e63c6*/
          v25 = CombatController_GetCurrentTarget(v24); /*0x5e63ca*/
          (*p_Unk_122)(process, v25); /*0x5e63d4*/
          retaddr = a1->members.unk0AC - *(float *)&MEMORY[0xB33E90][0xC]; /*0x5e63e2*/
          a1->members.unk0AC = retaddr; /*0x5e63ea*/
          if ( retaddr <= 0.0 ) /*0x5e63f9*/
          {
            v26 = a1->vtbl->GetCombatController(a1); /*0x5e6406*/
            sub_61E980(v26, 0); /*0x5e640a*/
            a1->members.unk0AC = flt_A31E2C; /*0x5e6415*/
          }
          v27 = a1->vtbl->GetCombatController(a1); /*0x5e6425*/
          (*(void (__thiscall **)(CombatController *, int))(*(_DWORD *)v27 + 0xEC))(v27, a5); /*0x5e6439*/
        }
      }
    }
  }
}
