void __userpurge sub_4455E0(
        unsigned int a1@<ecx>,
        double PlayerNode@<st0>,
        double st4_0@<st3>,
        double st5_0@<st2>,
        double a5@<st1>,
        double a6@<st7>,
        double a7@<st4>,
        double a8@<st6>,
        double a9@<st5>,
        int a10@<edi>,
        TESObjectREFR *a2,
        float *a12)
{
  BSShaderAccumulator *inited; // eax
  TESObjectREFR *v14; // edi
  char v16; // bl
  void *v17; // ecx
  _DWORD *ShadowSceneNode; // eax
  _DWORD *v19; // eax
  int v20; // eax
  bool v21; // bl
  MobileObject *v22; // edi
  BaseExtraListMembr *p_members; // eax
  int v24; // ecx
  int *v25; // eax
  NiNode *v26; // edi
  _DWORD *v27; // ecx
  _DWORD *v28; // ecx
  WaterManager *v29; // ecx
  BSShaderAccumulator *v30; // eax
  _DWORD *sound; // ecx
  NiNode *v32; // [esp+4h] [ebp-18h]
  char a2a; // [esp+20h] [ebp+4h]

  unk_B43384 = 1; /*0x4455e5*/
  if ( !*(_BYTE *)(a1 + 0x51) && !*(_BYTE *)(a1 + 0x52) ) /*0x4455f3*/
    MenuBackground_CaptureWorldToTexture((NiDX9Renderer *)MEMORY[0xB33398], a10, a1); /*0x4455ff*/
  OB_RendererGlobalState_010201A0[0x1DB] = 1; /*0x445604*/
  inited = BSShaderAccumulator_GetOrCreateGlobal(); /*0x44560b*/
  BSShaderAccumulator_ClearAccumulatedPasses(inited); /*0x445612*/
  *(_BYTE *)(MEMORY[0xB35C24] + 0x19) = 0; /*0x44561c*/
  sub_88B680((int *)MEMORY[0xB35C24], 0); /*0x445628*/
  v14 = *(TESObjectREFR **)(a1 + 0x34); /*0x44562d*/
  if ( v14 == a2 ) /*0x445636*/
  {
    sub_444FB0(a1, a2, PlayerNode, a6, a5, st5_0, st4_0, a7, a8, a9, a12, 0); /*0x445641*/
    unk_B43384 = 0; /*0x445648*/
    return; /*0x445651*/
  }
  if ( bPreemptivelyUnloadCells ) /*0x445654*/
  {
    if ( !v14 ) /*0x445660*/
    {
      v16 = sub_4C9300(); /*0x44566c*/
      if ( sub_43FFF0((_DWORD *)a1, st5_0, a5, PlayerNode, 1, 0) || v16 ) /*0x445679*/
        sub_43FC20((TES *)a1, 0); /*0x44567f*/
    }
  }
  MEMORY[0xB33398]->unk18 = 0; /*0x44568c*/
  if ( a2 ) /*0x445693*/
  {
    if ( !sub_45A500(g_TESSaveLoadGame) && !sub_40FDA0(v17) ) /*0x4456a4*/
      Input_CheckScreenshotHotkey((InputGlobal *)MEMORY[0xB33398], st5_0, a5, PlayerNode, a6, a8, a9, a7, st4_0); /*0x4456b3*/
  }
  ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0); /*0x4456ba*/
  ShadowSceneNode_TeardownLightLists(ShadowSceneNode);// Cell/world transition boundary: tear down all native shadow-light lists before rebuilding reference-attached light sources for the destination cell. /*0x4456c4*/
  a2a = 0; /*0x4456cb*/
  if ( v14 ) /*0x4456d0*/
  {
    a2a = 1; /*0x4456d4*/
    sub_4D6450((int)v14, st5_0, a5, PlayerNode); /*0x4456d9*/
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4456e0*/
    sub_7B84E0(); /*0x4456e5*/
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4456ec*/
    v32 = PlayerCharacter_GetNodeByPerspective(reference, 0); /*0x445701*/
    v19 = (_DWORD *)GetShadowSceneNode(0); /*0x445704*/
    ShadowSceneNodeAddShadowCaster(v19, (volatile LONG *)v32);// Direct retail AddShadowCaster caller in player cell/world-transition lifecycle. /*0x44570e*/
  }
  if ( !TES::IsInteriorCellPreloaded((TES *)a1, (TESObjectCELL *)a2) ) /*0x445716*/
  {
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 0x38) + 4 * uInteriorCellBuffer - 4) ) /*0x445728*/
      sub_440120( /*0x445733*/
        (_DWORD *)a1,
        st5_0,
        a5,
        PlayerNode,
        *(TESObjectCELL **)(*(_DWORD *)(a1 + 0x38) + 4 * uInteriorCellBuffer - 4));
  }
  *(_DWORD *)(a1 + 0x34) = a2; /*0x44573a*/
  if ( a2 ) /*0x44573d*/
  {
    if ( *(_DWORD *)(a1 + 0x48) == 0x7FFFFFFF && !a2a ) /*0x445751*/
    {
      v20 = *(_DWORD *)(a1 + 0x24); /*0x445756*/
      *(_DWORD *)(a1 + 0x48) = *(_DWORD *)(a1 + 0x20); /*0x44575f*/
      *(_DWORD *)(a1 + 0x4C) = v20; /*0x445762*/
      sub_441D50(a1, PlayerNode, st5_0, st4_0, a5, a9, a8, a7, a6, (int)a2, 1, 0);// DX11 interior observer audit, OblivionNew reverified 2026-09-19: native block sets ECX=ESI, copies TES grid coordinates [ESI+20h]/[ESI+24h] into saved coordinates [ESI+48h]/[ESI+4Ch], then calls 441D50 at 445765. The enclosing transition (4455E0) tears down native shadow-light lists at 4456C4 and registers destination cell attached lights at 44591A. External-patch evidence, separate from native behavior: verified EngineBugFixes 2.22 BackgroundCellLoadFix replaces the first 5 bytes here with a jump to module+6380 and resumes at 445765; DX11 validation composes only the exact independently verified patch, not arbitrary code changes. /*0x445765*/
    }
    *(_DWORD *)(a1 + 0x20) = (int)*a12 >> 0xC; /*0x445783*/
    PlayerNode = a12[1]; /*0x44578d*/
    *(_DWORD *)(a1 + 0x24) = (int)PlayerNode >> 0xC; /*0x44579e*/
    sub_4D4310((TESObjectCELL *)a2, st5_0, a5, PlayerNode); /*0x4457a1*/
    v21 = sub_45A500(g_TESSaveLoadGame); /*0x4457b3*/
    if ( TESObjectCELL_IsInterior((TESObjectCELL *)a2) ) /*0x4457b5*/
      v22 = (MobileObject *)sub_424180((ExtraDataList *)&a2->member.rot.z); /*0x4457c6*/
    else
      v22 = (MobileObject *)MEMORY[0xB35C24]; /*0x4457ca*/
    if ( v22 ) /*0x4457d2*/
      sub_889E00(v22); /*0x4457d6*/
    p_members = &a2->member.baseExtraList.members; /*0x4457db*/
    v24 = 0; /*0x4457de*/
    if ( a2 != (TESObjectREFR *)0xFFFFFFB8 ) /*0x4457e2*/
    {
      do /*0x4457f1*/
      {
        if ( p_members->m_data ) /*0x4457e4*/
          ++v24; /*0x4457e9*/
        p_members = *(BaseExtraListMembr **)p_members->m_presenceBitfield; /*0x4457ec*/
      }
      while ( p_members ); /*0x4457f1*/
      if ( v24 ) /*0x4457f5*/
      {
        if ( BYTE2(a2->member.rot.y) != 3 ) /*0x4457fb*/
          sub_440AF0(a1, st5_0, a5, (char)a2, 1, 0, 0); /*0x445803*/
      }
    }
    sub_4D63A0((TESObjectCELL *)a2, st5_0, a5, PlayerNode, *(_DWORD *)(a1 + 0xC)); /*0x44580e*/
    v25 = (int *)sub_4AF170(a2); /*0x445815*/
    if ( v25 ) /*0x44581c*/
      TESPathGrid_LoadOrResolveGraph(v25);      // Verified destination-cell activation path: once destination cell state is attached, obtains TESPathGrid and invokes TESPathGrid_LoadOrResolveGraph; this makes graph resolution part of cell activation. /*0x445820*/
    sub_4D5BD0((TESObjectCELL *)a2, a5, PlayerNode, st5_0, st4_0, a7, a9, a8, a6, (char)a2, 1); /*0x445829*/
    if ( sub_43E000(MEMORY[0xB33A1C], (TESObjectCELL *)a2) ) /*0x445835*/
      sub_440AF0(a1, st5_0, a5, (char)a2, 1, 0, 0); /*0x445846*/
    sub_440190((_DWORD *)a1, (TESObjectCELL *)a2); /*0x44584e*/
    if ( !v21 ) /*0x445855*/
      sub_434020(MEMORY[0xB33A10], st5_0, a5, PlayerNode, 1); /*0x44585f*/
    if ( v22 ) /*0x445866*/
      sub_88D1D0((int *)v22, (int)a2, 0); /*0x44586c*/
    if ( *(_BYTE *)(a1 + 0x51) || *(_BYTE *)(a1 + 0x52) ) /*0x445877*/
    {
      if ( !v21 ) /*0x4458a1*/
        goto LABEL_49; /*0x4458a1*/
    }
    else if ( !v21 ) /*0x44587f*/
    {
      sub_5ADB40(st5_0, PlayerNode); /*0x445881*/
      PlayerNode = flt_B33A48; /*0x445886*/
      sub_5732D0((NiNode **)unk_B3A6B0, st5_0, a5, PlayerNode, 2, flt_B33A48); /*0x445898*/
LABEL_49:
      sub_677360((int)&qword_B3BB2C[0x75]); /*0x4458a3*/
      sub_441610((_DWORD *)a1); /*0x4458af*/
      sub_678750((int)&qword_B3BB2C[0x75], v21, a2, v22, a1, st5_0, a5, PlayerNode); /*0x4458b9*/
      sub_675F40((int)&qword_B3BB2C[0x75]); /*0x4458c3*/
      sub_675FC0((int)&qword_B3BB2C[0x75], PlayerNode); /*0x4458cd*/
    }
    sub_43FC20((TES *)a1, 0); /*0x4458d2*/
    sub_447130((char *)g_TESDataHandler); /*0x4458e1*/
    v26 = sub_4D58B0((TESObjectCELL *)a2); /*0x4458ed*/
    NiAVObject_InitializePropertyState((NiAVObject *)v26); /*0x4458f1*/
    NiNode_UpdateDynamicEffectState(v26); /*0x4458f8*/
    if ( !v26->members.children.numObjs ) /*0x4458fd*/
    {
      PlayerNode = 0.0; /*0x445907*/
      NiAVObject_UpdateNiAVObject((NiAVObject *)v26, 0.0, 0); /*0x445911*/
    }
    TESObjectCELL_RegisterOrUnregisterAttachedLights((TESObjectCELL *)a2, 1);// Interior-cell activation registers ordinary attached light sources for every reference after the cell node and property state are prepared. /*0x44591a*/
    if ( (LOBYTE(a2->member.rot.y) & 2) != 0 ) /*0x445928*/
    {
      if ( *(_DWORD *)(a1 + 0x54) ) /*0x44592a*/
        sub_498F30(); /*0x445931*/
      sub_49A000(*(_DWORD **)(a1 + 0x58), (TESObjectCELL *)a2); /*0x44593a*/
      if ( MEMORY[0xB333A0]->currentInteriorCell ) /*0x445945*/
      {
        v27 = *(_DWORD **)(a1 + 0x58); /*0x44594b*/
        if ( v27 ) /*0x445950*/
          sub_49B5F0(v27, *(_DWORD *)(a1 + 0x20), *(_DWORD *)(a1 + 0x24)); /*0x44595a*/
      }
    }
    else
    {
      v28 = *(_DWORD **)(a1 + 0x58); /*0x445961*/
      if ( v28 ) /*0x445966*/
        sub_499FF0(v28); /*0x445968*/
      v29 = *(WaterManager **)(a1 + 0x54); /*0x44596d*/
      if ( v29 ) /*0x445972*/
        WaterManager::Destroy_(v29, (int *)1); /*0x445976*/
    }
    sub_43FD70((TES *)a1, st5_0, a5, PlayerNode, (TESObjectCELL *)a2); /*0x44597e*/
  }
  if ( !a2a ) /*0x445989*/
  {
    v30 = BSShaderAccumulator_GetOrCreateGlobal(); /*0x44598b*/
    if ( v30 ) /*0x445992*/
      sub_7A9CF0(v30); /*0x445996*/
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x44599d*/
    sub_7C4D90(); /*0x4459a2*/
    sub_7B2130(1); /*0x4459a9*/
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4459b0*/
    ClearCanopyShadowMap(*(_DWORD **)(a1 + 8)); /*0x4459bb*/
  }
  if ( *(_BYTE *)(a1 + 0x51) || *(_BYTE *)(a1 + 0x52) ) /*0x4459c6*/
  {
    sub_578E30(st5_0, a5, PlayerNode); /*0x4459cc*/
    sub_5A9010(); /*0x4459d1*/
    sound = MEMORY[0xB33398]->sound; /*0x4459db*/
    if ( sound ) /*0x4459e0*/
      sub_6A9AA0(sound); /*0x4459e2*/
  }
  sub_43FC20((TES *)a1, 0); /*0x4459eb*/
  Player_UpdateHUDHealthBarTarget_(0); /*0x4459f2*/
  unk_B43384 = 0; /*0x4459fc*/
}
