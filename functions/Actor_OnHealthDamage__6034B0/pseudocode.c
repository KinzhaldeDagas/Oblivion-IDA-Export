int __userpurge Actor_OnHealthDamage@<eax>(
        Actor *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        int a6)
{
  Actor *v8; // [esp+Ch] [ebp-4h]
  float retaddr; // [esp+10h] [ebp+0h]

  if ( !((unsigned __int8 (__usercall *)@<al>(Actor *@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))a1->vtbl->super.super.IsDead)(
          a1,
          0,
          a4,
          a3,
          a2)
    && ((double (__thiscall *)(Actor *, int))a1->vtbl->GetAV_F)(a1, 8) < fConstant_1 )
  {
    Actor_Kill(a1, a2, a3, retaddr, v8, SLODWORD(retaddr));
  }
  return Actor_OnHealthDamage_::Done(a5, a6);
}
