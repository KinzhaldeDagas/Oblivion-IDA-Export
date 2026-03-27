void __thiscall calculateItemMultiplicationFromDisposition(TESObjectREFR *this, Actor *targetNpc)
{
  int v3; // eax
  signed int v4; // eax
  SInt32 v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+0h] [ebp-8h]
  float retaddr; // [esp+8h] [ebp+0h]

  v5 = targetNpc->vtbl->GetActorValue(targetNpc, kActorVal_Luck);
  v3 = ((int (__thiscall *)(Actor *))targetNpc->vtbl->GetActorValue)(targetNpc);
  retaddr = Calc_LuckModifiedSkill(v3, 0x1D);
  v6 = targetNpc->vtbl->GetDisposition(targetNpc, targetNpc, v5);
  v4 = Double_To_SInt32(*(float *)&targetNpc);
  calcMultiplierFromMerchantLevelDispo(v4, v6);
}
