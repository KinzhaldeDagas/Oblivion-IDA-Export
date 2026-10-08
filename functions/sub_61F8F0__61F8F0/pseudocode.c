// Combat action choice consumes fatigue and current target state; SmartAI v0.3 only re-ranks existing targets.
int __userpurge sub_61F8F0@<eax>(
        int a1@<ecx>,
        int a2@<ebp>,
        double a3@<st2>,
        double a4@<st1>,
        double FatigueFraction@<st0>,
        char a6,
        float a7,
        float a8,
        int a9,
        int a10,
        char a11,
        bool *a12,
        _BYTE *a13)
{
  int v14; // edi
  bool *v15; // ebp
  int v16; // ebx
  int CurrentTarget; // ebp
  int *EffectiveCombatStyle; // eax
  bool IsTargetWithinRangedDistance; // al
  bool v20; // bl
  _DWORD *v21; // eax
  int result; // eax
  ActorAnimData *v23; // eax
  _DWORD *v24; // eax
  float v25; // [esp+0h] [ebp-28h]
  float v26; // [esp+4h] [ebp-24h]
  float v27; // [esp+4h] [ebp-24h]
  float surfaceDistance; // [esp+8h] [ebp-20h]
  size_t surfaceDistancea; // [esp+8h] [ebp-20h]
  size_t surfaceDistanceb; // [esp+8h] [ebp-20h]
  char maximumDistance; // [esp+Ch] [ebp-1Ch]
  float maximumDistancea; // [esp+Ch] [ebp-1Ch]
  char v33; // [esp+10h] [ebp-18h]
  Actor *v35; // [esp+24h] [ebp-4h]

  *a13 = 0; /*0x61f8f9*/
  v14 = 0xFF; /*0x61f8fc*/
  if ( !CombatController_GetCurrentTarget(a1) ) /*0x61f908*/
    return v14; /*0x61f908*/
  if ( Actor_IsNPC(*(Actor **)(a1 + 0x3C)) && Actor_IsSwimming(*(Actor **)(a1 + 0x3C)) ) /*0x61f91f*/
  {
    v15 = a12; /*0x61f928*/
    *a12 = 0; /*0x61f92c*/
  }
  else
  {
    v16 = *(_DWORD *)(a1 + 0x3C); /*0x61f932*/
    CurrentTarget = CombatController_GetCurrentTarget(a1); /*0x61f941*/
    v35 = *(Actor **)(a1 + 0x3C); /*0x61f949*/
    v33 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0x25C))(v16); /*0x61f956*/
    maximumDistance = (*(int (__thiscall **)(int))(*(_DWORD *)CurrentTarget + 0x19C))(CurrentTarget); /*0x61f967*/
    FatigueFraction = Actor_GetFatigueFraction(v35, (int)v35, 0xFF); /*0x61f96b*/
    __asm { fstp    [esp+24h+var_24]; Combat attack/action selection reads Actor_GetFatigueFraction before CombatStyle_RollAttackChance. } /*0x61f973*/
    EffectiveCombatStyle = Actor_GetEffectiveCombatStyle(v35); /*0x61f976*/
    v15 = a12; /*0x61f981*/
    *a12 = CombatStyle_RollAttackChance(EffectiveCombatStyle, v26, a11, maximumDistance, v33); /*0x61f988*/
  }
  if ( *(_DWORD *)(a1 + 0x6C) == 4 ) /*0x61f98f*/
  {
    __asm { fld     dword ptr ds:0B36F30h } /*0x61f991*/
    __asm
    {
      fadd    [esp+18h+arg_8]
      fstp    [esp+18h+arg_8]
    }
    if ( Game_RandomLargeInteger(0) % 0x64 < 2 ) /*0x61f9b4*/
    {
      __asm /*0x61f9b6*/
      {
        fld     [esp+14h+arg_8]
        fadd    qword ptr ds:0A309F0h
        fstp    [esp+14h+arg_8]
      }
    }
  }
  __asm { fld     [esp+14h+arg_8] } /*0x61f9c4*/
  __asm { fstp    [esp+20h+maximumDistance]; maximumDistance }
  __asm
  {
    fld     [esp+20h+arg_4]
    fstp    [esp+20h+surfaceDistance]; surfaceDistance
  }
  IsTargetWithinRangedDistance = CombatController_IsTargetWithinRangedDistance( /*0x61f9da*/
                                   (void *)a1,
                                   surfaceDistance,
                                   maximumDistancea,
                                   0);
  v20 = IsTargetWithinRangedDistance; /*0x61f9e4*/
  if ( !a6 ) /*0x61f9e6*/
  {
    if ( !*v15 ) /*0x61f9e8*/
    {
      if ( IsTargetWithinRangedDistance ) /*0x61f9f4*/
      {
        HIDWORD(surfaceDistancea) = off_B241C4; /*0x61fa07*/
        LODWORD(surfaceDistancea) = 0; /*0x61fa0e*/
        v21 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C)); /*0x61fa12*/
        return (ActorAnimData_GetNextTextKeySuffixChar(v21, 0xFF, surfaceDistancea, 0, a2) != 0x6C) + 0x14; /*0x61fa2e*/
      }
      return v14; /*0x61f9f4*/
    }
    goto LABEL_17; /*0x61f9ec*/
  }
  v23 = (ActorAnimData *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C)); /*0x61fa3e*/
  if ( ActorAnimData_GetSlotActionState(v23, 3) == 2 ) /*0x61fa4a*/
  {
    if ( *v15 ) /*0x61fa4c*/
    {
LABEL_17:
      __asm { fld     [esp+14h+arg_8] } /*0x61fa90*/
      __asm { fstp    [esp+28h+var_24]; float }
      __asm
      {
        fld     [esp+28h+arg_4]
        fstp    [esp+28h+var_28]; float
      }
      return CombatController_SelectPowerAttack(a1, a3, a4, FatigueFraction, v25, v27, a9, a10, 0); /*0x61fab5*/
    }
    if ( v20 ) /*0x61fa54*/
    {
      HIDWORD(surfaceDistanceb) = off_A70EA4; /*0x61fa63*/
      LODWORD(surfaceDistanceb) = 3; /*0x61fa68*/
      v24 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C)); /*0x61fa6a*/
      result = 0x15 - (ActorAnimData_FindFirstTextKeyWithPrefix(v24, a1, surfaceDistanceb, 0, a2) != 0xFFFFFFFF); /*0x61fa85*/
      *a13 = 1; /*0x61fa88*/
      return result; /*0x61fa8d*/
    }
  }
  return v14; /*0x61fa2b*/
}
/* Orphan comments:
Combat attack/action selection reads Actor_GetFatigueFraction before CombatStyle_RollAttackChance.
*/
