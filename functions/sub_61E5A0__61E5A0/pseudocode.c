void __userpurge sub_61E5A0(
        int a1@<ecx>,
        int a2@<ebp>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        double a6@<st3>,
        double a7@<st4>,
        double a8@<st5>,
        float a9,
        float a10)
{
  int v11; // eax
  ActorAnimData *v12; // eax
  unsigned __int16 AnimGroupFromField8Value; // ax
  Actor *v14; // edi
  TESObjectREFR *CurrentTarget; // eax
  _DWORD **v16; // eax
  _DWORD **v17; // eax
  _DWORD **v18; // eax
  _DWORD **v19; // eax
  _DWORD *v20; // eax
  int v21; // ebx
  int v22; // eax
  int v23; // edi
  int *EffectiveCombatStyle; // eax
  int v25; // eax
  void *v26; // edi
  int v27; // ebp
  char v28; // al
  float v29; // edx
  int *v30; // eax
  _DWORD **v31; // edi
  int v32; // eax
  int *v33; // eax
  double v34; // st7
  int WeaponSkillLevel; // [esp-8h] [ebp-3Ch]
  int v40; // [esp-4h] [ebp-38h]
  float v41; // [esp+0h] [ebp-34h]
  SInt32 v42; // [esp+0h] [ebp-34h]
  float v43; // [esp+4h] [ebp-30h]
  float v44; // [esp+8h] [ebp-2Ch]
  char v45; // [esp+8h] [ebp-2Ch]
  char v47; // [esp+10h] [ebp-24h]
  int v48; // [esp+10h] [ebp-24h]
  int v49; // [esp+24h] [ebp-10h]
  int targetAttacking; // [esp+28h] [ebp-Ch]
  int targetAttackinga; // [esp+28h] [ebp-Ch]
  bool IsBlocking; // [esp+2Ch] [ebp-8h]

  if ( *(_DWORD *)(a1 + 0x74) == 3 ) /*0x61e5aa*/
  {
    if ( CombatController_GetCurrentTarget(a1) ) /*0x61e5b0*/
    {
      if ( *(_BYTE *)(a1 + 0xC4) ) /*0x61e5bd*/
      {
        v11 = *(_DWORD *)(a1 + 0x70); /*0x61e5ca*/
        if ( v11 != 2 /*0x61e5ea*/
          && v11 != 4
          && !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x25C))(*(_DWORD *)(a1 + 0x3C)) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2DC))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58)) ) /*0x61e602*/
          {
            if ( !(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C)) /*0x61e634*/
              || (v12 = (ActorAnimData *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C)),
                  AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v12, 3),
                  !AnimGroup_UsesPowerOrCastNoteTemplate(AnimGroupFromField8Value)) )
            {
              if ( !Actor_IsNPC(*(Actor **)(a1 + 0x3C)) || !Actor_IsSwimming(*(Actor **)(a1 + 0x3C)) ) /*0x61e653*/
              {
                if ( *(_BYTE *)(a1 + 0x158) ) /*0x61e660*/
                {
                  v14 = *(Actor **)(a1 + 0x3C); /*0x61e66e*/
                  CurrentTarget = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x61e675*/
                  if ( Actor_IsFacingReferenceWithinCombatAngle(v14, CurrentTarget, 0) ) /*0x61e67c*/
                  {
                    v16 = (_DWORD **)CombatController_GetCurrentTarget(a1); /*0x61e68e*/
                    LOBYTE(targetAttacking) = Actor_IsCurrentActionInRange2To5(v16); /*0x61e69c*/
                    v17 = (_DWORD **)CombatController_GetCurrentTarget(a1); /*0x61e6a0*/
                    LOBYTE(v49) = Actor_GetCurrentAction(v17) == 3; /*0x61e6b2*/
                    v18 = (_DWORD **)CombatController_GetCurrentTarget(a1); /*0x61e6b8*/
                    if ( Actor_GetCurrentAction(v18) != 7 ) /*0x61e6c7*/
                    {
                      v19 = (_DWORD **)CombatController_GetCurrentTarget(a1); /*0x61e6cb*/
                      Actor_GetCurrentAction(v19); /*0x61e6d2*/
                    }
                    v20 = (_DWORD *)CombatController_GetCurrentTarget(a1); /*0x61e6e9*/
                    __asm { fld     [esp+20h+arg_4] } /*0x61e6f5*/
                    v21 = targetAttacking; /*0x61e6fd*/
                    __asm { fstp    [esp+34h+var_30]; float } /*0x61e708*/
                    __asm { fld     [esp+34h+arg_0] }
                    IsBlocking = Actor_IsBlocking(v20); /*0x61e712*/
                    __asm { fstp    [esp+34h+var_34]; float } /*0x61e716*/
                    v22 = CombatController_SelectPowerAttack(a1, a3, a4, a5, v41, v43, targetAttacking, v49, 1); /*0x61e719*/
                    targetAttackinga = v22; /*0x61e723*/
                    if ( v22 != 0xFF ) /*0x61e727*/
                    {
                      if ( sub_6134C0((void **)a1, v22) ) /*0x61e730*/
                      {
                        v23 = Game_RandomLargeInteger(0) % 0x64; /*0x61e752*/
                        EffectiveCombatStyle = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x61e754*/
                        if ( v23 < (*(char (__thiscall **)(int *))(*EffectiveCombatStyle + 0x160))(EffectiveCombatStyle) ) /*0x61e76a*/
                        {
                          v25 = CombatController_GetCurrentTarget(a1); /*0x61e773*/
                          v26 = *(void **)(a1 + 0x3C); /*0x61e77c*/
                          v27 = *(_DWORD *)(a1 + 0x70); /*0x61e77f*/
                          v28 = (*(int (__thiscall **)(int, bool, int))(*(_DWORD *)v25 + 0x19C))(v25, IsBlocking, a2); /*0x61e78d*/
                          LOBYTE(v29) = v27 == 0; /*0x61e795*/
                          v47 = v28; /*0x61e798*/
                          v44 = v29; /*0x61e79e*/
                          v40 = (*(int (__thiscall **)(void *))(*(_DWORD *)v26 + 0x284))(v26); /*0x61e7aa*/
                          WeaponSkillLevel = CombatController_GetWeaponSkillLevel((void *)a1); /*0x61e7b2*/
                          v30 = Actor_GetEffectiveCombatStyle(v26); /*0x61e7b5*/
                          CombatStyle_CalculateAttackScore( /*0x61e7bb*/
                            v30,
                            WeaponSkillLevel,
                            v40,
                            7,
                            *(float *)&v21,
                            v44,
                            *(float *)&targetAttackinga,
                            v47);
                          __asm { fstp    [esp+40h+arg_8] } /*0x61e7c0*/
                          v31 = *(_DWORD ***)(a1 + 0x3C); /*0x61e7c4*/
                          v32 = (*(int (__thiscall **)(_DWORD *, int, int))(*v31[0x16] + 0xF8))(v31[0x16], 1, v21); /*0x61e7d8*/
                          LOBYTE(v32) = v32 != 0; /*0x61e7de*/
                          v48 = v32; /*0x61e7e3*/
                          v45 = ((int (__thiscall *)(_DWORD **))(*v31)[0xA1])(v31); /*0x61e7f0*/
                          v42 = ((int (__thiscall *)(_DWORD **))(*v31)[0xA1])(v31); /*0x61e7fd*/
                          v33 = Actor_GetEffectiveCombatStyle(v31); /*0x61e800*/
                          v34 = sub_546D40(v33, v42, 0xF, v45, COERCE_FLOAT(7)); /*0x61e806*/
                          __asm /*0x61e80b*/
                          {
                            fstp    [esp+38h+arg_0]
                            fld     [esp+38h+arg_0]
                          }
                          __asm { fadd    [esp+24h+arg_4] }
                          __asm
                          {
                            fsubr   qword ptr ds:0A309F0h
                            fstp    [esp+24h+var_8]
                          }
                          _EAX = GameSetting_GetSafeFloatPointer(&g_GameSettingStringPointers_B36CD8[0x114]); /*0x61e829*/
                          __asm { fld     dword ptr [eax] } /*0x61e82e*/
                          __asm
                          {
                            fld     [esp+20h+var_8]
                            fcom    st(1)
                            fnstsw  ax
                            fstp    st(1)
                          }
                          if ( (BYTE1(_EAX) & 0x41) != 0 ) /*0x61e83e*/
                          {
                            __asm { fstp    st } /*0x61e845*/
                            _EAX = GameSetting_GetSafeFloatPointer(&g_GameSettingStringPointers_B36CD8[0x114]); /*0x61e847*/
                            __asm { fld     dword ptr [eax] } /*0x61e84c*/
                          }
                          __asm /*0x61e84e*/
                          {
                            fld     [esp+20h+arg_4]
                            fld     [esp+20h+arg_0]
                            fcomp   st(1)
                            fnstsw  ax
                          }
                          if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x61e85d*/
                          {
                            __asm /*0x61e892*/
                            {
                              fstp    st(1)
                              fstp    st
                            }
                          }
                          else
                          {
                            __asm /*0x61e85f*/
                            {
                              fxch    st(1)
                              fstp    [esp+20h+arg_4]
                              fld     [esp+20h+arg_4]
                              fcompp
                              fnstsw  ax
                            }
                            if ( !__SETP__(HIBYTE(_AX) & 5, 0) ) /*0x61e870*/
                            {
                              CombatController_TryStartAttackAction(a1, v21, v48, a4, v34, targetAttackinga, 0); /*0x61e87b*/
                              sub_619920(a1, 0); /*0x61e884*/
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
