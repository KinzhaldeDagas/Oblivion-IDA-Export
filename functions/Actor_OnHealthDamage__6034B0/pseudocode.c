// ODismemberment: Oblivion health-damage kill gate. xOBSE already hooks inside this function at 0x6034CB; avoid competing patch here until hook strategy is finalized.
void __userpurge Actor_OnHealthDamage(
        Actor *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        int a6)
{
  Actor *v7; // [esp+Ch] [ebp-4h]
  float retaddr; // [esp+10h] [ebp+0h]

  if ( !((unsigned __int8 (__usercall *)@<al>(Actor *@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))a1->vtbl->super.super.IsDead)( /*0x6034dc*/
          a1,
          0,
          a4,
          a3,
          a2)
    && ((double (__thiscall *)(Actor *, int))a1->vtbl->GetAV_F)(a1, 8) < fConstant_1 )
  {
    Actor_Kill(a1, a2, a3, retaddr, v7, SLODWORD(retaddr)); /*0x6034ed*/
  }
  Actor_OnHealthDamage_::Done(a5, a6); /*0x6034ee*/
}
/* Orphan comments:
3DTheft decode 2026-05-14: Actor_OnHealthDamage checks current health through GetAV_F(Health=8) and kills when below 1; plugin monitors actor health to force flee again before death.
*/
