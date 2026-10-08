char __userpurge sub_655BF0@<al>(
        int a1@<ecx>,
        int a2@<ebx>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        TESObjectREFR *a6)
{
  int v8; // eax
  PlayerCharacter *v9; // esi
  int v11; // ecx
  _DWORD *v12; // ebx
  NiNode *v13; // eax
  ActorAnimData *v14; // eax
  NiNode *v15; // eax
  MobileObject *v16; // ecx
  NiObjectNET *v17; // ebx
  bhkCharacterProxy *CharProxy; // ebp
  signed int v19; // edi
  TESWorldSpace *WorldSpace; // eax
  NiNode *v21; // eax
  MobileObject *v22; // ecx
  NiObjectNET *v23; // ebx
  bhkCharacterProxy *v24; // ebp
  signed int v25; // esi
  UInt32 QueuedAnimType; // eax
  BSExtraDataVtbl *DwordAtOffset40; // [esp+24h] [ebp-30h]
  _DWORD *v28; // [esp+28h] [ebp-2Ch]
  ActorAnimData *v30; // [esp+40h] [ebp-14h]
  unsigned __int8 **IdleForActor; // [esp+40h] [ebp-14h]
  int v32; // [esp+44h] [ebp-10h]
  float v33[2]; // [esp+4Ch] [ebp-8h] BYREF
  ActorAnimData *v34; // [esp+58h] [ebp+4h]

  v8 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a6->vtbl[2].super.Unk_0C)( /*0x655c06*/
         a6,
         a5,
         a4,
         a3);
  v9 = (PlayerCharacter *)v8; /*0x655c08*/
  if ( !v8 ) /*0x655c0c*/
    return 0; /*0x655c16*/
  v11 = *(_DWORD *)(v8 + 0x58); /*0x655c19*/
  if ( v11 /*0x655c3f*/
    && (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x184))(v11)
    && v9->super.super.super.process->GetCurrentPackage(v9->super.super.super.process)->members.type == kPackageType_ClearMountPosition )
  {
    return 1; /*0x655c49*/
  }
  v12 = &v9->super.super.super.process->__vftable; /*0x655c55*/
  v34 = v9->vtbl->super.super.super.GetAnimData((TESObjectREFR *)v9); /*0x655c5c*/
  v30 = a6->vtbl->GetAnimData(a6); /*0x655c6c*/
  v32 = (int)v9->vtbl->super.super.super.GetNiNode((TESObjectREFR *)v9); /*0x655c7c*/
  v13 = a6->vtbl->GetNiNode(a6); /*0x655c8a*/
  if ( !v32 || !v13 ) /*0x655c99*/
    goto LABEL_29; /*0x655c99*/
  if ( *(_BYTE *)(a1 + 0x11D) != 4 ) /*0x655ca9*/
  {
    if ( *(_BYTE *)(a1 + 0x11D) == 5 ) /*0x655cb2*/
    {
      if ( ActorAnimData_IsCurrentIdleReady(v34) /*0x655d07*/
        && (!ActorAnimData_GetNormalizedSequenceSlot(v30, 0)
         || *((_DWORD *)ActorAnimData_GetNormalizedSequenceSlot(v30, 0) + 0x11) == 1) )
      {
        v34->unkC4 = 1; /*0x655d10*/
        ActorAnimData_StartQueuedIdleAction(v34, v9); /*0x655d17*/
        v34->unkC4 = 1; /*0x655d20*/
        sub_65AC20((MobileObject *)a6, 0); /*0x655d27*/
        return 1; /*0x655d35*/
      }
      if ( ActorAnimData_IsIdleInactive(v34) ) /*0x655d3c*/
      {
        (*(void (__thiscall **)(int, TESObjectREFR *, _DWORD, _DWORD, int, int))(*(_DWORD *)a1 + 0x370))( /*0x655d5b*/
          a1,
          a6,
          0,
          0,
          0x7F,
          a2);
        sub_625290(v9, v33); /*0x655d64*/
        ((void (__thiscall *)(TESObjectREFR *, float *))a6->vtbl[1].super.Unk_09)(a6, v33); /*0x655d78*/
        v30->unk0C = LODWORD(g_zeroNiPoint3.x); /*0x655d7f*/
        v30->unk10 = LODWORD(g_zeroNiPoint3.y); /*0x655d88*/
        v30->unk14 = LODWORD(g_zeroNiPoint3.z); /*0x655d91*/
        ((void (__thiscall *)(TESObjectREFR *, _DWORD))a6->vtbl[2].super.Unk_0D)(a6, 0); /*0x655da0*/
        ((void (__thiscall *)(PlayerCharacter *, _DWORD))v9->vtbl->super.Unk_E3)(v9, 0); /*0x655dae*/
        sub_5E13D0((TESObjectREFR *)v9, 0); /*0x655db4*/
        v14 = a6->vtbl->GetAnimData(a6); /*0x655dc3*/
        if ( v14 ) /*0x655dc7*/
          ActorAnimData_SampleAndExtractRootMotion((int)v14, v14->unk94, 0, 1); /*0x655dd9*/
        (*(void (__thiscall **)(int, TESObjectREFR *, int))(*(_DWORD *)a1 + 0x188))(a1, a6, 1); /*0x655dec*/
        if ( a6 == (TESObjectREFR *)reference ) /*0x655df5*/
        {
          reference->unk61C = 0.0; /*0x655dfb*/
          v15 = v9->vtbl->super.super.super.GetNiNode((TESObjectREFR *)v9); /*0x655e09*/
          v16 = (MobileObject *)v9; /*0x655e0b*/
        }
        else
        {
          v15 = a6->vtbl->GetNiNode(a6); /*0x655e19*/
          v16 = (MobileObject *)a6; /*0x655e1b*/
        }
        v17 = (NiObjectNET *)v15; /*0x655e1d*/
        CharProxy = MobileObject_GetCharProxy(v16); /*0x655e24*/
        v19 = sub_531D80(); /*0x655e2b*/
        sub_5EA350(CharProxy, v19); /*0x655e30*/
        sub_88D0E0(v17, v19, 1, 0); /*0x655e3b*/
        ((void (__thiscall *)(LowProcess *))v9->super.super.super.process->Unk_61)(v9->super.super.super.process); /*0x655e51*/
        v28 = (_DWORD *)((int (__thiscall *)(PlayerCharacter *, _DWORD))v9->vtbl->super.super.super.GetPos)( /*0x655e66*/
                          v9,
                          v9->super.super.super.super.rot.z);
        DwordAtOffset40 = (BSExtraDataVtbl *)Shared_GetDwordAtOffset40(v9); /*0x655e6e*/
        WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)v9); /*0x655e71*/
        TESObjectREFR_SetStartLocation(v9, (BSExtraDataVtbl *)WorldSpace, DwordAtOffset40, v28, *(float *)&v9); /*0x655e79*/
        return 1; /*0x655e87*/
      }
      return 1; /*0x655fb2*/
    }
LABEL_29:
    ((void (__thiscall *)(PlayerCharacter *, _DWORD))v9->vtbl->super.Unk_E3)(v9, 0); /*0x655fb5*/
    ((void (__thiscall *)(TESObjectREFR *, _DWORD))a6->vtbl[2].super.Unk_0D)(a6, 0); /*0x655fcf*/
    return 0; /*0x655fd4*/
  }
  sub_5E05F0((Actor *)v9, 0x3F); /*0x655e8e*/
  (*(void (__thiscall **)(_DWORD *, PlayerCharacter *, int, _DWORD, int))(*v12 + 0x370))(v12, v9, 5, 0, 0x7F); /*0x655ea4*/
  (*(void (__thiscall **)(int, TESObjectREFR *, int, _DWORD, int))(*(_DWORD *)a1 + 0x370))(a1, a6, 5, 0, 0x7F); /*0x655eb8*/
  IdleForActor = TESIdleForm_FindIdleForActor( /*0x655ed5*/
                   (TESObjectREFR *)dword_B361CC[0x3D],
                   (TESObjectREFR *)v9,
                   *(TESObjectREFR **)(a1 + 0x120));
  (*(void (__thiscall **)(_DWORD *, PlayerCharacter *, _DWORD, _DWORD, int))(*v12 + 0x370))(v12, v9, 0, 0, 0x7F); /*0x655ee2*/
  if ( IdleForActor ) /*0x655eea*/
  {
    QueuedAnimType = TESIdleForm_GetQueuedAnimType(IdleForActor); /*0x655f95*/
    ActorAnimData_ReplaceCurrentIdleLoader((char **)v34, (UInt32)IdleForActor, QueuedAnimType); /*0x655fa4*/
    return 1; /*0x655fa4*/
  }
  ((void (__thiscall *)(PlayerCharacter *, _DWORD))v9->vtbl->super.Unk_E3)(v9, 0); /*0x655efb*/
  v12[2] = 0; /*0x655efd*/
  ((void (__thiscall *)(TESObjectREFR *, _DWORD))a6->vtbl[2].super.Unk_0D)(a6, 0); /*0x655f10*/
  (*(void (__thiscall **)(int, TESObjectREFR *, _DWORD, _DWORD, int))(*(_DWORD *)a1 + 0x370))( /*0x655f29*/
    a1,
    a6,
    0,
    *(_DWORD *)(a1 + 0x120),
    0x7F);
  if ( a6 == (TESObjectREFR *)reference ) /*0x655f32*/
  {
    reference->unk61C = 0.0; /*0x655f38*/
    v21 = v9->vtbl->super.super.super.GetNiNode((TESObjectREFR *)v9); /*0x655f46*/
    v22 = (MobileObject *)v9; /*0x655f48*/
  }
  else
  {
    v21 = a6->vtbl->GetNiNode(a6); /*0x655f56*/
    v22 = (MobileObject *)a6; /*0x655f58*/
  }
  v23 = (NiObjectNET *)v21; /*0x655f5a*/
  v24 = MobileObject_GetCharProxy(v22); /*0x655f61*/
  v25 = sub_531D80(); /*0x655f68*/
  sub_5EA350(v24, v25); /*0x655f6d*/
  sub_88D0E0(v23, v25, 1, 0); /*0x655f78*/
  sub_65AC20((MobileObject *)a6, 0); /*0x655f84*/
  return 0; /*0x655c0e*/
}
