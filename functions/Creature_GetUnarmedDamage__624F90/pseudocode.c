int __usercall Creature_GetUnarmedDamage@<eax>(Actor *this@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  TESForm *ActorBaseForm; // eax
  double v5; // st7
  float FatigueFraction; // [esp+0h] [ebp-Ch]
  int DamageForForm; // [esp+4h] [ebp-8h]

  ActorBaseForm = Actor_GetActorBaseForm(this, 0);
  DamageForForm = (unsigned __int16)TESAttackDamageForm_GetDamageForForm(ActorBaseForm);
  FatigueFraction = Actor_GetFatigueFraction(this, a2, a3);
  v5 = Calc_CreatureAttackDamage(FatigueFraction, DamageForForm);
  return Double_To_SInt32(v5);
}
