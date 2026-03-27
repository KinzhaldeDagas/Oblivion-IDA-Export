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
  double v21; // st7
  bool v22; // bl
  BSExtraDataVtbl *v23; // edi
  BaseExtraListMembr *p_members; // eax
  int v25; // ecx
  int *v26; // eax
  NiAVObject *v27; // edi
  _DWORD *v28; // ecx
  _DWORD *v29; // ecx
  WaterManager *v30; // ecx
  BSShaderAccumulator *v31; // eax
  _DWORD *sound; // ecx
  NiNode *v33; // [esp+4h] [ebp-18h]
  char a2a; // [esp+20h] [ebp+4h]

  byte_B43384 = 1;
  if ( !*(_BYTE *)(a1 + 0x51) && !*(_BYTE *)(a1 + 0x52) )
    sub_40D160((NiDX9Renderer *)OSGlobals, a10, a1);
  byte_B43074 = 1;
  inited = InitBSShaderAccumulator();
  sub_7AB6F0(inited);
  *(_BYTE *)(bhkWorldM + 0x19) = 0;
  sub_88B680((int *)bhkWorldM, 0);
  v14 = *(TESObjectREFR **)(a1 + 0x34);
  if ( v14 == a2 )
  {
    sub_444FB0(a1, a2, PlayerNode, a6, a5, st5_0, st4_0, a7, a8, a9, a12, 0);
    byte_B43384 = 0;
    return;
  }
  if ( bPreemptivelyUnloadCells )
  {
    if ( !v14 )
    {
      v16 = sub_4C9300();
      if ( sub_43FFF0((_DWORD *)a1, st5_0, a5, PlayerNode, 1, 0) || v16 )
        sub_43FC20((TES *)a1, 0);
    }
  }
  OSGlobals->unk18 = 0;
  if ( a2 )
  {
    if ( !sub_45A500(SaveLoad_CurrentSavegame) && !sub_40FDA0(v17) )
      sub_40D4D0((InputGlobal *)OSGlobals, st5_0, a5, PlayerNode);
  }
  ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
  sub_7C7E50(ShadowSceneNode);
  a2a = 0;
  if ( v14 )
  {
    a2a = 1;
    sub_4D6450((int)v14, st5_0, a5, PlayerNode);
    nullsub_returnTrue_0arg();
    sub_7B84E0();
    PlayerNode = nullsub_returnTrue_0arg();
    v33 = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0);
    v19 = (_DWORD *)GetShadowSceneNode(0);
    ShadowSceneNodeAddShadowCaster(v19, (volatile LONG *)v33);
  }
  if ( !TES::IsInteriorCellPreloaded((TES *)a1, (TESObjectCELL *)a2) )
  {
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 0x38) + 4 * uInteriorCellBuffer - 4) )
      sub_440120(
        (_DWORD *)a1,
        st5_0,
        a5,
        PlayerNode,
        *(TESObjectCELL **)(*(_DWORD *)(a1 + 0x38) + 4 * uInteriorCellBuffer - 4));
  }
  *(_DWORD *)(a1 + 0x34) = a2;
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 0x48) == 0x7FFFFFFF && !a2a )
    {
      v20 = *(_DWORD *)(a1 + 0x24);
      *(_DWORD *)(a1 + 0x48) = *(_DWORD *)(a1 + 0x20);
      *(_DWORD *)(a1 + 0x4C) = v20;
      sub_441D50(a1, PlayerNode, st5_0, st4_0, a5, a9, a8, a7, a6, 1, 0);
    }
    *(_DWORD *)(a1 + 0x20) = (int)*a12 >> 0xC;
    v21 = a12[1];
    *(_DWORD *)(a1 + 0x24) = (int)v21 >> 0xC;
    sub_4D4310((TESObjectCELL *)a2);
    v22 = sub_45A500(SaveLoad_CurrentSavegame);
    if ( TESObjectCELL_IsInterior((TESObjectCELL *)a2) )
      v23 = sub_424180((ExtraDataList *)&a2->member.rot.z);
    else
      v23 = (BSExtraDataVtbl *)bhkWorldM;
    if ( v23 )
      sub_889E00(v23);
    p_members = &a2->member.baseExtraList.members;
    v25 = 0;
    if ( a2 != (TESObjectREFR *)0xFFFFFFB8 )
    {
      do
      {
        if ( p_members->m_data )
          ++v25;
        p_members = *(BaseExtraListMembr **)p_members->m_presenceBitfield;
      }
      while ( p_members );
      if ( v25 )
      {
        if ( BYTE2(a2->member.rot.y) != 3 )
          sub_440AF0(a1, st5_0, a5, (char)a2, 1, 0, 0);
      }
    }
    sub_4D63A0(a2, st5_0, a5, v21, *(_DWORD *)(a1 + 0xC));
    v26 = (int *)sub_4AF170(a2);
    if ( v26 )
      sub_4E7610(v26);
    sub_4D5BD0((int)a2, a5, v21, st5_0, st4_0, a7, a9, a8, a6, (char)a2, 1);
    if ( sub_43E000(ModelLoaderPtr, (TESObjectCELL *)a2) )
      sub_440AF0(a1, st5_0, a5, (char)a2, 1, 0, 0);
    sub_440190((_DWORD *)a1, (TESObjectCELL *)a2);
    if ( !v22 )
      sub_434020(ioManager, st5_0, a5, v21, 1);
    if ( v23 )
      v21 = sub_88D1D0(0);
    if ( *(_BYTE *)(a1 + 0x51) || *(_BYTE *)(a1 + 0x52) )
    {
      if ( !v22 )
        goto LABEL_49;
    }
    else if ( !v22 )
    {
      sub_5ADB40();
      v21 = flt_B33A48;
      sub_5732D0((NiAVObject **)dword_B3A6B0, st5_0, a5, v21, 2, flt_B33A48);
LABEL_49:
      sub_677360((int)&ActorProcessManager_ptr);
      sub_441610((_DWORD *)a1);
      sub_678750(&ActorProcessManager_ptr);
      sub_675F40((int)&ActorProcessManager_ptr);
      sub_675FC0((int)&ActorProcessManager_ptr, v21);
    }
    sub_43FC20((TES *)a1, 0);
    sub_447130((char *)TESDataHandler);
    v27 = sub_4D58B0((int)a2);
    NiAVObject_InitializePropertyState(v27);
    NiNode_UpdateDynamicEffectState((NiNode *)v27);
    if ( !LOWORD(v27[1].members.super.m_controller) )
    {
      v21 = 0.0;
      NiAVObject_UpdateNiAVObject(v27, 0.0, 0);
    }
    sub_4CB670(a2, 1);
    if ( (LOBYTE(a2->member.rot.y) & 2) != 0 )
    {
      if ( *(_DWORD *)(a1 + 0x54) )
        sub_498F30();
      sub_49A000(*(_DWORD **)(a1 + 0x58), (TESObjectCELL *)a2);
      if ( TES->currentInteriorCell )
      {
        v28 = *(_DWORD **)(a1 + 0x58);
        if ( v28 )
          sub_49B5F0(v28, *(_DWORD *)(a1 + 0x20), *(_DWORD *)(a1 + 0x24));
      }
    }
    else
    {
      v29 = *(_DWORD **)(a1 + 0x58);
      if ( v29 )
        sub_499FF0(v29);
      v30 = *(WaterManager **)(a1 + 0x54);
      if ( v30 )
        WaterManager::Destroy_(v30, st5_0, a5, v21, (int *)1);
    }
    sub_43FD70((TES *)a1, st5_0, a5, v21, (TESObjectCELL *)a2);
  }
  if ( !a2a )
  {
    v31 = InitBSShaderAccumulator();
    if ( v31 )
      sub_7A9CF0(v31);
    nullsub_returnTrue_0arg();
    sub_7C4D90();
    sub_7B2130(1);
    nullsub_returnTrue_0arg();
    sub_482670(*(_DWORD **)(a1 + 8));
  }
  if ( *(_BYTE *)(a1 + 0x51) || *(_BYTE *)(a1 + 0x52) )
  {
    sub_578E30(st5_0, a5, (char)a2);
    sub_5A9010((char)a2, st5_0, a5);
    sound = OSGlobals->sound;
    if ( sound )
      sub_6A9AA0(sound);
  }
  sub_43FC20((TES *)a1, 0);
  Player_UpdateHUDHealthBarTarget_(0);
  byte_B43384 = 0;
}
