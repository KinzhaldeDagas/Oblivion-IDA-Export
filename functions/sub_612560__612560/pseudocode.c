double __cdecl sub_612560(Actor *a1, char *a2, float a3, int a4)
{
  double result; // st7
  int vtbl; // ebx
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

  result = 0.0;
  v13 = 0.0;
  if ( a2 )
  {
    if ( TESHealthForm_GetHealthForForm(a2) )
    {
      vtbl = (int)a1->vtbl;
      WeaponSkillAV = TESObjectWEAP_GetWeaponSkillAV(a2);
      v16 = ((double (__thiscall *)(Actor *, int))*(_DWORD *)(vtbl + 0x288))(a1, WeaponSkillAV);
      v15 = a1->vtbl->GetAV_F(a1, kActorVal_Luck);
      v14 = (float)a1->vtbl->GetActorValue(a1, kActorVal_Strength);
      FatigueFraction = Actor_GetFatigueFraction(a1, vtbl, (int)a2);
      v12 = flt_A30634;
      v11 = Double_To_SInt32(v14);
      v10 = Double_To_SInt32(v15);
      v9 = Double_To_SInt32(v16);
      return (float)sub_547140(a2, a4, a3, v9, v10, v11, FatigueFraction, v12);
    }
    return v13;
  }
  return result;
}
