char __userpurge sub_60EAF0@<al>(Actor *a1@<ecx>, int ebx0@<ebx>, int a3@<edi>, TESPackage *a2)
{
  int v6; // eax
  TESPackage *v7; // edi
  char *v8; // eax
  _DWORD *v9; // eax
  LowProcess *process; // edi
  BSExtraData *v11; // eax
  char v13; // [esp-10h] [ebp-18h]
  char v14; // [esp-Ch] [ebp-14h]

  LOBYTE(v6) = a1->vtbl->IsInCombat(a1, 1);
  if ( !(_BYTE)v6 )
  {
    LOBYTE(v6) = a1->vtbl->super.super.IsDead((TESObjectREFR *)a1, 0);
    if ( !(_BYTE)v6 )
    {
      LOBYTE(v6) = sub_5E6BA0(a1);
      if ( !(_BYTE)v6 )
      {
        LOBYTE(v6) = sub_5E6CD0((TESObjectREFR *)a1, 0);
        if ( !(_BYTE)v6 )
        {
          LOBYTE(v6) = a1->vtbl->IsTresspassing(a1);
          if ( !(_BYTE)v6 )
          {
            v7 = a2;
            if ( !a2 || (int)a2[1].members.procedureArrayIndex < 1 )
            {
              if ( a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1) == kSitSleep_None
                || a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1) == kSitSleep_Sitting
                || (v6 = a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1), v6 == 9) )
              {
                a1->members.super.process->SetCurrentPackage(a1->members.super.process, 0);
                a1->members.super.process->Unk_126(a1->members.super.process);
                if ( sub_5E0380(a1) )
                {
                  v8 = (char *)sub_5E0380(a1);
                  if ( sub_567770(v8) )
                    sub_5EAE70(a1, ebx0, (int)a2, a3);
                }
                a1->members.super.process->Unk_08(a1->members.super.process);
                v9 = &a1->members.super.process->__vftable;
                if ( v9[2] )
                {
                  process = a1->members.super.process;
                  v14 = (*(int (**)(void))(*v9 + 0x390))();
                  v13 = process->Unk_2F(process);
                  v11 = (BSExtraData *)process->GetUnk02C(process);
                  sub_4268B0(
                    &a1->members.super.super.baseExtraList,
                    process->editorPackage,
                    process->editorPackProcedure,
                    v11,
                    v13,
                    v14);
                  v7 = a2;
                }
                Actor_AddPackage_(a1, v7, 0, 0);
                ++v7[1].members.procedureArrayIndex;
                LOBYTE(v6) = ((char (__thiscall *)(LowProcess *, _DWORD))a1->members.super.process->SetCurrentPackProcedure)(
                               a1->members.super.process,
                               0);
              }
            }
          }
        }
      }
    }
  }
  return v6;
}
