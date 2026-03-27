void __userpurge sub_5EFF30(Actor *a1@<ecx>, int a2@<ebx>, int a3@<esi>, int a4)
{
  TESPackage *v5; // eax
  int *v6; // eax
  int *v7; // esi

  if ( a1->members.super.process )
  {
    v5 = a1->members.super.process->GetCurrentPackage(a1->members.super.process);
    if ( v5 )
    {
      if ( v5->members.type == 0x10 )
      {
        if ( a1->members.super.process )
        {
          v6 = (int *)a1->members.super.process->GetCurrentPackage(a1->members.super.process);
          v7 = v6;
          if ( v6 )
          {
            if ( v6[0x16] || v6[0x15] )
            {
              sub_627D60(v6, a4);
              if ( !v7[0x16] && !v7[0x15] )
              {
                if ( a1->vtbl->IsInCombat(a1, 1) )
                  ((void (__thiscall *)(Actor *, _DWORD))a1->vtbl->Unk_D0)(a1, 0);
                else
                  sub_5EAE70(a1, a2, (int)a1, a3);
              }
            }
          }
        }
      }
    }
  }
}
