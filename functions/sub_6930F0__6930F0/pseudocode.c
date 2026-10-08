bool sub_6930F0()
{
  bool result; // al

  result = reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_DetectLifeRange) > 0; /*0x693104*/
  unk_B3C0AB = result; /*0x693107*/
  return result; /*0x69310c*/
}
