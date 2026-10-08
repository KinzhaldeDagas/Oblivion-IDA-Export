char __userpurge sub_445A10@<al>(
        unsigned int a1@<ecx>,
        int edi0@<edi>,
        double st4_0@<st3>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        double a7@<st7>,
        double a8@<st4>,
        double a9@<st6>,
        double a10@<st5>,
        float *a2)
{
  BSShaderAccumulator *inited; // eax
  TESObjectCELL *v13; // edi
  _DWORD *v14; // ecx
  _DWORD *ShadowSceneNode; // eax
  _DWORD *v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // eax
  bool v21; // bl
  bool v22; // zf
  double v23; // st6
  double v24; // rt0
  double v25; // st5
  double v26; // st6
  double v27; // st7
  TESForm *CellFromCoords; // eax
  int v29; // ecx
  int v30; // ecx
  _DWORD *sound; // ecx
  char result; // al
  float v33; // [esp-Ch] [ebp-2Ch]
  int v34; // [esp-8h] [ebp-28h]
  int v35; // [esp-4h] [ebp-24h]
  NiNode *PlayerNode; // [esp+0h] [ebp-20h]
  float v37; // [esp+14h] [ebp-Ch]
  float v38; // [esp+14h] [ebp-Ch]
  float v39; // [esp+18h] [ebp-8h]
  int v40; // [esp+18h] [ebp-8h]
  int a3; // [esp+1Ch] [ebp-4h] BYREF

  unk_B43384 = 1; /*0x445a18*/
  if ( !*(_BYTE *)(a1 + 0x51) && !*(_BYTE *)(a1 + 0x52) ) /*0x445a26*/
    MenuBackground_CaptureWorldToTexture((NiDX9Renderer *)MEMORY[0xB33398], edi0, a1); /*0x445a32*/
  OB_RendererGlobalState_010201A0[0x1DB] = 0; /*0x445a37*/
  inited = BSShaderAccumulator_GetOrCreateGlobal(); /*0x445a3e*/
  BSShaderAccumulator_ClearAccumulatedPasses(inited); /*0x445a45*/
  sub_7B2130(0); /*0x445a4c*/
  *(_BYTE *)(MEMORY[0xB35C24] + 0x19) = 1; /*0x445a5a*/
  v13 = *(TESObjectCELL **)(a1 + 0x34); /*0x445a5e*/
  if ( v13 ) /*0x445a6a*/
  {
    sub_4D6450((int)v13, a4, a5, a6); /*0x445a72*/
    v14 = *(_DWORD **)(a1 + 0x58); /*0x445a77*/
    if ( v14 ) /*0x445a7c*/
      sub_499FF0(v14); /*0x445a7e*/
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x445a85*/
    ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0); /*0x445a8c*/
    ShadowSceneNode_TeardownLightLists(ShadowSceneNode);// Interior-to-exterior transition boundary: tear down all native shadow-light lists before restoring player/source lifecycle in the exterior world. /*0x445a96*/
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x445a9d*/
    PlayerNode = PlayerCharacter_GetNodeByPerspective(reference, 0); /*0x445ab2*/
    v16 = (_DWORD *)GetShadowSceneNode(0); /*0x445ab5*/
    ShadowSceneNodeAddShadowCaster(v16, (volatile LONG *)PlayerNode); /*0x445abf*/
    if ( TES::IsInteriorCellPreloaded((TES *)a1, v13) ) /*0x445ac7*/
      sub_4CB010(v13, a4, a5, a6, 1); /*0x445ae2*/
    else
      TESObjectCELL_Deactivate(a4, a5, a6, v13); /*0x445ad7*/
    *(_DWORD *)(a1 + 0x34) = 0; /*0x445ae7*/
    if ( (g_TESSaveLoadGame->flags & 0x800) == 0 ) /*0x445afd*/
    {
      v17 = *(_DWORD *)(a1 + 0x48); /*0x445aff*/
      if ( v17 == 0x7FFFFFFF ) /*0x445b09*/
      {
        if ( !sub_440880((TES *)a1, a2) ) /*0x445b4c*/
        {
          *(_DWORD *)(a1 + 0x20) = 0x7FFFFFFF; /*0x445b55*/
          *(_DWORD *)(a1 + 0x24) = 0x7FFFFFFF; /*0x445b58*/
          *(_DWORD *)(a1 + 0x28) = 0x7FFFFFFF; /*0x445b5b*/
          *(_DWORD *)(a1 + 0x2C) = 0x7FFFFFFF; /*0x445b5e*/
        }
      }
      else
      {
        if ( **(_DWORD **)(a1 + 0x3C) ) /*0x445b0e*/
        {
          v18 = *(_DWORD *)(a1 + 0x4C); /*0x445b13*/
          *(_DWORD *)(a1 + 0x20) = v17; /*0x445b18*/
          *(_DWORD *)(a1 + 0x24) = v18; /*0x445b1b*/
          sub_440270((_DWORD **)a1, a4, a5, a6); /*0x445b1e*/
          sub_441D50(a1, a6, a4, st4_0, a5, a10, a9, a8, a7, (int)a2, 0, (int)a2); /*0x445b28*/
        }
        else
        {
          *(_DWORD *)(a1 + 0x20) = 0x7FFFFFFF; /*0x445b35*/
          *(_DWORD *)(a1 + 0x24) = 0x7FFFFFFF; /*0x445b38*/
          *(_DWORD *)(a1 + 0x28) = 0x7FFFFFFF; /*0x445b3b*/
          *(_DWORD *)(a1 + 0x2C) = 0x7FFFFFFF; /*0x445b3e*/
        }
        *(_DWORD *)(a1 + 0x48) = 0x7FFFFFFF; /*0x445b2d*/
        *(_DWORD *)(a1 + 0x4C) = 0x7FFFFFFF; /*0x445b30*/
      }
    }
  }
  v19 = *(_DWORD *)(a1 + 0x10); /*0x445b65*/
  if ( v19 ) /*0x445b6a*/
  {
    v20 = *(_DWORD *)(v19 + 0x1C); /*0x445b6c*/
    if ( v20 ) /*0x445b71*/
      *(_WORD *)(v20 + 0x18) &= ~1u; /*0x445b73*/
  }
  sub_88B680((int *)MEMORY[0xB35C24], havokDebug); /*0x445b87*/
  v21 = sub_45A500(g_TESSaveLoadGame); /*0x445b97*/
  sub_444FB0(a1, (TESObjectREFR *)a2, a6, a7, a5, a4, st4_0, a8, a9, a10, a2, !v21); /*0x445ba2*/
  v22 = unk_B42D78 == 0; /*0x445baa*/
  v23 = dbl_A2FAA0; /*0x445bb1*/
  v24 = dbl_A37650; /*0x445bc1*/
  v25 = ((double)*(int *)(a1 + 0x20) + v23) * v24; /*0x445bc1*/
  v37 = v25; /*0x445bc3*/
  v26 = v23 + (double)*(int *)(a1 + 0x24); /*0x445bcb*/
  unk_B4312C = v37; /*0x445bce*/
  unk_B43134 = v37; /*0x445bd3*/
  v27 = v24 * v26; /*0x445bd8*/
  v39 = v24 * v26; /*0x445bda*/
  unk_B43130 = v39; /*0x445be2*/
  unk_B43138 = v39; /*0x445be8*/
  if ( v22 ) /*0x445bee*/
    v27 = 0.0; /*0x445bff*/
  else
    ((void (__cdecl *)(_DWORD, _DWORD))unk_B42D78)(0, 0); /*0x445bf4*/
  *(float *)&OB_RendererGlobalState_010201A0[0x1DF] = v27; /*0x445c03*/
  sub_440270((_DWORD **)a1, v25, v26, v27); /*0x445c09*/
  CellFromCoords = TES_GetCellFromCoords((TES *)a1, *(_DWORD *)(a1 + 0x20), *(_DWORD *)(a1 + 0x24)); /*0x445c18*/
  if ( sub_43E000(MEMORY[0xB33A1C], (TESObjectCELL *)CellFromCoords) ) /*0x445c24*/
    sub_440AF0(a1, v25, v26, (char)a2, 1, 0, 0); /*0x445c35*/
  if ( !v21 ) /*0x445c3c*/
  {
    if ( MEMORY[0xB35C24] ) /*0x445c42*/
      sub_889E00((_DWORD *)MEMORY[0xB35C24]); /*0x445c4c*/
    sub_434020(MEMORY[0xB33A10], v25, v26, v27, 4); /*0x445c59*/
    sub_482310(*(_DWORD *)(a1 + 8), v27); /*0x445c61*/
    if ( MEMORY[0xB35C24] ) /*0x445c66*/
      sub_88D1D0((int *)MEMORY[0xB35C24], (int)a2, 0); /*0x445c72*/
    v38 = *a2; /*0x445c7e*/
    v40 = *((int *)a2 + 1); /*0x445c87*/
    *(float *)&a3 = 0.0; /*0x445c8f*/
    GetTerrainHeight((TES *)a1, a2, (float *)&a3); /*0x445c93*/
    v27 = 1.0; /*0x445c98*/
    v33 = *(float *)&stru_B258DC; /*0x445caf*/
    v34 = MEMORY[0xB258E0]; /*0x445cb7*/
    v35 = HIDWORD(MEMORY[0xB258E0]); /*0x445cbe*/
    v29 = a3; /*0x445ccc*/
    byte_B2CBC0 = 0; /*0x445cd3*/
    DrawGrassPass_(SLODWORD(v38), v40, v29, v33, v34, v35, 1.0); /*0x445cdd*/
    byte_B2CBC0 = 1; /*0x445ce5*/
  }
  if ( *(_BYTE *)(a1 + 0x51) || *(_BYTE *)(a1 + 0x52) ) /*0x445cf2*/
  {
    if ( v21 ) /*0x445d17*/
      goto LABEL_38; /*0x445d17*/
  }
  else
  {
    if ( v21 ) /*0x445cfa*/
      goto LABEL_38; /*0x445cfa*/
    v27 = flt_B33A48; /*0x445cfc*/
    sub_5732D0((NiNode **)unk_B3A6B0, v25, v26, v27, 2, flt_B33A48); /*0x445d0e*/
  }
  sub_677360((int)&qword_B3BB2C[0x75]); /*0x445d1e*/
  sub_441610((_DWORD *)a1); /*0x445d25*/
  sub_678750((int)&qword_B3BB2C[0x75], v21, (TESObjectREFR *)a2, (MobileObject *)v13, a1, v25, v26, v27); /*0x445d2f*/
  sub_675F40((int)&qword_B3BB2C[0x75]); /*0x445d39*/
  sub_675FC0((int)&qword_B3BB2C[0x75], v27); /*0x445d43*/
LABEL_38:
  if ( v13 ) /*0x445d4a*/
  {
    if ( !TESObjectCELL_HasFlag80(v13) ) /*0x445d4e*/
    {
      sub_5403D0(*(Sky **)(a1 + 0x5C), *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 0x10)); /*0x445d5e*/
      sub_5403D0(*(Sky **)(a1 + 0x5C), *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 0x14)); /*0x445d6a*/
    }
  }
  TES_RegisterExteriorGridAttachedLightsAndReconcile((TES *)a1);// Exterior transition finalization registers reference-attached light sources for process-level-6 grid cells, then reconciles all full-list source receivers. /*0x445d71*/
  v30 = *(_DWORD *)(a1 + 0x5C); /*0x445d76*/
  if ( *(_DWORD *)(v30 + 0xDC) ) /*0x445d79*/
    Sky__SetMode((volatile LONG *)v30, (volatile LONG *)3); /*0x445d84*/
  NiAVObject_InitializePropertyState(*(NiAVObject **)(a1 + 0xC)); /*0x445d8c*/
  NiNode_UpdateDynamicEffectState(*(NiNode **)(a1 + 0xC)); /*0x445d94*/
  Player_UpdateHUDHealthBarTarget_(0); /*0x445d9b*/
  if ( *(_BYTE *)(a1 + 0x51) || *(_BYTE *)(a1 + 0x52) ) /*0x445da9*/
  {
    sub_578E30(v25, v26, v27); /*0x445daf*/
    sub_5A9010(); /*0x445db4*/
    sound = MEMORY[0xB33398]->sound; /*0x445dbf*/
    if ( sound ) /*0x445dc4*/
      sub_6A9AA0(sound); /*0x445dc6*/
  }
  result = sub_43FC20((TES *)a1, 0); /*0x445dcf*/
  MEMORY[0xB33E90][0x139C] = 1; /*0x445dd7*/
  unk_B43384 = 0; /*0x445dde*/
  return result; /*0x445dd4*/
}
