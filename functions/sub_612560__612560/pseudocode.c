double __cdecl sub_612560(Actor *a1, char *a2, float a3, int a4)
{
  double result; // st7
  ActorVtbl *vtbl; // ebx
  int WeaponSkillAV; // eax
  int v9; // eax
  int v10; // [esp+14h] [ebp-28h]
  int v11; // [esp+18h] [ebp-24h]
  float v12; // [esp+20h] [ebp-1Ch]
  float v13; // [esp+30h] [ebp-Ch]
  float v14; // [esp+30h] [ebp-Ch]
  float v15; // [esp+34h] [ebp-8h]
  float v16; // [esp+38h] [ebp-4h]
  float FatigueFraction; // [esp+44h] [ebp+8h]

  result = 0.0; /*0x612563*/
  v13 = 0.0; /*0x61256a*/
  if ( a2 ) /*0x612570*/
  {
    if ( TESHealthForm_GetHealthForForm(a2) ) /*0x612579*/
    {
      vtbl = a1->vtbl; /*0x61258f*/
      WeaponSkillAV = TESObjectWEAP_GetWeaponSkillAV(a2);// BladeSkillsRestored schema-4 owner decode: ECX is TESObjectWEAP and ESI is the Actor argument. Call returns at 0x612598; downstream weapon-damage wrapper returns at 0x5471CC. Patch passes ESI and binds the resolved player/NPC sidecar level to the exact pair. /*0x612593*/
      v16 = vtbl->GetAV_F(a1, (AVCode)WeaponSkillAV); /*0x6125a3*/
      v15 = a1->vtbl->GetAV_F(a1, kActorVal_Luck); /*0x6125b5*/
      v14 = (float)a1->vtbl->GetActorValue(a1, kActorVal_Strength); /*0x6125d1*/
      FatigueFraction = Actor_GetFatigueFraction(a1, (int)vtbl, (int)a2); /*0x6125da*/
      v12 = kTerrainLODQuadRayDirectionZ; /*0x6125e7*/
      v11 = Double_To_SInt32(v14); /*0x6125ff*/
      v10 = Double_To_SInt32(v15); /*0x612609*/
      v9 = Double_To_SInt32(v16); /*0x61260a*/
      return (float)AI_CalculateWeaponAndEnchantmentThreat(a2, a4, a3, v9, v10, v11, FatigueFraction, v12); /*0x612623*/
    }
    return v13; /*0x61262c*/
  }
  return result; /*0x612630*/
}
