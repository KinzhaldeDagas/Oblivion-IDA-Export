bool __thiscall CommandHumanoidEffect_ValidTarget(float *this, void *a2)
{
  TESObjectREFR *v3; // eax
  Actor *v4; // esi
  unsigned __int16 Level; // ax
  float v7; // [esp+10h] [ebp+4h]

  v3 = (TESObjectREFR *)OblivionDynamicCast(
                          a2,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&MagicTarget `RTTI Type Descriptor',
                          &Character `RTTI Type Descriptor',
                          0);
  v4 = (Actor *)v3;
  if ( !v3 || Actor_IsPlayer(v3) )
    return 0;
  v7 = *(this + 6);
  Level = Actor_GetLevel(v4);
  return Calc_MagnitudeAffectsLevel(Level, v7);
}
