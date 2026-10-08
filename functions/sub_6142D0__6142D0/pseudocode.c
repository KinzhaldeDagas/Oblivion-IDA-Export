// Combines projectile/spell bounds with TESCombatStyle optimal/max range multipliers (SDK +0x6C/+0x70).
void __thiscall CombatController_GetRangedDistanceBounds(
        void *this,
        float *outOptimalDistance,
        float *outMaximumDistance)
{
  float *v3; // ebx
  float **v4; // edi
  double v6; // st7
  bool v7; // zf
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  EffectSetting *FXEffect; // eax
  int ProjectileType; // eax
  void **v13; // eax
  EffectSetting *v14; // eax
  int v15; // eax
  int *EffectiveCombatStyle; // eax
  int *v17; // eax
  double v18; // st7
  double v19; // st5
  double v20; // st5
  float v21; // [esp+Ch] [ebp-10h] BYREF
  float v22; // [esp+10h] [ebp-Ch] BYREF
  float v23; // [esp+14h] [ebp-8h]
  float v24; // [esp+18h] [ebp-4h]

  v3 = outMaximumDistance; /*0x6142da*/
  v4 = (float **)outOptimalDistance; /*0x6142e0*/
  *outOptimalDistance = flt_A342A4; /*0x6142e4*/
  v6 = flt_A342A0; /*0x6142e8*/
  *v3 = flt_A342A0; /*0x6142ee*/
  v7 = *((_DWORD *)this + 0x1C) == 2; /*0x6142f0*/
  v21 = *(float *)v4; /*0x6142f6*/
  v22 = v6; /*0x6142fa*/
  outOptimalDistance = *v4; /*0x614300*/
  *(float *)&outMaximumDistance = v6; /*0x614304*/
  if ( v7 ) /*0x614308*/
  {
    v8 = *((_DWORD *)this + 0xF); /*0x61430e*/
    if ( v8 ) /*0x614313*/
    {
      v9 = *(_DWORD *)(v8 + 0x58); /*0x614319*/
      if ( v9 ) /*0x61431e*/
      {
        if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 0xEC))(v9, 1) ) /*0x61432e*/
        {
          if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*((_DWORD *)this + 0xF) + 0x58) + 0xEC))( /*0x614346*/
                             *(_DWORD *)(*((_DWORD *)this + 0xF) + 0x58),
                             1)
                         + 8) )
          {
            if ( *(_BYTE *)(CombatController_GetEquippedWeaponForm(this) + 0x90) == 4 ) /*0x61435a*/
              v10 = *(_DWORD *)(CombatController_GetEquippedWeaponForm(this) + 0x64); /*0x614366*/
            else
              v10 = 0; /*0x61436b*/
            if ( v10 ) /*0x61436f*/
            {
              FXEffect = MagicItem_GetFXEffect((void *)(v10 + 0x18), 2u); /*0x614376*/
              if ( FXEffect ) /*0x61437d*/
              {
                ProjectileType = EffectSetting_GetProjectileType(FXEffect); /*0x61438b*/
                Magic_GetProjectileDistances(ProjectileType, (float *)&outOptimalDistance, (float *)&outMaximumDistance); /*0x614391*/
              }
            }
            else
            {
              outOptimalDistance = (float *)LODWORD(g_GameSettingStringPointers_B36CD8[0x10E]); /*0x6143a1*/
              outMaximumDistance = (float *)LODWORD(g_GameSettingStringPointers_B36CD8[0x110]); /*0x6143ab*/
            }
          }
        }
      }
    }
  }
  v13 = *((void ***)this + 0x20); /*0x6143af*/
  if ( v13 && *v13 ) /*0x6143b9*/
  {
    v14 = MagicItem_GetFXEffect(*v13, 2u); /*0x6143c2*/
    if ( v14 ) /*0x6143c9*/
    {
      v15 = EffectSetting_GetProjectileType(v14); /*0x6143d7*/
      Magic_GetProjectileDistances(v15, &v21, &v22); /*0x6143dd*/
    }
  }
  else
  {
    v21 = *(float *)&outOptimalDistance; /*0x6143eb*/
    v22 = *(float *)&outMaximumDistance; /*0x6143f3*/
  }
  EffectiveCombatStyle = Actor_GetEffectiveCombatStyle(*((void **)this + 0xF)); /*0x6143fa*/
  v23 = ((double (__thiscall *)(int *))*(_DWORD *)(*EffectiveCombatStyle + 0x144))(EffectiveCombatStyle); /*0x61440b*/
  v17 = Actor_GetEffectiveCombatStyle(*((void **)this + 0xF)); /*0x614412*/
  v24 = ((double (__thiscall *)(int *))*(_DWORD *)(*v17 + 0x148))(v17); /*0x614423*/
  v18 = *(float *)&outOptimalDistance; /*0x614427*/
  if ( v21 <= (double)*(float *)&outOptimalDistance ) /*0x614436*/
    v18 = v21; /*0x61443c*/
  v21 = v18; /*0x61443e*/
  v19 = 1.0; /*0x614453*/
  if ( v23 != 0.0 ) /*0x614455*/
    v19 = v23; /*0x61445f*/
  *(float *)&outOptimalDistance = v19; /*0x614459*/
  *(float *)v4 = *(float *)&outOptimalDistance * v21; /*0x61446d*/
  v20 = *(float *)&outMaximumDistance; /*0x61446f*/
  if ( v22 <= (double)*(float *)&outMaximumDistance ) /*0x61447e*/
    v20 = v22; /*0x614484*/
  *(float *)&outMaximumDistance = v20; /*0x614486*/
  if ( v24 == 0.0 ) /*0x614497*/
    *(float *)&outOptimalDistance = 1.0; /*0x61449c*/
  else
    *(float *)&outOptimalDistance = v24; /*0x6144b5*/
  *v3 = *(float *)&outOptimalDistance * *(float *)&outMaximumDistance; /*0x6144a9*/
}
