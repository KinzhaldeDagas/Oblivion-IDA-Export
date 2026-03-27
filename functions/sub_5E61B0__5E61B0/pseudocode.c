void __userpurge sub_5E61B0(
        Actor *a1@<ecx>,
        int a2@<edi>,
        double a3@<st2>,
        double a4@<st1>,
        double st7_0@<st0>,
        int a6,
        int a7)
{
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // ebp
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  _DWORD *v24; // ebx
  void (__thiscall **v25)(_DWORD *, int); // edi
  int v26; // eax
  int v27; // eax
  CombatController *v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // edi
  ActorVtbl *vtbl; // edi
  int v35; // eax
  int v36; // eax
  int v37; // eax
  float retaddr; // [esp+24h] [ebp+0h]

  sub_572EA0(2);
  if ( st7_0 <= *(float *)&SrcStr )
  {
    if ( !a1->vtbl->IsInCombat(a1, 1)
      || !a1->vtbl->GetCombatController(a1)
      || a1->members.DeadState == 5
      || (v8 = (int)a1->vtbl->GetCombatController(a1), !sub_6135F0(v8))
      || (v9 = (int)a1->vtbl->GetCombatController(a1), (PlayerCharacter *)sub_6135F0(v9) == TESDataHandler_g_PlayerRef)
      && TESDataHandler_g_PlayerRef->unk5C0 )
    {
      if ( a1->vtbl->GetCombatController(a1) )
      {
        v37 = (int)a1->vtbl->GetCombatController(a1);
        if ( !sub_6135F0(v37) )
          ((void (__thiscall *)(Actor *, _DWORD))a1->vtbl->Unk_D0)(a1, 0);
      }
    }
    else
    {
      v10 = 0xFFFFFFFF;
      v11 = a1->members.super.process->GetProcessLevel(a1->members.super.process);
      v12 = 0;
      if ( a1->vtbl->GetCombatController(a1) )
      {
        v13 = (int)a1->vtbl->GetCombatController(a1);
        if ( sub_6135F0(v13) )
        {
          v14 = (int)a1->vtbl->GetCombatController(a1);
          if ( *(_DWORD *)(sub_6135F0(v14) + 0x58) )
          {
            v15 = (int)a1->vtbl->GetCombatController(a1);
            v16 = sub_6135F0(v15);
            v10 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v16 + 0x58) + 8))(*(_DWORD *)(v16 + 0x58));
            v17 = (int)a1->vtbl->GetCombatController(a1);
            v18 = sub_6135F0(v17);
            v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 0x154))(v18);
          }
        }
      }
      v19 = (int)a1->vtbl->GetCombatController(a1);
      if ( !sub_6135F0(v19)
        || (v20 = (int)a1->vtbl->GetCombatController(a1),
            v21 = sub_6135F0(v20),
            (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v21 + 0x198))(v21, 0))
        || (v22 = (int)a1->vtbl->GetCombatController(a1), (*(_DWORD *)(sub_6135F0(v22) + 8) & 0x800) != 0)
        || (v23 = (int)a1->vtbl->GetCombatController(a1), (*(_DWORD *)(sub_6135F0(v23) + 8) & 0x20) != 0) )
      {
        vtbl = a1->vtbl;
        v35 = (int)a1->vtbl->GetCombatController(a1);
        v36 = sub_6135F0(v35);
        ((void (__thiscall *)(Actor *, int))vtbl->Unk_D0)(a1, v36);
      }
      else
      {
        if ( (PlayerCharacter *)a1->vtbl->GetCombatTarget(a1) == TESDataHandler_g_PlayerRef )
          st7_0 = sub_65DF40(TESDataHandler_g_PlayerRef, (int)a1);
        if ( v11 || !a1->vtbl->super.super.GetNiNode((TESObjectREFR *)a1) || v10 || !v12 )
        {
          if ( a1->vtbl->GetCombatController(a1) )
          {
            v30 = (int)a1->vtbl->GetCombatController(a1);
            if ( sub_6135F0(v30) )
            {
              v31 = (int)a1->vtbl->GetCombatController(a1);
              v32 = sub_6135F0(v31);
              v33 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v32 + 0x58) + 8))(*(_DWORD *)(v32 + 0x58));
              if ( a1->members.super.process->GetProcessLevel(a1->members.super.process) != v33 )
              {
                a1->members.super.process->SetCurrentPackage(a1->members.super.process, 0);
                ((void (__thiscall *)(LowProcess *, Actor *, _DWORD, int, int))a1->members.super.process->Unk_65)(
                  a1->members.super.process,
                  a1,
                  0,
                  0x201,
                  1);
                a1->members.super.process->Unk_08(a1->members.super.process);
                if ( Actor::GetProcessLevel(a1) == 1 )
                {
                  sub_674550(v11, a3, a4, st7_0, (int)a1, 1);
                  sub_673A90((int)a1, 1, 1, 0, 0);
                }
              }
            }
          }
        }
        else
        {
          v24 = &a1->members.super.process->__vftable;
          v25 = (void (__thiscall **)(_DWORD *, int))(*v24 + 0x48C);
          v26 = ((int (__thiscall *)(Actor *, int))a1->vtbl->GetCombatController)(a1, a2);
          v27 = sub_6135F0(v26);
          (*v25)(v24, v27);
          retaddr = a1->members.unk0AC - flt_B33E9C;
          a1->members.unk0AC = retaddr;
          if ( retaddr <= 0.0 )
          {
            v28 = a1->vtbl->GetCombatController(a1);
            sub_61E980(v28, 0);
            a1->members.unk0AC = flt_A31E2C;
          }
          v29 = (int)a1->vtbl->GetCombatController(a1);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v29 + 0xEC))(v29, a7);
        }
      }
    }
  }
}
