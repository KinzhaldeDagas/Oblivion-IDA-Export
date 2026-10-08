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

  if ( (!a1->members.super.process /*0x5e704b*/
     || (a1->members.super.process->GetMovementFlags(a1->members.super.process) & 0x400) == 0
     || (a1->members.super.process->GetMovementFlags(a1->members.super.process) & 0x800) != 0)
    && a1->members.DeadState != 3 )
  {
    if ( !unk_B333B8 ) /*0x5e7051*/
      goto LABEL_15; /*0x5e7051*/
    v9 = Game_RandomLargeInteger(0) & 0x80000007; /*0x5e7064*/
    v8 = v9 == 0; /*0x5e7064*/
    if ( v9 < 0 ) /*0x5e7069*/
      v8 = (((_BYTE)v9 - 1) | 0xFFFFFFF8) == 0xFFFFFFFF; /*0x5e706f*/
    if ( v8 ) /*0x5e7070*/
    {
LABEL_15:
      if ( a1->vtbl->GetCombatController(a1) ) /*0x5e707c*/
      {
        v10 = ((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->vtbl->GetCombatController)( /*0x5e709b*/
                a1,
                a4,
                a3,
                a2);
        sub_6167F0(v10, a2, a3, a4, a5, a6, a7); /*0x5e709f*/
      }
      else
      {
        process = a1->members.super.process; /*0x5e70a9*/
        if ( process ) /*0x5e70ae*/
        {
          v12 = (int *)((int (__usercall *)@<eax>(LowProcess *@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))process->GetUnk220Element)( /*0x5e70c4*/
                         process,
                         0,
                         a4,
                         a3,
                         a2);
          sub_616530(a2, a4, a3, &v12, (TESObjectREFR *)a1, a5, a6, a7); /*0x5e70d5*/
        }
      }
    }
  }
}
