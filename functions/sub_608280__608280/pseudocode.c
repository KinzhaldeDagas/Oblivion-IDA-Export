double __cdecl sub_608280(MobileObject *a1)
{
  bhkCharacterProxy *CharProxy; // eax
  bhkCharacterProxy *v2; // eax
  float v4; // [esp+8h] [ebp-14h]
  int v5; // [esp+10h] [ebp-Ch]
  float v6; // [esp+14h] [ebp-8h]
  float v7; // [esp+18h] [ebp-4h]
  float retaddr; // [esp+1Ch] [ebp+0h]
  float v9; // [esp+20h] [ebp+4h]

  v5 = ((int (__thiscall *)(MobileObject *, int))a1->vtbl[1].super.super.Unk_20)(a1, 7);// Arrow gravity reads the shooter's live Luck actor value (AV 7). /*0x608294*/
  v4 = (float)((int (__thiscall *)(MobileObject *))a1->vtbl[1].super.super.Unk_20)(a1);// Arrow gravity reads live Marksman (AV 0x1C); Calc_LuckModifiedSkill combines it with Luck and clamps the result to 0..100. /*0x6082ae*/
  v6 = Combat_CalculateArrowGravitySkillScale(1.0, v4, 0x1C);// Skill gravity scale = max(0, fArrowGravityBase - fArrowGravityMult * clamp(Marksman + Luck*fActorLuckSkillMult + iActorLuckSkillBase, 0, 100)). The caller supplies full-strength weight 1.0, so fArrowWeakGravity is not selected. /*0x6082bc*/
  retaddr = 1.0; /*0x6082c7*/
  CharProxy = MobileObject_GetCharProxy(a1);    // Fetches the shooter's bhkCharacterProxy. Its +0x58 vfunc returns the low-level Havok world/runtime context used below. /*0x6082cb*/
  if ( (*(int (__thiscall **)(bhkCharacterProxy *, int))(*(_DWORD *)CharProxy + 0x58))(CharProxy, v5) ) /*0x6082d7*/
  {
    v2 = MobileObject_GetCharProxy(a1); /*0x6082df*/
    v9 = *(float *)((*(int (__thiscall **)(bhkCharacterProxy *, float))(*(_DWORD *)v2 + 0x58))( /*0x6082f6*/
                      v2,
                      COERCE_FLOAT(LODWORD(v6)))
                  + 0x28)
       * dbl_A372E0;                            // Reads signed Havok world gravity Z at runtimeContext+0x28, converts it by ~7 game units per centimeter, then multiplies by the skill gravity scale.
    *(float *)&a1 = v9 * v7; /*0x608302*/
  }
  return *(float *)&a1; /*0x60830a*/
}
