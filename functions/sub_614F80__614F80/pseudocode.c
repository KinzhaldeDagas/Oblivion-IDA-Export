// Adds unique non-self actor to CombatController+0x15C ally cache and increments +0x178; caller supplies combat-group friendly entries.
char __userpurge sub_614F80@<al>(int a1@<ecx>, char bl0@<bl>, int *a2)
{
  char result; // al
  _DWORD *v5; // ecx
  int v6; // edx
  void *v7; // ecx
  int *v8; // eax
  TESObjectREFR *v9; // eax
  double DistanceBetween; // st7

  result = 0; /*0x614f86*/
  if ( a2 && a2 != *(int **)(a1 + 0x3C) ) /*0x614f91*/
  {
    v5 = (_DWORD *)(a1 + 0x15C); /*0x614f93*/
    v6 = a1 + 0x15C; /*0x614f99*/
    if ( a1 == 0xFFFFFEA4 ) /*0x614f9d*/
    {
LABEL_6:
      BSSimpleList_PushFront(v5, (int)a2); /*0x614fab*/
      v7 = *(void **)(a1 + 0x3C); /*0x614fb2*/
      ++*(_DWORD *)(a1 + 0x178);                // CombatController+0x178 counts unique cached allies. /*0x614fba*/
      v8 = Actor_GetEffectiveCombatStyle(v7);   // If TESCombatStyle::kFlag_IgnoreAlliesInArea (0x04) is set, skip the nearby-ally +0x17C calculation (ally is still cached). /*0x614fc0*/
      if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*v8 + 0x16C))(v8, 4) ) /*0x614fd1*/
      {
        return 1; /*0x615007*/
      }
      else
      {
        v9 = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x614fdb*/
        DistanceBetween = TESObjectREFR_GetSurfaceDistance(a2, (TESObjectREFR *)a2, v9, 0, bl0); /*0x614fe2*/
        result = 1; /*0x614ff4*/
        if ( g_GameSettingStringPointers_B36CD8[0x178] > DistanceBetween )// If combat style flag 4 is clear, +0x17C is set when cached ally is closer to current target than fAICombatNoAreaEffectAllyDistance (default 350.0). /*0x614ff9*/
          *(_BYTE *)(a1 + 0x17C) = 1; /*0x614ffb*/
      }
    }
    else
    {
      while ( *(int **)v6 != a2 ) /*0x614fa2*/
      {
        v6 = *(_DWORD *)(v6 + 4); /*0x614fa4*/
        if ( !v6 ) /*0x614fa9*/
          goto LABEL_6; /*0x614fa9*/
      }
    }
  }
  return result; /*0x615002*/
}
