void __usercall sub_6925C0(int a1@<ebx>, Actor *a2, int a3, PlayerCharacter *a4)
{
  LowProcess *process; // ecx
  TESPackage *v5; // esi
  TESPackage *v6; // eax

  process = a2->members.super.process; /*0x6925c5*/
  if ( process ) /*0x6925ca*/
  {
    if ( (PlayerCharacter *)((int (__thiscall *)(LowProcess *, int))process->Unk_F3)(process, a1) != a4 ) /*0x6925e1*/
      ((void (__thiscall *)(LowProcess *, PlayerCharacter *))a2->members.super.process->Unk_F2)( /*0x6925ef*/
        a2->members.super.process,
        a4);
    if ( !a2->vtbl->IsInCombat(a2, 1) ) /*0x6925fd*/
    {
      v5 = 0; /*0x692604*/
      if ( a4 != reference ) /*0x69260c*/
        v5 = a4->super.super.super.process->GetCurrentPackage(a4->super.super.super.process); /*0x69261b*/
      v6 = a2->members.super.process->GetCurrentPackage(a2->members.super.process); /*0x692628*/
      if ( (!v5 || v5->members.type == kPackageType_Combat) /*0x692640*/
        && (!v6 || v6->members.type != kPackageType_SummonCreatureDefend && !(unsigned __int8)sub_5E03B0(a2)) )
      {
        sub_5F8170(a2, (int)a4); /*0x69264c*/
      }
    }
  }
}
