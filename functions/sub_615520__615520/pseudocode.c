// Caches desired combat distance based on active combat mode and ranged/melee data.
float __thiscall CombatController_GetDesiredCombatDistance(void *this)
{                                               // CombatController+0x188 caches desired combat distance. Negative means invalid; mode changes reset it. Modes 2/4 cache the optimal ranged bound computed from projectile/spell limits and combat-style multipliers.
  double v2; // st7
  unsigned int v3; // eax
  int v4; // edi
  double v5; // st7
  int v6; // ecx
  float outOptimalDistance; // [esp+Ch] [ebp-Ch] BYREF
  double outMaximumDistance; // [esp+10h] [ebp-8h] BYREF

  if ( *((float *)this + 0x62) < 0.0 ) /*0x615533*/
  {
    v3 = *((_DWORD *)this + 0x1C); /*0x615542*/
    outOptimalDistance = 0.0; /*0x615545*/
    if ( v3 < 2 || v3 == 3 || v3 == 2 || v3 == 4 || v3 == 0xD ) /*0x615565*/
    {
      switch ( v3 ) /*0x61557b*/
      {
        case 0u: /*0x61557b*/
        case 3u: /*0x61557b*/
        case 0xDu: /*0x61557b*/
          v4 = *((_DWORD *)this + 0xF); /*0x615582*/
          outMaximumDistance = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v4 + 0x26C))(v4); /*0x615593*/
          outOptimalDistance = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v4 + 0xEC))(v4) * outMaximumDistance; /*0x6155a8*/
          v2 = outOptimalDistance; /*0x6155ac*/
          *((float *)this + 0x62) = outOptimalDistance; /*0x6155b0*/
          break; /*0x6155ba*/
        case 1u: /*0x61557b*/
          if ( CombatController_GetEquippedWeaponForm(this) ) /*0x6155f6*/
            v5 = *(float *)(CombatController_GetEquippedWeaponForm(this) + 0x98); /*0x615606*/
          else
            v5 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**((_DWORD **)this + 0xF) + 0x26C))(*((_DWORD *)this + 0xF)); /*0x615619*/
          v6 = *((_DWORD *)this + 0xF); /*0x61561b*/
          outOptimalDistance = v5; /*0x61561e*/
          outMaximumDistance = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 0xEC))(v6); /*0x61562c*/
          outOptimalDistance = Calc_GetCombatDistance(outOptimalDistance) * outMaximumDistance; /*0x615645*/
          v2 = outOptimalDistance; /*0x615649*/
          *((float *)this + 0x62) = outOptimalDistance; /*0x61564d*/
          break; /*0x615657*/
        case 2u: /*0x61557b*/
        case 4u: /*0x61557b*/
          outOptimalDistance = 0.0; /*0x61565c*/
          *(float *)&outMaximumDistance = 0.0; /*0x615661*/
          CombatController_GetRangedDistanceBounds(this, &outOptimalDistance, (float *)&outMaximumDistance); /*0x61566c*/
          v2 = outOptimalDistance; /*0x61567a*/
          *((float *)this + 0x62) = outOptimalDistance; /*0x61567e*/
          break; /*0x615688*/
      }
    }
    else
    {
      v2 = outOptimalDistance; /*0x61568c*/
      *((float *)this + 0x62) = outOptimalDistance; /*0x615690*/
    }
  }
  else
  {
    return *((float *)this + 0x62); /*0x615537*/
  }
  return v2; /*0x61553d*/
}
