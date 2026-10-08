void __thiscall calculateItemMultiplicationFromDisposition(TESObjectREFR *this, Actor *targetNpc)
{
  SInt32 v3; // eax
  signed int v4; // eax
  SInt32 v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+0h] [ebp-8h]
  float retaddr; // [esp+8h] [ebp+0h]

  v5 = targetNpc->vtbl->GetActorValue(targetNpc, kActorVal_Luck); /*0x5e11b3*/
  v3 = ((int (__thiscall *)(Actor *))targetNpc->vtbl->GetActorValue)(targetNpc); /*0x5e11c0*/
  retaddr = Calc_LuckModifiedSkill(v3, 0x1D); /*0x5e11c8*/
  v6 = targetNpc->vtbl->GetDisposition(targetNpc, targetNpc, v5); /*0x5e11e0*/
  v4 = Double_To_SInt32(*(float *)&targetNpc); /*0x5e11e1*/
  calcMultiplierFromMerchantLevelDispo(v4, v6); /*0x5e11e7*/
}
