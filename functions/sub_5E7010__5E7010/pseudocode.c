void __userpurge sub_5E7010(
        Actor *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5,
        int a6,
        char a7)
{
  bool v8; // zf
  signed int v9; // eax
  int v10; // eax
  LowProcess *process; // ecx
  int *v12; // [esp+4h] [ebp-4h] BYREF

  if ( (!a1->members.super.process
     || (a1->members.super.process->GetMovementFlags(a1->members.super.process) & 0x400) == 0
     || (a1->members.super.process->GetMovementFlags(a1->members.super.process) & 0x800) != 0)
    && a1->members.DeadState != 3 )
  {
    if ( !byte_B333B8 )
      goto LABEL_15;
    v9 = GetRandomLargeInteger_(0) & 0x80000007;
    v8 = v9 == 0;
    if ( v9 < 0 )
      v8 = (((_BYTE)v9 - 1) | 0xFFFFFFF8) == 0xFFFFFFFF;
    if ( v8 )
    {
LABEL_15:
      if ( a1->vtbl->GetCombatController(a1) )
      {
        v10 = ((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->vtbl->GetCombatController)(
                a1,
                a4,
                a3,
                a2);
        sub_6167F0(v10, a2, a3, a4, a5, a6, a7);
      }
      else
      {
        process = a1->members.super.process;
        if ( process )
        {
          v12 = (int *)((int (__usercall *)@<eax>(LowProcess *@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))process->GetUnk220Element)(
                         process,
                         0,
                         a4,
                         a3,
                         a2);
          sub_616530(a2, a4, a3, &v12, (TESObjectREFR *)a1, a5, a6, a7);
        }
      }
    }
  }
}
