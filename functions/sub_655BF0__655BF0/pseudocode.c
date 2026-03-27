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
  NiNode *v17; // ebx
  bhkCharacterProxy *CharProxy; // ebp
  signed int v19; // edi
  TESWorldSpace *WorldSpace; // eax
  NiNode *v21; // eax
  MobileObject *v22; // ecx
  NiNode *v23; // ebx
  bhkCharacterProxy *v24; // ebp
  signed int v25; // esi
  UInt32 v26; // eax
  TESObjectCELL *ParentCell; // [esp+24h] [ebp-30h]
  _DWORD *v28; // [esp+28h] [ebp-2Ch]
  ActorAnimData *v30; // [esp+40h] [ebp-14h]
  unsigned __int8 **v31; // [esp+40h] [ebp-14h]
  int v32; // [esp+44h] [ebp-10h]
  float v33[2]; // [esp+4Ch] [ebp-8h] BYREF
  ActorAnimData *v34; // [esp+58h] [ebp+4h]

  v8 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a6->vtbl[2].super.Unk_0C)(
         a6,
         a5,
         a4,
         a3);
  v9 = (PlayerCharacter *)v8;
  if ( !v8 )
    return 0;
  v11 = *(_DWORD *)(v8 + 0x58);
  if ( v11
    && (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x184))(v11)
    && v9->super.super.super.process->GetCurrentPackage(v9->super.super.super.process)->members.type == 0x1E )
  {
    return 1;
  }
  v12 = &v9->super.super.super.process->__vftable;
  v34 = v9->vtbl->super.super.super.GetAnimData((TESObjectREFR *)v9);
  v30 = a6->vtbl->GetAnimData(a6);
  v32 = (int)v9->vtbl->super.super.super.GetNiNode((TESObjectREFR *)v9);
  v13 = a6->vtbl->GetNiNode(a6);
  if ( !v32 || !v13 )
    goto LABEL_29;
  if ( *(_BYTE *)(a1 + 0x11D) != 4 )
  {
    if ( *(_BYTE *)(a1 + 0x11D) == 5 )
    {
      if ( sub_4711F0(v34) && (!sub_4706E0(v30, 0) || sub_4706E0(v30, 0)[8].next == (PowerListEntry *)1) )
      {
        v34->unkC4 = 1;
        sub_477E50(v34, v9);
        v34->unkC4 = 1;
        sub_65AC20(a6, 0);
        return 1;
      }
      if ( sub_472EA0(v34) )
      {
        (*(void (__thiscall **)(int, TESObjectREFR *, _DWORD, _DWORD, int, int))(*(_DWORD *)a1 + 0x370))(
          a1,
          a6,
          0,
          0,
          0x7F,
          a2);
        sub_625290(v9, v33);
        ((void (__thiscall *)(TESObjectREFR *, float *))a6->vtbl[1].super.Unk_09)(a6, v33);
        *(float *)&v30->unk0C = Vector3_InitValue_;
        v30->unk10 = *(UInt32 *)(&Vector3_InitValue_ + 1);
        *(float *)&v30->unk14 = dword_B3F9B0;
        ((void (__thiscall *)(TESObjectREFR *, _DWORD))a6->vtbl[2].super.Unk_0D)(a6, 0);
        ((void (__thiscall *)(PlayerCharacter *, _DWORD))v9->vtbl->super.Unk_E3)(v9, 0);
        sub_5E13D0((TESObjectREFR *)v9, 0);
        v14 = a6->vtbl->GetAnimData(a6);
        if ( v14 )
          sub_471230((int)v14, v14->unk94, 0, 1);
        (*(void (__thiscall **)(int, TESObjectREFR *, int))(*(_DWORD *)a1 + 0x188))(a1, a6, 1);
        if ( a6 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
        {
          TESDataHandler_g_PlayerRef->unk61C = 0.0;
          v15 = v9->vtbl->super.super.super.GetNiNode((TESObjectREFR *)v9);
          v16 = (MobileObject *)v9;
        }
        else
        {
          v15 = a6->vtbl->GetNiNode(a6);
          v16 = (MobileObject *)a6;
        }
        v17 = v15;
        CharProxy = MobileObject_GetCharProxy(v16);
        v19 = sub_531D80();
        sub_5EA350(CharProxy, v19);
        sub_88D0E0(v17, v19, 1, 0);
        ((void (__thiscall *)(LowProcess *))v9->super.super.super.process->Unk_61)(v9->super.super.super.process);
        v28 = (_DWORD *)((int (__thiscall *)(PlayerCharacter *, _DWORD))v9->vtbl->super.super.super.GetPos)(
                          v9,
                          v9->super.super.super.super.rot.z);
        ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)v9);
        WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)v9);
        sub_4D7A20(v9, (BSExtraDataVtbl *)WorldSpace, (BSExtraDataVtbl *)ParentCell, v28, *(float *)&v9);
        return 1;
      }
      return 1;
    }
LABEL_29:
    ((void (__thiscall *)(PlayerCharacter *, _DWORD))v9->vtbl->super.Unk_E3)(v9, 0);
    ((void (__thiscall *)(TESObjectREFR *, _DWORD))a6->vtbl[2].super.Unk_0D)(a6, 0);
    return 0;
  }
  sub_5E05F0((Actor *)v9, 0x3F);
  (*(void (__thiscall **)(_DWORD *, PlayerCharacter *, int, _DWORD, int))(*v12 + 0x370))(v12, v9, 5, 0, 0x7F);
  (*(void (__thiscall **)(int, TESObjectREFR *, int, _DWORD, int))(*(_DWORD *)a1 + 0x370))(a1, a6, 5, 0, 0x7F);
  v31 = sub_521450((TESObjectREFR *)g_idleAnimationMap, (TESObjectREFR *)v9, *(_BYTE **)(a1 + 0x120));
  (*(void (__thiscall **)(_DWORD *, PlayerCharacter *, _DWORD, _DWORD, int))(*v12 + 0x370))(v12, v9, 0, 0, 0x7F);
  if ( v31 )
  {
    v26 = sub_520200(v31);
    sub_475300((int **)v34, (UInt32)v31, v26);
    return 1;
  }
  ((void (__thiscall *)(PlayerCharacter *, _DWORD))v9->vtbl->super.Unk_E3)(v9, 0);
  v12[2] = 0;
  ((void (__thiscall *)(TESObjectREFR *, _DWORD))a6->vtbl[2].super.Unk_0D)(a6, 0);
  (*(void (__thiscall **)(int, TESObjectREFR *, _DWORD, _DWORD, int))(*(_DWORD *)a1 + 0x370))(
    a1,
    a6,
    0,
    *(_DWORD *)(a1 + 0x120),
    0x7F);
  if ( a6 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
  {
    TESDataHandler_g_PlayerRef->unk61C = 0.0;
    v21 = v9->vtbl->super.super.super.GetNiNode((TESObjectREFR *)v9);
    v22 = (MobileObject *)v9;
  }
  else
  {
    v21 = a6->vtbl->GetNiNode(a6);
    v22 = (MobileObject *)a6;
  }
  v23 = v21;
  v24 = MobileObject_GetCharProxy(v22);
  v25 = sub_531D80();
  sub_5EA350(v24, v25);
  sub_88D0E0(v23, v25, 1, 0);
  sub_65AC20(a6, 0);
  return 0;
}
