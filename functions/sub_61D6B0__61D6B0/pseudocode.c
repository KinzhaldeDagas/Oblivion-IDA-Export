double __userpurge sub_61D6B0@<st0>(int a1@<ecx>, double a2@<st1>, int a3)
{
  int *EffectiveCombatStyle; // eax
  int *v6; // edi
  double result; // st7
  int *v8; // edi
  float *SafeFloatPointer; // ebx
  int CurrentTarget; // eax
  bool v11; // zf
  char *Name; // eax
  float v13; // [esp+0h] [ebp-20h]
  float v14; // [esp+4h] [ebp-1Ch]

  if ( a3 && *(_DWORD *)(a1 + 0x70) != 8 ) /*0x61d6cc*/
  {
    if ( !CombatController_GetCurrentTarget(a1) ) /*0x61d6d3*/
      goto LABEL_11; /*0x61d6d3*/
    EffectiveCombatStyle = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x61d6e3*/
    (*(void (__thiscall **)(int *))(*EffectiveCombatStyle + 0x154))(EffectiveCombatStyle); /*0x61d6f2*/
    if ( a2 <= *(float *)&SrcStr ) /*0x61d6ff*/
      goto LABEL_11; /*0x61d6ff*/
    v6 = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x61d70f*/
    result = CombatController_GetCachedTargetSurfaceDistance(a1, (char)v6); /*0x61d711*/
    (*(void (__thiscall **)(int *))(*v6 + 0x154))(v6); /*0x61d724*/
    if ( a2 > result ) /*0x61d72f*/
    {
      if ( a3 == *(_DWORD *)(a1 + 0x94) || a3 == *(_DWORD *)(a1 + 0x98) || a3 == *(_DWORD *)(a1 + 0x9C) ) /*0x61d747*/
        goto LABEL_11; /*0x61d747*/
      if ( *(_BYTE *)(a1 + 0x1AD) ) /*0x61d749*/
        return result; /*0x61d750*/
    }
    v8 = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x61d763*/
    SafeFloatPointer = GameSetting_GetSafeFloatPointer(unk_B37298); /*0x61d76c*/
    v14 = ((double (__thiscall *)(int *))*(_DWORD *)(*v8 + 0x154))(v8); /*0x61d77b*/
    result = *SafeFloatPointer; /*0x61d781*/
    v13 = *SafeFloatPointer; /*0x61d783*/
    CurrentTarget = CombatController_GetCurrentTarget(a1); /*0x61d786*/
    sub_61CAA0(a1, (char)v8, CurrentTarget, v13, v14); /*0x61d78e*/
LABEL_11:
    v11 = *(_DWORD *)(a1 + 0x70) == 8; /*0x61d798*/
    *(_DWORD *)(a1 + 0x8C) = a3; /*0x61d79b*/
    if ( !v11 ) /*0x61d7a1*/
    {
      if ( unk_B3B908 ) /*0x61d7a3*/
      {
        Name = TESObjectREFR_GetName(*(TESObjectREFR **)(a1 + 0x3C)); /*0x61d7b4*/
        Interface_ConsolePrint("%.20s is going to %s!", Name, "...just kinda stand around"); /*0x61d7bf*/
      }
      *(float *)(a1 + 0x188) = kTerrainLODQuadRayDirectionZ; /*0x61d7cd*/
    }
    *(_DWORD *)(a1 + 0x70) = 8; /*0x61d7d3*/
  }
  return result; /*0x61d7d8*/
}
