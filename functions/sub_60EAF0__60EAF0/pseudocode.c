char __userpurge sub_60EAF0@<al>(Actor *a1@<ecx>, int ebx0@<ebx>, int a3@<edi>, TESPackage *a2)
{
  SitSleep v5; // eax
  TESPackage *v6; // edi
  TESPackage *CurrentPackage; // eax
  LowProcess *process; // eax
  LowProcess *v9; // edi
  BSExtraData *v10; // eax
  char v12; // [esp-10h] [ebp-18h]
  char v13; // [esp-Ch] [ebp-14h]

  LOBYTE(v5) = a1->vtbl->IsInCombat(a1, 1); /*0x60eafd*/
  if ( !(_BYTE)v5 ) /*0x60eb01*/
  {
    LOBYTE(v5) = a1->vtbl->super.super.IsDead((TESObjectREFR *)a1, 0); /*0x60eb13*/
    if ( !(_BYTE)v5 ) /*0x60eb17*/
    {
      LOBYTE(v5) = sub_5E6BA0(a1); /*0x60eb1f*/
      if ( !(_BYTE)v5 ) /*0x60eb26*/
      {
        LOBYTE(v5) = sub_5E6CD0((TESObjectREFR *)a1, 0); /*0x60eb30*/
        if ( !(_BYTE)v5 ) /*0x60eb37*/
        {
          LOBYTE(v5) = a1->vtbl->IsTresspassing(a1); /*0x60eb47*/
          if ( !(_BYTE)v5 ) /*0x60eb4b*/
          {
            v6 = a2; /*0x60eb52*/
            if ( !a2 || (int)a2[1].members.procedureArrayIndex < 1 ) /*0x60eb5e*/
            {
              if ( a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1) == kSitSleep_None /*0x60eb94*/
                || a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1) == kSitSleep_Sitting
                || (v5 = a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1), v5 == kSitSleep_Sleeping) )
              {
                a1->members.super.process->SetCurrentPackage(a1->members.super.process, 0); /*0x60eba7*/
                a1->members.super.process->Unk_126(a1->members.super.process); /*0x60ebb4*/
                if ( Actor::GetCurrentPackage(a1) ) /*0x60ebb8*/
                {
                  CurrentPackage = Actor::GetCurrentPackage(a1); /*0x60ebc3*/
                  if ( TESPackage::IsTemporaryOverrideType(CurrentPackage) ) /*0x60ebca*/
                    sub_5EAE70(a1, ebx0, (int)a2, a3); /*0x60ebd5*/
                }
                a1->members.super.process->Unk_08(a1->members.super.process); /*0x60ebe2*/
                process = a1->members.super.process; /*0x60ebe4*/
                if ( process->editorPackage ) /*0x60ebe7*/
                {
                  v9 = a1->members.super.process; /*0x60ebf9*/
                  v13 = ((int (*)(void))process->GetUnk01C)(); /*0x60ec05*/
                  v12 = v9->Unk_2F(v9); /*0x60ec12*/
                  v10 = (BSExtraData *)v9->GetUnk02C(v9); /*0x60ec19*/
                  sub_4268B0( /*0x60ec27*/
                    &a1->members.super.super.baseExtraList,
                    v9->editorPackage,
                    v9->editorPackProcedure,
                    v10,
                    v12,
                    v13);
                  v6 = a2; /*0x60ec2c*/
                }
                Actor_AddPackage_(a1, v6, 0, 0); /*0x60ec39*/
                ++v6[1].members.procedureArrayIndex; /*0x60ec3e*/
                LOBYTE(v5) = ((char (__thiscall *)(LowProcess *, _DWORD))a1->members.super.process->SetCurrentPackProcedure)( /*0x60ec57*/
                               a1->members.super.process,
                               0);
              }
            }
          }
        }
      }
    }
  }
  return v5; /*0x60ec5a*/
}
