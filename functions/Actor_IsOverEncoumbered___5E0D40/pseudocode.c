bool __thiscall Actor_IsOverEncoumbered_(Actor *a1)
{
  float v3; // [esp+0h] [ebp-14h]
  float v4; // [esp+8h] [ebp-Ch]

  v3 = a1->vtbl->GetAV_F(a1, kActorVal_Strength); /*0x5e0d53*/
  Calc_ActorBaseEncumbrance(v3); /*0x5e0d56*/
  return v4 < (double)a1->vtbl->GetActorValue(a1, kActorVal_Encumbrance); /*0x5e0d8b*/
}
