// Tests surfaceDistance against maximumDistance plus a combat-style-controlled tolerance. Ranged weapon modes 2 and 4 suppress that extra tolerance.
bool __thiscall CombatController_IsTargetWithinRangedDistance(
        void *this,
        float surfaceDistance,
        float maximumDistance,
        int unused)
{
  int *EffectiveCombatStyle; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st5
  int v9; // esi
  float maximumDistancea; // [esp+10h] [ebp+8h]

  EffectiveCombatStyle = Actor_GetEffectiveCombatStyle(*((void **)this + 0xF)); /*0x613449*/
  v6 = maximumDistance; /*0x61345a*/
  if ( (*(char (__thiscall **)(int *))(*EffectiveCombatStyle + 0x11C))(EffectiveCombatStyle) < 0x64 /*0x613462*/
    && *((_DWORD *)this + 0x1C) )
  {
    v7 = dbl_A3C770 * v6; /*0x61346e*/
    v8 = dbl_A46970; /*0x613470*/
    if ( v8 <= v7 ) /*0x61347d*/
      v7 = v8; /*0x613483*/
  }
  else
  {
    v7 = 0.0; /*0x613487*/
  }
  v9 = *((_DWORD *)this + 0x1C); /*0x613489*/
  maximumDistancea = v7; /*0x61348c*/
  if ( v9 == 2 || v9 == 4 ) /*0x613498*/
    maximumDistancea = 0.0; /*0x61349c*/
  return surfaceDistance <= v6 + maximumDistancea; /*0x6134b7*/
}
