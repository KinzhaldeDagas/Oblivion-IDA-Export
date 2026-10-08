void __userpurge sub_5EFF30(Actor *a1@<ecx>, int a2@<ebx>, int a3@<esi>, int a4)
{
  TESPackage *v5; // eax
  int *v6; // eax
  int *v7; // esi

  if ( a1->members.super.process ) /*0x5eff33*/
  {
    v5 = a1->members.super.process->GetCurrentPackage(a1->members.super.process); /*0x5eff48*/
    if ( v5 ) /*0x5eff4c*/
    {
      if ( v5->members.type == kPackageType_Flee ) /*0x5eff52*/
      {
        if ( a1->members.super.process ) /*0x5eff54*/
        {
          v6 = (int *)a1->members.super.process->GetCurrentPackage(a1->members.super.process); /*0x5eff66*/
          v7 = v6; /*0x5eff68*/
          if ( v6 ) /*0x5eff6c*/
          {
            if ( v6[0x16] || v6[0x15] ) /*0x5eff74*/
            {
              sub_627D60(v6, a4); /*0x5eff81*/
              if ( !v7[0x16] && !v7[0x15] ) /*0x5eff8c*/
              {
                if ( a1->vtbl->IsInCombat(a1, 1) ) /*0x5eff9e*/
                  ((void (__thiscall *)(Actor *, _DWORD))a1->vtbl->Unk_D0)(a1, 0); /*0x5effb0*/
                else
                  sub_5EAE70(a1, a2, (int)a1, a3); /*0x5effb7*/
              }
            }
          }
        }
      }
    }
  }
}
