char __userpurge sub_655590@<al>(_BYTE *a1@<ecx>, int a2@<ebx>, double a3@<st2>, TESObjectREFR *a4, int **a5)
{
  int v7; // eax
  TESObjectREFR *v8; // edi
  int v10; // ecx
  int v11; // ebx
  int v12; // eax
  TESForm *v13; // eax
  CHAR *FormModelPAth; // eax
  double v15; // st7
  int (*v16)(void); // eax
  int v17; // eax
  TESObjectCELL *ParentCell; // ebp
  TESObjectCELL *v19; // eax
  TESObjectCELL *v20; // eax
  NiNode *PlayerNode; // eax
  int vtbl_high; // ebx
  int v23; // eax
  MobileObject *v24; // ecx
  _WORD *v25; // ebp
  bhkCharacterProxy *CharProxy; // eax
  double v27; // st7
  double v28; // st6
  double v29; // st7
  UInt32 v30; // eax
  float v31; // [esp+24h] [ebp-3Ch]
  float v32; // [esp+28h] [ebp-38h]
  TESObjectREFRVtbl *vtbl; // [esp+3Ch] [ebp-24h]
  int v35; // [esp+40h] [ebp-20h]
  float *v36; // [esp+40h] [ebp-20h]
  int v37; // [esp+40h] [ebp-20h]
  float v38; // [esp+44h] [ebp-1Ch]
  float v39; // [esp+44h] [ebp-1Ch]
  float v40; // [esp+44h] [ebp-1Ch]
  float v41; // [esp+44h] [ebp-1Ch]
  float v42; // [esp+44h] [ebp-1Ch]
  unsigned __int8 **v43; // [esp+44h] [ebp-1Ch]
  int v44; // [esp+48h] [ebp-18h] BYREF
  char v45; // [esp+4Ch] [ebp-14h] BYREF
  char v46; // [esp+50h] [ebp-10h] BYREF
  float v47; // [esp+54h] [ebp-Ch] BYREF
  int v48; // [esp+58h] [ebp-8h] BYREF
  TESChildCELL *v49; // [esp+64h] [ebp+4h]
  float v50; // [esp+64h] [ebp+4h]

  v7 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[2].super.Unk_0C)(a4);
  v8 = (TESObjectREFR *)v7;
  if ( !v7 )
    return 0;
  v10 = *(_DWORD *)(v7 + 0x58);
  if ( v10
    && (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x174))(v10)
    && *(_BYTE *)((*((int (__thiscall **)(TESObjectREFRVtbl *))v8[1].vtbl->super.super.InitializeComponent + 0x5D))(v8[1].vtbl)
                + 0x20) == 0x1E )
  {
    return 1;
  }
  vtbl = v8[1].vtbl;
  v49 = (TESChildCELL *)v8->vtbl->GetAnimData(v8);
  v11 = (int)a4->vtbl->GetAnimData(a4);
  v35 = (int)v8->vtbl->GetNiNode(v8);
  v12 = (int)a4->vtbl->GetNiNode(a4);
  v44 = v12;
  if ( !v35 || !v12 )
    return 0;
  v36 = (float *)(*(int (__thiscall **)(_DWORD, const char *))(**((_DWORD **)v49[0x26].vtbl + 0x1F) + 0x4C))(
                   *((_DWORD *)v49[0x26].vtbl + 0x1F),
                   "ActorParent");
  sub_625290(v8, &v47);
  if ( !v36 )
  {
    v13 = v8->vtbl->GetBaseForm(v8);
    FormModelPAth = GetFormModelPAth(v13);
    PrintError("Missing 'ActorParent' node for horse '%s'.", FormModelPAth);
    return 0;
  }
  v15 = ((double (__thiscall *)(TESObjectREFR *))a4->vtbl->GetScale)(a4);
  v16 = *(int (**)(void))(*(_DWORD *)v36 + 8);
  v38 = 1.0 / v15;
  v39 = fabs(v38);
  v36[0x18] = v39;
  v37 = v16();
  if ( !a1[0x11D] )
  {
    if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, _DWORD, int))v8->vtbl->IsDead)(v8, 0, a2)
      && (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *))v8->vtbl[2].super.Unk_0E)(v8) == a4 )
    {
      (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)a1 + 0x2C4))(a1, 0x400, 0);
      if ( a4 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
        (*(void (__thiscall **)(_BYTE *, TESObjectREFR *))(*(_DWORD *)a1 + 0x194))(a1, a4);
      (*(void (__thiscall **)(int, TESObjectREFR *, int, _DWORD, int))(*(_DWORD *)v37 + 0x370))(v37, v8, 2, 0, 0x7F);
      v43 = sub_521450((TESObjectREFR *)g_idleAnimationMap, v8, *((_BYTE **)a1 + 0x48));
      (*(void (__thiscall **)(int, TESObjectREFR *, _DWORD, _DWORD, int))(*(_DWORD *)v37 + 0x370))(v37, v8, 0, 0, 0x7F);
      if ( !v43 )
      {
        ((void (__thiscall *)(TESObjectREFR *, _DWORD))a4->vtbl[2].super.Unk_0D)(a4, 0);
        ((void (__thiscall *)(TESObjectREFR *, _DWORD))v8->vtbl[2].super.Unk_0F)(v8, 0);
        vtbl->super.super.CopyFromBase = 0;
        return 0;
      }
      v30 = sub_520200(v43);
      sub_475300(a5, (UInt32)v43, v30);
      ((void (__thiscall *)(TESObjectREFR *, int *))a4->vtbl[1].super.Unk_09)(a4, &v48);
      *(float *)(v11 + 0xC) = Vector3_InitValue_;
      *(float *)(v11 + 0x10) = *(&Vector3_InitValue_ + 1);
      *(float *)(v11 + 0x14) = dword_B3F9B0;
      (*(void (__thiscall **)(_BYTE *, TESObjectREFR *, int, _DWORD, int))(*(_DWORD *)a1 + 0x370))(a1, a4, 2, 0, 0x7F);
      sub_65AC20(a4, 1);
      return 1;
    }
    (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)a1 + 0x178))(a1, 0);
    ((void (__thiscall *)(TESObjectREFR *, _DWORD))a4->vtbl[2].super.Unk_0D)(a4, 0);
    ((void (__thiscall *)(TESObjectREFR *, _DWORD))v8->vtbl[2].super.Unk_0D)(v8, 0);
    vtbl->super.super.CopyFromBase = 0;
    return 0;
  }
  if ( a1[0x11D] != 2 )
  {
    if ( a1[0x11D] == 3 )
    {
      if ( sub_4711F0(v49)
        && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x2D0))(a1) == 0xFFFFFFFF
        && (!sub_4706E0((ActorAnimData *)v11, 0) || sub_4706E0((ActorAnimData *)v11, 0)[8].next == (PowerListEntry *)1) )
      {
        sub_470FC0((_DWORD *)v11, 0, 0.0);
        v17 = v44;
        *(_BYTE *)(v11 + 0xC4) = 1;
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v37 + 0x84))(v37, v17, 1);
        ParentCell = TESObjectREFR_GetParentCell(v8);
        if ( TESObjectREFR_GetParentCell(a4) != ParentCell )
        {
          if ( TESObjectREFR_GetParentCell(v8) )
          {
            v19 = TESObjectREFR_GetParentCell(v8);
            sub_4D35D0(v19, a3, 1.0, 0.0, a4);
          }
          else if ( TESObjectREFR_GetParentCell(a4) )
          {
            v20 = TESObjectREFR_GetParentCell(a4);
            sub_4CECD0(v20, a4);
          }
        }
        v49[0x25].vtbl = *(void **)(v11 + 0x94);
        sub_5E13D0(v8, 1);
        if ( a4 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
        {
          PlayerNode = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1);
          PlayerNode->members.super.m_localTransform.pos.x = Vector3_InitValue_;
          PlayerNode->members.super.m_localTransform.pos.y = *(&Vector3_InitValue_ + 1);
          PlayerNode->members.super.m_localTransform.pos.z = dword_B3F9B0;
          (*(void (__thiscall **)(int, NiNode *, int))(*(_DWORD *)v37 + 0x84))(v37, PlayerNode, 1);
          vtbl_high = HIWORD(sub_65ABE0(TESDataHandler_g_PlayerRef, (TESObjectREFR *)&v45)->vtbl);
          v23 = (int)v8->vtbl->GetNiNode(v8);
          v24 = (MobileObject *)v8;
        }
        else
        {
          vtbl_high = HIWORD(sub_65ABE0(v8, (TESObjectREFR *)&v46)->vtbl);
          v23 = (int)a4->vtbl->GetNiNode(a4);
          v24 = (MobileObject *)a4;
        }
        v25 = (_WORD *)v23;
        CharProxy = MobileObject_GetCharProxy(v24);
        sub_5EA350(CharProxy, vtbl_high);
        sub_88D0E0(v25, vtbl_high, 1, 0);
        LOBYTE(v49[0x31].vtbl) = 1;
        if ( sub_477E50((ActorAnimData *)v49, (PlayerCharacter *)v8) )
        {
          v32 = flt_A30634;
          LOBYTE(v49[0x31].vtbl) = 1;
          sub_476D10((AnimSequenceSingle *)v49, (int)v8, a3, 1.0, 0.0, (int)v8, 0.0, v32);
          sub_474510((ActorAnimData *)v49, v8);
          return 1;
        }
      }
      else if ( sub_472EA0(v49) )
      {
        sub_470FC0(v49, 5, 0.0);
        LOBYTE(v49[0x31].vtbl) = 1;
        Actor_ProcessAction((Actor *)v8, a3, 1.0, 1.0, 1.0, 1.0);
        (*(void (__thiscall **)(_BYTE *, TESObjectREFR *, int))(*(_DWORD *)a1 + 0x188))(a1, a4, 1);
        a4->vtbl[1].super.MarkAsModified((TESForm *)a4, COERCE_UINT32(0.0));
        (*(void (__thiscall **)(_BYTE *, TESObjectREFR *, int, _DWORD, int))(*(_DWORD *)a1 + 0x370))(a1, a4, 4, 0, 0x7F);
        return 1;
      }
    }
    return 1;
  }
  v50 = ((double (__thiscall *)(TESObjectREFR *))v8->vtbl[1].super.Unk_0E)(v8) + dbl_A6E740;
  v27 = v50;
  v28 = dbl_A3D5B0;
  if ( v50 >= 0.0 )
  {
    if ( v28 <= v27 )
    {
      unknown_libname_14(v28, v27);
      v27 = v50;
    }
  }
  else
  {
    unknown_libname_14(v28, v27);
    v50 = v50 + dbl_A3D5B0;
    v27 = v50;
  }
  *(float *)&v44 = 0.0;
  v31 = v27;
  sub_683D80((int)a4, v31, (int)&v44);
  v40 = v27;
  v41 = fabs(v40);
  v29 = v41;
  v42 = (double)iActorKeepTurnDegree * dbl_A31C78;
  if ( v42 >= v29 )
  {
    sub_5E05F0((Actor *)a4, 0x30);
    ((void (__thiscall *)(TESObjectREFR *, float))a4->vtbl[1].super.MarkAsModified)(a4, COERCE_FLOAT(LODWORD(v50)));
    ((void (__thiscall *)(TESObjectREFR *, float *))a4->vtbl[1].super.Unk_09)(a4, &v47);
    *(float *)(v11 + 0xC) = Vector3_InitValue_;
    *(float *)(v11 + 0x10) = *(&Vector3_InitValue_ + 1);
    *(float *)(v11 + 0x14) = dword_B3F9B0;
    (*(void (__thiscall **)(_BYTE *, TESObjectREFR *, int, _DWORD, int))(*(_DWORD *)a1 + 0x370))(a1, a4, 3, 0, 0x7F);
  }
  else
  {
    sub_685530((Actor *)a4, v50, 1);
  }
  return 1;
}
