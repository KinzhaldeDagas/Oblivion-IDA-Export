void __thiscall sub_6545E0(MiddleHighProcess *a1, Actor *a6)
{
  double v2; // st6
  double v3; // st7
  ActorAnimData *v5; // eax
  int v6; // ebp
  SInt8 knockedState; // al
  _DWORD *niNode; // eax
  UInt32 v9; // eax
  unsigned __int8 **IdleForActor; // eax
  UInt32 v11; // eax
  double v12; // st7
  double v13; // st6
  double v14; // st7
  double TimeScale; // st7
  double v16; // st7
  bool v17; // bl
  SInt8 v18; // bl
  UInt32 v19; // eax
  UInt32 v20; // eax
  bool v21; // zf
  char *Name; // eax
  bool IsSwimming; // al
  ActorAnimData *v24; // ecx
  NiNode *v25; // ebp
  int v26; // ebx
  NiAVObject *ChildAtIndex; // ebp
  int v28; // eax
  bool v29; // bl
  int v30; // eax
  double v31; // rt0
  float v32; // [esp+18h] [ebp-38h]
  void *slot; // [esp+1Ch] [ebp-34h] BYREF
  float v34; // [esp+20h] [ebp-30h] BYREF
  double v35; // [esp+24h] [ebp-2Ch] BYREF
  float v36; // [esp+2Ch] [ebp-24h]
  float v37; // [esp+30h] [ebp-20h]
  float v38; // [esp+34h] [ebp-1Ch]
  float v39; // [esp+38h] [ebp-18h]
  float v40; // [esp+3Ch] [ebp-14h]
  float v41; // [esp+40h] [ebp-10h]
  float v42; // [esp+44h] [ebp-Ch]
  float v43; // [esp+48h] [ebp-8h]
  float GameHour; // [esp+4Ch] [ebp-4h]
  float retaddr; // [esp+50h] [ebp+0h]

  v5 = a6->vtbl->super.super.GetAnimData(a6); /*0x6545f6*/
  v6 = (int)v5; /*0x654600*/
  if ( a6 == (Actor *)reference && v5 == PlayerCharacter_GetAnimDataByPerspective(reference, 1) ) /*0x65460d*/
    JUMPOUT(0x654C4E); /*0x654c4e*/
  if ( a6->vtbl->super.super.IsDead((TESObjectREFR *)a6, 0) && Actor::GetDeadState(a6) != 6 ) /*0x65462f*/
  {
    a1->knockedState = 0; /*0x654631*/
    return; /*0x65463e*/
  }
  sub_5E0A60(a6); /*0x654644*/
  if ( v3 < *(float *)&SrcStr || a6->vtbl->super.super.HasFatigue((TESObjectREFR *)a6) || Actor::GetDeadState(a6) == 6 ) /*0x654672*/
  {
    knockedState = a1->knockedState; /*0x654678*/
    if ( knockedState ) /*0x654680*/
    {
      if ( knockedState == 2 || knockedState == 1 ) /*0x6547d7*/
        v3 = Script_AddEventToExtraScript(0, &a6->members.super.super.baseExtraList, 0x40); /*0x6547e1*/
    }
    else
    {
      if ( ((int (__thiscall *)(MiddleHighProcess *))a1->GetSitSleepState)(a1) ) /*0x654690*/
      {
        if ( a6->vtbl->GetMountedHorse(a6) ) /*0x6546a0*/
          sub_5F0410((TESObjectREFR *)a6, v6); /*0x6546a8*/
        else
          sub_5E4140((TESObjectREFR *)a6); /*0x6546af*/
      }
      MagicCaster_InitializeCasting___((char *)&a6->members.magicCaster); /*0x6546b7*/
      if ( a6->vtbl->super.super.HasFatigue((TESObjectREFR *)a6) ) /*0x6546c6*/
      {
        a1->knockedState = 3; /*0x6546d0*/
        sub_88D070((NiNode *)a6->members.super.super.niNode, 1, 1, 0); /*0x6546dd*/
        sub_8A5580((int)a6->members.super.super.niNode, 1); /*0x6546e8*/
        v3 = 0.0; /*0x6546ed*/
        ActorAnimData_ClearSlot((ActorAnimData *)v6, 5, 0.0); /*0x6546f9*/
        ActorAnimData_ResetRootMotion(v6); /*0x654700*/
        ((void (__thiscall *)(MiddleHighProcess *, Actor *))a1->Unk_64)(a1, a6); /*0x654710*/
      }
      else
      {
        a1->knockedState = 4; /*0x65471f*/
        ActorAnimData_GetMovementVector((float *)v6, v2, (float *)&v35 + 1, a6, 1, 0); /*0x654725*/
        v38 = -*((float *)&v35 + 1); /*0x654732*/
        v39 = -v36; /*0x65473c*/
        v40 = -v37; /*0x654746*/
        retaddr = *(float *)&MEMORY[0xB33E90][0xC] * dbl_A3F3D0; /*0x654756*/
        retaddr = 1.0 / retaddr; /*0x654762*/
        v41 = retaddr * v38; /*0x654770*/
        *((float *)&v35 + 1) = v41; /*0x65477c*/
        v42 = v39 * retaddr; /*0x654786*/
        v36 = v42; /*0x65478e*/
        niNode = a6->members.super.super.niNode; /*0x654796*/
        v43 = retaddr * v40; /*0x654799*/
        v37 = v43; /*0x6547a7*/
        sub_8AB440(niNode, (float *)&v35 + 1, 0, 0.0, 0); /*0x6547af*/
        sub_8A5580((int)a6->members.super.super.niNode, 0); /*0x6547ba*/
        v3 = Script_AddEventToExtraScript(0, &a6->members.super.super.baseExtraList, 0x40); /*0x6547c7*/
      }
    }
  }
  switch ( a1->knockedState ) /*0x6547fc*/
  {
    case 1: /*0x6547fc*/
      *(float *)&slot = a1->GetCurHour(a1); /*0x65491c*/
      GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x65492a*/
      v12 = GameHour; /*0x65492e*/
      v13 = *(float *)&slot; /*0x654932*/
      if ( *(float *)&slot <= (double)GameHour ) /*0x65493d*/
        v14 = v12 - v13; /*0x654949*/
      else
        v14 = v13 + dbl_A492B8 - v12; /*0x654945*/
      *(float *)&slot = v14; /*0x65494b*/
      v35 = *(float *)&slot; /*0x654958*/
      TimeScale = TimeGlobals_GetTimeScale(&MEMORY[0xB332E0]); /*0x65495c*/
      LOBYTE(GameHour) = TimeScale * dbl_A72D40 < v35; /*0x654977*/
      v35 = *(float *)&slot; /*0x654985*/
      v16 = TimeGlobals_GetTimeScale(&MEMORY[0xB332E0]) * dbl_A72D38; /*0x65498e*/
      v17 = v16 < v35; /*0x65499d*/
      sub_5E0A60(a6); /*0x6549a7*/
      if ( v16 < *(float *)&SrcStr /*0x6549eb*/
        || a6->vtbl->super.super.HasFatigue((TESObjectREFR *)a6)
        || !LOBYTE(GameHour)
        || !v17 && !sub_5F0270((MobileObject *)a6, flt_A45FF4) )
      {
        goto LABEL_69; /*0x6549f2*/
      }
      v18 = a1->knockedState; /*0x6549f8*/
      a1->knockedState = 3; /*0x654a00*/
      GameHour = COERCE_FLOAT(TESIdleForm_FindIdleForActor((TESObjectREFR *)dword_B361CC[0x3D], (TESObjectREFR *)a6, 0)); /*0x654a15*/
      a1->knockedState = v18; /*0x654a19*/
      v19 = sub_5E12B0(a6); /*0x654a1f*/
      if ( v19 ) /*0x654a26*/
        (*(void (__thiscall **)(UInt32, _DWORD, _DWORD))(*(_DWORD *)v19 + 0x9C))(v19, 0, 0); /*0x654a36*/
      v20 = LODWORD(v42); /*0x654a38*/
      v21 = LODWORD(v42) == 0; /*0x654a3c*/
      a1->knockedState = 5; /*0x654a3e*/
      if ( v21 ) /*0x654a45*/
        goto LABEL_46; /*0x654a45*/
      ActorAnimData_ReplaceCurrentIdleLoader((char **)v6, v20, 5u); /*0x654a4c*/
      return; /*0x654a58*/
    case 2: /*0x6547fc*/
    case 4: /*0x6547fc*/
      if ( *(_DWORD *)(v6 + 8) && sub_88FA30(*(_DWORD *)(v6 + 8)) > *(float *)&SrcStr ) /*0x65481e*/
        goto LABEL_69; /*0x65481e*/
      Actor::StopDialoguePlayback(a6); /*0x654826*/
      a1->knockedState = 2 * (a1->knockedState == 4) + 1; /*0x654838*/
      v9 = sub_5E12B0(a6); /*0x654840*/
      if ( v9 ) /*0x654847*/
        (*(void (__thiscall **)(UInt32, int, _DWORD))(*(_DWORD *)v9 + 0x9C))(v9, 1, 0); /*0x654857*/
      ActorAnimData_ClearSlot((ActorAnimData *)v6, 5, 0.0); /*0x654863*/
      ActorAnimData_ResetRootMotion(v6); /*0x65486a*/
      ((void (__thiscall *)(MiddleHighProcess *, Actor *))a1->Unk_64)(a1, a6); /*0x65487a*/
      return; /*0x654883*/
    case 3: /*0x6547fc*/
      sub_5E0A60(a6); /*0x654888*/
      if ( v3 < *(float *)&SrcStr /*0x6548b4*/
        || a6->vtbl->super.super.HasFatigue((TESObjectREFR *)a6)
        || Actor::GetDeadState(a6) == 6 )
      {
        Actor::GetDeadState(a6); /*0x654904*/
      }
      else
      {
        IdleForActor = TESIdleForm_FindIdleForActor((TESObjectREFR *)dword_B361CC[0x3D], (TESObjectREFR *)a6, 0); /*0x6548bf*/
        if ( IdleForActor ) /*0x6548c6*/
        {
          ActorAnimData_ReplaceCurrentIdleLoader((char **)v6, (UInt32)IdleForActor, 5u); /*0x6548d1*/
          v11 = sub_5E12B0(a6); /*0x6548d8*/
          if ( v11 ) /*0x6548df*/
            (*(void (__thiscall **)(UInt32, _DWORD, _DWORD))(*(_DWORD *)v11 + 0x9C))(v11, 0, 0); /*0x6548ef*/
          a1->knockedState = 5; /*0x6548f2*/
        }
        else
        {
LABEL_46:
          Name = TESObjectREFR_GetName((TESObjectREFR *)a6); /*0x654a5b*/
          PrintError("No 'GetUp' animation found for actor '%s'.", Name); /*0x654a68*/
          ((void (__thiscall *)(MiddleHighProcess *, Actor *))a1->Unk_BD)(a1, a6); /*0x654a7b*/
        }
      }
      return; /*0x6548ff*/
    case 5: /*0x6547fc*/
      if ( ActorAnimData_IsCurrentIdleReady((ActorAnimData *)v6) /*0x654ab0*/
        && (!ActorAnimData_GetNormalizedSequenceSlot((ActorAnimData *)v6, 0)
         || *((_DWORD *)ActorAnimData_GetNormalizedSequenceSlot((ActorAnimData *)v6, 0) + 0x11) == 1) )
      {
        IsSwimming = Actor_IsSwimming(a6); /*0x654ab8*/
        v24 = (ActorAnimData *)v6; /*0x654abf*/
        if ( !IsSwimming ) /*0x654ac1*/
        {
          if ( ActorAnimData_StartQueuedIdleAction((ActorAnimData *)v6, (PlayerCharacter *)a6) ) /*0x654ac4*/
          {
LABEL_54:
            v25 = *(NiNode **)(v6 + 8); /*0x654ad8*/
            v26 = (int)a6->members.super.super.niNode; /*0x654add*/
            GameHour = *(float *)&v26; /*0x654ae0*/
            if ( v25 ) /*0x654ae4*/
            {
              ChildAtIndex = NiNode_GetChildAtIndex(v25, 0); /*0x654af3*/
              v28 = sub_4D96F0(a6, ChildAtIndex, "Bip01 Head"); /*0x654afd*/
              if ( v28 /*0x654b28*/
                || (v28 = NiObjectNET_LookupObjectByName(ChildAtIndex, "Bip01 Neck")) != 0
                || (v28 = NiObjectNET_LookupObjectByName(ChildAtIndex, "Bip01 Spine1")) != 0 )
              {
                sub_4121A0((float *)(v28 + 0x88), (float *)&v35, &ChildAtIndex->members.m_worldTransform.pos.x); /*0x654b40*/
                v29 = (*((_BYTE *)*a1->GetCharProxy(a1, &v34) + 0x1F4) & 1) == 0; /*0x654b64*/
                NiPointerSlot_Release(&slot); /*0x654b67*/
                if ( v29 ) /*0x654b6e*/
                {
                  v30 = sub_4D96F0(a6, (_DWORD *)LODWORD(v43), "Bip01 Spine"); /*0x654b7c*/
                  if ( v30 ) /*0x654b83*/
                  {
                    if ( sub_897580(v30, 0) ) /*0x654b88*/
                    {
                      v31 = dbl_A3D360; /*0x654ba0*/
                      v34 = v34 * v31; /*0x654ba2*/
                      *(float *)&v35 = *(float *)&v35 * v31; /*0x654bac*/
                      *((float *)&v35 + 1) = v31 * *((float *)&v35 + 1); /*0x654bb4*/
                    }
                  }
                }
                v32 = Vector3_CalculateHeadingRadiansXY(&v34); /*0x654bc2*/
                a1->knockedState = 0; /*0x654bca*/
                ((void (__thiscall *)(Actor *, _DWORD))a6->vtbl->super.Unk_7A)(a6, LODWORD(v32)); /*0x654bde*/
                v26 = LODWORD(v42); /*0x654be0*/
              }
            }
            sub_8A5580(v26, 0); /*0x654be7*/
            sub_8AB8A0(v26, 0.0); /*0x654bf5*/
            sub_424870(&a6->members.super.super.baseExtraList, 0); /*0x654c02*/
            a1->knockedState = 6; /*0x654c08*/
            return; /*0x654c15*/
          }
          v24 = (ActorAnimData *)v6; /*0x654acd*/
        }
        ActorAnimData_CleanupOrPromoteQueuedIdles(v24, 1, 0); /*0x654ad3*/
        goto LABEL_54; /*0x654ad3*/
      }
      if ( *(_DWORD *)(v6 + 0xCC) || *(_DWORD *)(v6 + 0xD0) ) /*0x654c21*/
LABEL_69:
        JUMPOUT(0x654C4D); /*0x654c4d*/
      a1->knockedState = 3; /*0x654c2b*/
      return;
    case 6: /*0x6547fc*/
      if ( !ActorAnimData_IsIdleInactive((_DWORD *)v6) ) /*0x654c44*/
        goto LABEL_69; /*0x654c44*/
      a1->knockedState = 0; /*0x654c46*/
      def_6547FC((int)a6); /*0x654c47*/
      return; /*0x654c47*/
    default:
      goto LABEL_69;
  }
}
