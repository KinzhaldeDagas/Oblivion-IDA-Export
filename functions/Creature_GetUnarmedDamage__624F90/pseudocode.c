int __usercall Creature_GetUnarmedDamage@<eax>(Actor *this@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  TESForm *ActorBaseForm; // eax
  double v5; // st7
  float FatigueFraction; // [esp+0h] [ebp-Ch]
  int DamageForForm; // [esp+4h] [ebp-8h]

  ActorBaseForm = Actor_GetActorBaseForm(this, 0); /*0x624f95*/
  DamageForForm = (unsigned __int16)TESAttackDamageForm_GetDamageForForm(ActorBaseForm); /*0x624fa6*/
  FatigueFraction = Actor_GetFatigueFraction(this, a2, a3); /*0x624faf*/
  v5 = Calc_CreatureAttackDamage(FatigueFraction, DamageForForm); /*0x624fb2*/
  return Double_To_SInt32(v5); /*0x624fba*/
}
