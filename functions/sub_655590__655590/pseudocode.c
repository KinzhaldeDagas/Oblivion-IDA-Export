char __userpurge sub_655590@<al>(TESObjectREFR **a1@<ecx>, int a2@<ebx>, double a3@<st0>, TESObjectREFR *a4, char **a5)
{
  int v8; // eax
  TESObjectREFR *v9; // edi
  int v11; // ecx
  ActorAnimData *v12; // ebx
  NiNode *v13; // eax
  TESForm *v14; // eax
  CHAR *FormModelPAth; // eax
  double v16; // st7
  int (*v17)(void); // eax
  float v18; // eax
  UInt32 DwordAtOffset40; // ebp
  TESObjectCELL *v20; // eax
  TESObjectCELL *v21; // eax
  NiNode *NodeByPerspective; // eax
  int vtbl_high; // ebx
  NiNode *v24; // eax
  MobileObject *v25; // ecx
  NiObjectNET *v26; // ebp
  bhkCharacterProxy *CharProxy; // eax
  double v28; // st7
  double v29; // st6
  double v30; // st7
  UInt32 QueuedAnimType; // eax
  float arg0c; // [esp+24h] [ebp-3Ch]
  float arg1; // [esp+28h] [ebp-38h]
  TESObjectREFRVtbl *vtbl; // [esp+3Ch] [ebp-24h]
  int v36; // [esp+40h] [ebp-20h]
  float *v37; // [esp+40h] [ebp-20h]
  int v38; // [esp+40h] [ebp-20h]
  float v39; // [esp+44h] [ebp-1Ch]
  float v40; // [esp+44h] [ebp-1Ch]
  float v41; // [esp+44h] [ebp-1Ch]
  float v42; // [esp+44h] [ebp-1Ch]
  float v43; // [esp+44h] [ebp-1Ch]
  unsigned __int8 **IdleForActor; // [esp+44h] [ebp-1Ch]
  float v45; // [esp+48h] [ebp-18h] BYREF
  char v46; // [esp+4Ch] [ebp-14h] BYREF
  char v47; // [esp+50h] [ebp-10h] BYREF
  float v48; // [esp+54h] [ebp-Ch] BYREF
  int v49; // [esp+58h] [ebp-8h] BYREF
  ActorAnimData *v50; // [esp+64h] [ebp+4h]
  float v51; // [esp+64h] [ebp+4h]

  v8 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>))a4->vtbl[2].super.Unk_0C)(a4, a3); /*0x6555a6*/
  v9 = (TESObjectREFR *)v8; /*0x6555a8*/
  if ( !v8 ) /*0x6555ac*/
    return 0; /*0x6555b6*/
  v11 = *(_DWORD *)(v8 + 0x58); /*0x6555b9*/
  if ( v11 /*0x6555df*/
    && (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x174))(v11)
    && *(_BYTE *)((*((int (__thiscall **)(TESObjectREFRVtbl *))v9[1].vtbl->super.super.InitializeComponent + 0x5D))(v9[1].vtbl)
                + 0x20) == 0x1E )
  {
    return 1; /*0x6555e9*/
  }
  vtbl = v9[1].vtbl; /*0x6555f1*/
  v50 = v9->vtbl->GetAnimData(v9); /*0x655602*/
  v12 = a4->vtbl->GetAnimData(a4); /*0x655612*/
  v36 = (int)v9->vtbl->GetNiNode(v9); /*0x655620*/
  *(float *)&v13 = COERCE_FLOAT((int)a4->vtbl->GetNiNode(a4)); /*0x65562c*/
  v45 = *(float *)&v13; /*0x655633*/
  if ( !v36 || *(float *)&v13 == 0.0 ) /*0x65563f*/
    return 0; /*0x655be0*/
  v37 = (float *)(*(int (__thiscall **)(_DWORD, const char *))(**((_DWORD **)v50->manager + 0x1F) + 0x4C))( /*0x65565e*/
                   *((_DWORD *)v50->manager + 0x1F),
                   "ActorParent");
  sub_625290(v9, &v48); /*0x655669*/
  if ( !v37 ) /*0x655673*/
  {
    v14 = v9->vtbl->GetBaseForm(v9); /*0x65567f*/
    FormModelPAth = GetFormModelPAth(v14); /*0x655682*/
    PrintError("Missing 'ActorParent' node for horse '%s'.", FormModelPAth); /*0x65568d*/
    return 0; /*0x65569e*/
  }
  v16 = ((double (__thiscall *)(TESObjectREFR *))a4->vtbl->GetScale)(a4); /*0x6556ab*/
  v17 = *(int (**)(void))(*(_DWORD *)v37 + 8); /*0x6556b7*/
  v39 = 1.0 / v16; /*0x6556ba*/
  v40 = fabs(v39); /*0x6556c4*/
  v37[0x18] = v40; /*0x6556cc*/
  v38 = v17(); /*0x6556d1*/
  if ( !*((_BYTE *)a1 + 0x11D) ) /*0x6556df*/
  {
    if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, _DWORD, int))v9->vtbl->IsDead)(v9, 0, a2) /*0x655a94*/
      && (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *))v9->vtbl[2].super.Unk_0E)(v9) == a4 )
    {
      (*(void (__thiscall **)(TESObjectREFR **, int, _DWORD))&(*a1)[8].member.super.type)(a1, 0x400, 0); /*0x655aac*/
      if ( a4 != (TESObjectREFR *)reference ) /*0x655ab4*/
        ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *))LODWORD((*a1)[4].member.pos[2]))(a1, a4); /*0x655ac2*/
      (*(void (__thiscall **)(int, TESObjectREFR *, int, _DWORD, int))(*(_DWORD *)v38 + 0x370))(v38, v9, 2, 0, 0x7F); /*0x655ad7*/
      IdleForActor = TESIdleForm_FindIdleForActor((TESObjectREFR *)dword_B361CC[0x3D], v9, a1[0x48]); /*0x655af8*/
      (*(void (__thiscall **)(int, TESObjectREFR *, _DWORD, _DWORD, int))(*(_DWORD *)v38 + 0x370))(v38, v9, 0, 0, 0x7F); /*0x655b03*/
      if ( !IdleForActor ) /*0x655b0b*/
      {
        ((void (__thiscall *)(TESObjectREFR *, _DWORD))a4->vtbl[2].super.Unk_0D)(a4, 0); /*0x655b18*/
        ((void (__thiscall *)(TESObjectREFR *, _DWORD))v9->vtbl[2].super.Unk_0F)(v9, 0); /*0x655b26*/
        vtbl->super.super.CopyFromBase = 0; /*0x655b2f*/
        return 0; /*0x655b3c*/
      }
      QueuedAnimType = TESIdleForm_GetQueuedAnimType(IdleForActor); /*0x655b3f*/
      ActorAnimData_ReplaceCurrentIdleLoader(a5, (UInt32)IdleForActor, QueuedAnimType); /*0x655b4e*/
      ((void (__thiscall *)(TESObjectREFR *, int *))a4->vtbl[1].super.Unk_09)(a4, &v49); /*0x655b62*/
      v12->unk0C = LODWORD(g_zeroNiPoint3.x); /*0x655b69*/
      v12->unk10 = LODWORD(g_zeroNiPoint3.y); /*0x655b72*/
      v12->unk14 = LODWORD(g_zeroNiPoint3.z); /*0x655b7f*/
      ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *, int, _DWORD, int))(*a1)[0xA].vtbl)(a1, a4, 2, 0, 0x7F); /*0x655b90*/
      sub_65AC20((MobileObject *)a4, 1); /*0x655b96*/
      return 1; /*0x655b96*/
    }
    ((void (__thiscall *)(TESObjectREFR **, _DWORD))(*a1)[4].member.childCell.GetChildCell)(a1, 0); /*0x655bb4*/
    ((void (__thiscall *)(TESObjectREFR *, _DWORD))a4->vtbl[2].super.Unk_0D)(a4, 0); /*0x655bc2*/
    ((void (__thiscall *)(TESObjectREFR *, _DWORD))v9->vtbl[2].super.Unk_0D)(v9, 0); /*0x655bd0*/
    vtbl->super.super.CopyFromBase = 0; /*0x655bd6*/
    return 0; /*0x655bd6*/
  }
  if ( *((_BYTE *)a1 + 0x11D) != 2 ) /*0x6556e8*/
  {
    if ( *((_BYTE *)a1 + 0x11D) == 3 ) /*0x6556f1*/
    {
      if ( ActorAnimData_IsCurrentIdleReady(v50) /*0x655738*/
        && ((int (__thiscall *)(TESObjectREFR **))(*a1)[8].member.super.modlist.data)(a1) == 0xFFFFFFFF
        && (!ActorAnimData_GetNormalizedSequenceSlot(v12, 0)
         || *((_DWORD *)ActorAnimData_GetNormalizedSequenceSlot(v12, 0) + 0x11) == 1) )
      {
        ActorAnimData_ClearSlot(v12, 0, 0.0); /*0x655748*/
        v18 = v45; /*0x655751*/
        v12->unkC4 = 1; /*0x655755*/
        (*(void (__thiscall **)(int, float, int))(*(_DWORD *)v38 + 0x84))(v38, COERCE_FLOAT(LODWORD(v18)), 1); /*0x655767*/
        DwordAtOffset40 = Shared_GetDwordAtOffset40(v9); /*0x655772*/
        if ( Shared_GetDwordAtOffset40(a4) != DwordAtOffset40 ) /*0x65577b*/
        {
          if ( Shared_GetDwordAtOffset40(v9) ) /*0x65577f*/
          {
            v20 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v9); /*0x65578b*/
            TESObjectCELL_AddReference(v20, a4); /*0x655792*/
          }
          else if ( Shared_GetDwordAtOffset40(a4) ) /*0x65579b*/
          {
            v21 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a4); /*0x6557a7*/
            TESObjectCELL_RemoveReference(v21, a4); /*0x6557ae*/
          }
        }
        v50->unk94 = v12->unk94; /*0x6557bf*/
        sub_5E13D0(v9, 1); /*0x6557c7*/
        if ( a4 == (TESObjectREFR *)reference ) /*0x6557d4*/
        {
          NodeByPerspective = PlayerCharacter_GetNodeByPerspective(reference, 1); /*0x6557d8*/
          NodeByPerspective->members.super.m_localTransform.pos.x = g_zeroNiPoint3.x; /*0x6557e3*/
          NodeByPerspective->members.super.m_localTransform.pos.y = g_zeroNiPoint3.y; /*0x6557ec*/
          NodeByPerspective->members.super.m_localTransform.pos.z = g_zeroNiPoint3.z; /*0x6557f5*/
          (*(void (__thiscall **)(int, NiNode *, int))(*(_DWORD *)v38 + 0x84))(v38, NodeByPerspective, 1); /*0x655807*/
          vtbl_high = HIWORD(MobileObject_GetCollisionFilterInfo((MobileObject *)reference, (TESObjectREFR *)&v46)->vtbl); /*0x65581b*/
          v24 = v9->vtbl->GetNiNode(v9); /*0x655827*/
          v25 = (MobileObject *)v9; /*0x655829*/
        }
        else
        {
          vtbl_high = HIWORD(MobileObject_GetCollisionFilterInfo((MobileObject *)v9, (TESObjectREFR *)&v47)->vtbl); /*0x65583b*/
          v24 = a4->vtbl->GetNiNode(a4); /*0x655847*/
          v25 = (MobileObject *)a4; /*0x655849*/
        }
        v26 = (NiObjectNET *)v24; /*0x65584b*/
        CharProxy = MobileObject_GetCharProxy(v25); /*0x65584d*/
        sub_5EA350(CharProxy, vtbl_high); /*0x655855*/
        sub_88D0E0(v26, vtbl_high, 1, 0); /*0x655860*/
        v50->unkC4 = 1; /*0x65586f*/
        if ( ActorAnimData_StartQueuedIdleAction(v50, (PlayerCharacter *)v9) ) /*0x655876*/
        {
          arg1 = kTerrainLODQuadRayDirectionZ; /*0x65588c*/
          v50->unkC4 = 1; /*0x655894*/
          ActorAnimData_Update(v50, (Actor *)v9, 0.0, arg1); /*0x65589f*/
          ActorAnimData_ApplyToActor(v50, v9); /*0x6558a7*/
          return 1; /*0x6558b5*/
        }
      }
      else if ( ActorAnimData_IsIdleInactive(v50) ) /*0x6558be*/
      {
        ActorAnimData_ClearSlot(v50, 5, 0.0); /*0x6558d5*/
        v50->unkC4 = 1; /*0x6558e8*/
        Actor_ProcessAction((Actor *)v9, 1.0, 1.0); /*0x6558ef*/
        ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *, int))LODWORD((*a1)[4].member.rot.z))(a1, a4, 1); /*0x655902*/
        a4->vtbl[1].super.MarkAsModified((TESForm *)a4, COERCE_UINT32(0.0)); /*0x655914*/
        ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *, int, _DWORD, int))(*a1)[0xA].vtbl)(a1, a4, 4, 0, 0x7F); /*0x655928*/
        return 1; /*0x655933*/
      }
    }
    return 1; /*0x655ba4*/
  }
  v51 = ((double (__thiscall *)(TESObjectREFR *))v9->vtbl[1].super.Unk_0E)(v9) + dbl_A6E740; /*0x655948*/
  v28 = v51; /*0x655956*/
  v29 = dbl_A3D5B0; /*0x65595b*/
  if ( v51 >= 0.0 ) /*0x655961*/
  {
    if ( v29 <= v28 ) /*0x655987*/
    {
      unknown_libname_14(v29, v28); /*0x655989*/
      v28 = v51; /*0x65599a*/
    }
  }
  else
  {
    unknown_libname_14(v29, v28); /*0x655963*/
    v51 = v51 + dbl_A3D5B0; /*0x655976*/
    v28 = v51; /*0x65597a*/
  }
  v45 = 0.0; /*0x6559a9*/
  arg0c = v28; /*0x6559ae*/
  sub_683D80((int)a4, arg0c, &v45); /*0x6559b2*/
  v41 = v28; /*0x6559b7*/
  v42 = fabs(v41); /*0x6559c4*/
  v30 = v42; /*0x6559c8*/
  v43 = (double)MEMORY[0xB36C18] * dbl_A31C78; /*0x6559d8*/
  if ( v43 >= v30 ) /*0x6559e7*/
  {
    sub_5E05F0((Actor *)a4, 0x30); /*0x655a0c*/
    a4->vtbl[1].super.MarkAsModified((TESForm *)a4, LODWORD(v51)); /*0x655a23*/
    ((void (__thiscall *)(TESObjectREFR *, float *))a4->vtbl[1].super.Unk_09)(a4, &v48); /*0x655a34*/
    v12->unk0C = LODWORD(g_zeroNiPoint3.x); /*0x655a3b*/
    v12->unk10 = LODWORD(g_zeroNiPoint3.y); /*0x655a44*/
    v12->unk14 = LODWORD(g_zeroNiPoint3.z); /*0x655a51*/
    ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *, int, _DWORD, int))(*a1)[0xA].vtbl)(a1, a4, 3, 0, 0x7F); /*0x655a62*/
  }
  else
  {
    sub_685530((Actor *)a4, v51, 1); /*0x6559f4*/
  }
  return 1; /*0x6555ae*/
}
