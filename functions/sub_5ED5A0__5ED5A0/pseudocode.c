void __userpurge sub_5ED5A0(Actor *a1@<ecx>, int a2@<edi>, double a3@<st1>, double a4@<st0>, EntryData *a5)
{
  TESForm *type; // eax
  bool v8; // zf
  TESForm *v9; // eax
  int v10; // edi
  int v11; // eax
  int CurrentTarget; // eax
  MagicTarget *v13; // eax
  MagicItem *v14; // edi
  LowProcess *process; // ecx
  EffectSetting *FXEffect; // eax
  EffectSetting *v17; // edi
  _DWORD *v18; // eax
  _DWORD *v19; // eax
  unsigned int v20; // esi
  int *refID; // [esp-4h] [ebp-18h]

  if ( a5 ) /*0x5ed5ac*/
  {
    type = a5->type; /*0x5ed5b2*/
    if ( type ) /*0x5ed5b7*/
    {
      if ( type->member.type == kFormType_Weapon ) /*0x5ed5c1*/
      {
        v8 = &type[4] == 0; /*0x5ed5c7*/
        v9 = type + 4; /*0x5ed5c7*/
        if ( v8 ) /*0x5ed5cb*/
          v10 = 0; /*0x5ed5d2*/
        else
          v10 = *(_DWORD *)&v9->member.type; /*0x5ed5cd*/
        if ( v10 ) /*0x5ed5d6*/
        {
          EquippedEntryData_GetCharge(a5); /*0x5ed5dc*/
          (**(void (__thiscall ***)(int, Actor *))(v10 + 0x24))(v10 + 0x24, a1); /*0x5ed5f6*/
          if ( a1 != (Actor *)reference && a1->vtbl->IsInCombat(a1, 1) ) /*0x5ed61b*/
          {
            v11 = ((int (__usercall *)@<eax>(Actor *@<ecx>, int, double@<st0>, double@<st1>))a1->vtbl->GetCombatController)( /*0x5ed62b*/
                    a1,
                    a2,
                    a4,
                    a3);
            if ( v11 && (CurrentTarget = CombatController_GetCurrentTarget(v11)) != 0 ) /*0x5ed63a*/
              v13 = (MagicTarget *)(CurrentTarget + 0x68); /*0x5ed63c*/
            else
              v13 = 0; /*0x5ed641*/
            a1->members.magicCaster.vtbl->SetCastingTarget(&a1->members.magicCaster, v13); /*0x5ed64d*/
          }
          v14 = (MagicItem *)(v10 + 0x18); /*0x5ed658*/
          a1->members.magicCaster.vtbl->SetActiveMagicItem(&a1->members.magicCaster, v14); /*0x5ed65c*/
          process = a1->members.super.process; /*0x5ed65e*/
          if ( process ) /*0x5ed663*/
            ((void (__thiscall *)(LowProcess *, int))process->Unk_AE)(process, 1); /*0x5ed66f*/
          FXEffect = MagicItem_GetFXEffect(v14, 0); /*0x5ed675*/
          v17 = FXEffect; /*0x5ed67a*/
          if ( FXEffect ) /*0x5ed67e*/
          {
            if ( FXEffect->castingSound ) /*0x5ed684*/
            {
              if ( a1->vtbl->GetCombatController(a1) ) /*0x5ed69b*/
              {
                refID = (int *)v17->castingSound->super.member.super.refID; /*0x5ed6ae*/
                v18 = (_DWORD *)((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>, double@<st1>))a1->vtbl->GetCombatController)( /*0x5ed6b7*/
                                  a1,
                                  a4,
                                  a3);
                sub_619FA0(v18, refID, 0); /*0x5ed6bb*/
              }
              else if ( a1 == (Actor *)reference ) /*0x5ed6d0*/
              {
                sub_663520((LONG)reference, v17->castingSound->super.member.super.refID); /*0x5ed6e4*/
              }
              else
              {
                v19 = (_DWORD *)sub_65AC50(a1, v17->castingSound->super.member.super.refID, 0, 0x102, 1); /*0x5ed6fe*/
                v20 = (unsigned int)v19; /*0x5ed703*/
                if ( v19 ) /*0x5ed707*/
                {
                  sub_6B73E0(v19); /*0x5ed70b*/
                  FormHeapFree(v20); /*0x5ed711*/
                }
              }
            }
          }
        }
      }
    }
  }
}
