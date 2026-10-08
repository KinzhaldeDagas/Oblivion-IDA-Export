char __userpurge sub_654F10@<al>(
        _DWORD *a1@<ecx>,
        int a2@<ebx>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        Actor *a6)
{
  int v8; // ebp
  int v9; // ecx
  char result; // al
  char v11; // al
  UInt32 v12; // eax
  unsigned __int8 **IdleForActor; // eax
  double v14; // st7
  double v15; // st7
  ActorVtbl *vtbl; // ebp
  int v17; // eax
  int v18; // eax
  TESForm *v19; // eax
  BSExtraDataVtbl *v20; // eax
  TESForm *v21; // eax
  BSExtraDataVtbl *v22; // eax
  UInt32 QueuedAnimType; // eax
  int v24; // ebx
  double v25; // st7
  double v26; // st7
  ActorVtbl *v27; // ebx
  bhkCharacterProxy *v28; // esi
  float v29; // [esp+24h] [ebp-1Ch]
  int v30; // [esp+28h] [ebp-18h]
  float v31; // [esp+28h] [ebp-18h]
  char v32; // [esp+38h] [ebp-8h]
  void *slot; // [esp+3Ch] [ebp-4h] BYREF
  Actor *v34; // [esp+44h] [ebp+4h]
  float v35; // [esp+44h] [ebp+4h]
  char v36; // [esp+44h] [ebp+4h]
  float v37; // [esp+44h] [ebp+4h]

  v8 = ((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>, double@<st1>))a6->vtbl->super.super.GetAnimData)( /*0x654f28*/
         a6,
         a5,
         a4);
  if ( !v8 ) /*0x654f2c*/
    return 0; /*0x654f2c*/
  v9 = a1[0x48]; /*0x654f2e*/
  if ( !v9 ) /*0x654f36*/
  {
    (*(void (__thiscall **)(_DWORD *, Actor *, _DWORD, _DWORD, int))(*a1 + 0x370))(a1, a6, 0, 0, 0x7F); /*0x654f47*/
    (*(void (__thiscall **)(_DWORD *, Actor *, int))(*a1 + 0x188))(a1, a6, 1); /*0x654f56*/
    return 0; /*0x654f60*/
  }
  v30 = a2; /*0x654f6b*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 0x170))(v9); /*0x654f6c*/
  LOBYTE(a2) = sub_4AE5D0(*((unsigned __int8 *)a1 + 0x136)); /*0x654f7b*/
  v11 = *((_BYTE *)a1 + 0x11D); /*0x654f7d*/
  if ( v11 == 4 && (_BYTE)a2 || v11 == 9 && !(_BYTE)a2 ) /*0x654f98*/
    return 0; /*0x6551db*/
  switch ( v11 )
  {
    case 4:
    case 9:
      if ( (_BYTE)a2 ) /*0x654fbd*/
      {
        v12 = sub_5E12B0(a6); /*0x654fc1*/
        if ( v12 ) /*0x654fc8*/
          (*(void (__thiscall **)(UInt32, _DWORD, _DWORD))(*(_DWORD *)v12 + 0x9C))(v12, 0, 0); /*0x654fd8*/
        (*(void (__thiscall **)(_DWORD *, Actor *, int, _DWORD, _DWORD))(*a1 + 0x370))( /*0x654ff6*/
          a1,
          a6,
          0xA,
          a1[0x48],
          *((unsigned __int8 *)a1 + 0x124));
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, Actor *, int, _DWORD, _DWORD))(*a1 + 0x370))( /*0x655016*/
          a1,
          a6,
          5,
          a1[0x48],
          *((unsigned __int8 *)a1 + 0x124));
      }
      IdleForActor = TESIdleForm_FindIdleForActor( /*0x655026*/
                       (TESObjectREFR *)dword_B361CC[0x3D],
                       (TESObjectREFR *)a6,
                       (TESObjectREFR *)a1[0x48]);
      v34 = (Actor *)IdleForActor; /*0x65502d*/
      if ( IdleForActor ) /*0x655031*/
      {
        QueuedAnimType = TESIdleForm_GetQueuedAnimType(IdleForActor); /*0x6551e9*/
        ActorAnimData_ReplaceCurrentIdleLoader((char **)v8, (UInt32)v34, QueuedAnimType); /*0x6551f6*/
        result = 1; /*0x6551fe*/
      }
      else
      {
        sub_4D7300((_BYTE *)a1[0x48], *((unsigned __int8 *)a1 + 0x124), 0); /*0x655046*/
        *(_BYTE *)(v8 + 0xC4) = 1; /*0x65504b*/
        v14 = ((double (__thiscall *)(_DWORD *, Actor *, _DWORD, _DWORD))*(_DWORD *)(*a1 + 0x370))(a1, a6, 0, a1[0x48]); /*0x655068*/
        HideEquipment((TESObjectREFR *)a6, a3, a4, v14, 0, 0); /*0x655070*/
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)a1[0x48] + 0x170))( /*0x65508b*/
          a1[0x48],
          *((unsigned __int8 *)a1 + 0x136));
        v15 = -sub_4AEBE0(0x7F); /*0x655095*/
        v29 = v15; /*0x655099*/
        sub_659B90((int *)a6, v15, v29); /*0x65509c*/
        vtbl = a6->vtbl; /*0x6550a1*/
        v35 = ((double (__thiscall *)(Actor *))a6->vtbl->super.GetZRotation)(a6) + dbl_A3D5B8; /*0x6550ba*/
        ((void (__thiscall *)(Actor *, _DWORD))vtbl->super.Unk_7A)(a6, LODWORD(v35)); /*0x6550c7*/
        sub_6FAEE0((Unk128 *)(a1 + 0x4A), 0.0); /*0x6550d7*/
        *((_BYTE *)a1 + 0x136) = 0; /*0x6550dc*/
        a1[0x4A] = LODWORD(g_zeroNiPoint3.x); /*0x6550e8*/
        a1[0x4B] = LODWORD(g_zeroNiPoint3.y); /*0x6550f1*/
        a1[0x4C] = LODWORD(g_zeroNiPoint3.z); /*0x6550fe*/
        a1[0x48] = 0; /*0x655101*/
        sub_65AC20((MobileObject *)a6, 0); /*0x65510b*/
        if ( !(_BYTE)a2 ) /*0x655112*/
          return 0; /*0x655112*/
        v32 = 1; /*0x655122*/
        v36 = 1; /*0x655127*/
        v17 = (*(int (__thiscall **)(_DWORD *))(*a1 + 0x184))(a1); /*0x65512c*/
        if ( v17 ) /*0x655130*/
        {
          v18 = *(_DWORD *)(v17 + 0x1C); /*0x655132*/
          v32 = (v18 & 0x100000) == 0; /*0x65513f*/
          v36 = (v18 & 0x200000) == 0; /*0x65514b*/
        }
        if ( !Actor::HasNPCBaseForm(a6) ) /*0x65515d*/
        {
          v21 = a6->vtbl->super.super.GetBaseForm((TESObjectREFR *)a6); /*0x6551b8*/
          v22 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x6551bb*/
                                     v21,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                     &TESCreature `RTTI Type Descriptor',
                                     0);
          if ( v22 ) /*0x6551c5*/
            sub_51E240(v22, a2, a3, a4, 0.0, (TESObjectREFR *)a6, v32, v36, 1); /*0x6551d6*/
          return 0; /*0x6551d6*/
        }
        v19 = a6->vtbl->super.super.GetBaseForm((TESObjectREFR *)a6); /*0x655173*/
        v20 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x655176*/
                                   v19,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                   &TESNPC `RTTI Type Descriptor',
                                   0);
        if ( !v20 ) /*0x655180*/
          return 0; /*0x655180*/
        sub_5227A0(v20, a3, a4, 0.0, (TESObjectREFR *)a6, v32, v36, 0, 1); /*0x655193*/
        result = 0; /*0x65519b*/
      }
      break; /*0x6551a1*/
    case 5:
    case 0xA:
      if ( ActorAnimData_IsCurrentIdleReady((ActorAnimData *)v8) /*0x655230*/
        && (!ActorAnimData_GetNormalizedSequenceSlot((ActorAnimData *)v8, 0)
         || *((_DWORD *)ActorAnimData_GetNormalizedSequenceSlot((ActorAnimData *)v8, 0) + 0x11) == 1) )
      {
        *(_BYTE *)(v8 + 0xC4) = 1; /*0x655236*/
        v24 = *((unsigned __int8 *)a1 + 0x11D); /*0x655252*/
        (*(void (__thiscall **)(_DWORD *, Actor *, _DWORD, _DWORD, _DWORD))(*a1 + 0x370))( /*0x655260*/
          a1,
          a6,
          0,
          a1[0x48],
          *((unsigned __int8 *)a1 + 0x124));
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)a1[0x48] + 0x170))( /*0x655278*/
          a1[0x48],
          *((unsigned __int8 *)a1 + 0x136));
        v25 = -sub_4AEBE0(v30); /*0x655282*/
        v31 = v25; /*0x655286*/
        sub_659B90((int *)a6, v25, v31); /*0x655289*/
        (*(void (__thiscall **)(_DWORD *, Actor *, int, _DWORD))(*a1 + 0x370))(a1, a6, v24, a1[0x48]); /*0x6552a9*/
        ActorAnimData_StartQueuedIdleAction((ActorAnimData *)v8, (PlayerCharacter *)a6); /*0x6552ae*/
        *(_BYTE *)(v8 + 0xC4) = 1; /*0x6552b6*/
        result = 1; /*0x6552bd*/
      }
      else
      {
        if ( !ActorAnimData_IsIdleInactive((_DWORD *)v8) ) /*0x6552c8*/
          goto LABEL_34; /*0x6552c8*/
        sub_4D7300((_BYTE *)a1[0x48], *((unsigned __int8 *)a1 + 0x124), 0); /*0x6552e5*/
        *(_BYTE *)(v8 + 0xC4) = 1; /*0x6552ee*/
        v26 = ((double (__thiscall *)(_DWORD *, Actor *, _DWORD, _DWORD, int))*(_DWORD *)(*a1 + 0x370))( /*0x655302*/
                a1,
                a6,
                0,
                0,
                0x7F);
        HideEquipment((TESObjectREFR *)a6, a3, a4, v26, 0, 0); /*0x65530a*/
        v27 = a6->vtbl; /*0x65530f*/
        v37 = ((double (__thiscall *)(Actor *))a6->vtbl->super.GetZRotation)(a6) + dbl_A3D5B8; /*0x655328*/
        ((void (__thiscall *)(Actor *, _DWORD))v27->super.Unk_7A)(a6, LODWORD(v37)); /*0x655335*/
        sub_6FAEE0((Unk128 *)(a1 + 0x4A), 0.0); /*0x655345*/
        *((_BYTE *)a1 + 0x136) = 0; /*0x65534a*/
        a1[0x4A] = LODWORD(g_zeroNiPoint3.x); /*0x655357*/
        a1[0x4B] = LODWORD(g_zeroNiPoint3.y); /*0x655360*/
        a1[0x4C] = LODWORD(g_zeroNiPoint3.z); /*0x65536c*/
        sub_65AC20((MobileObject *)a6, 0); /*0x65536f*/
        v28 = *(bhkCharacterProxy **)(*(int (__thiscall **)(_DWORD *, void **))(*a1 + 0x18C))(a1, &slot); /*0x655385*/
        NiPointerSlot_Release(&slot); /*0x65538b*/
        if ( !v28 ) /*0x655392*/
          goto LABEL_34; /*0x655392*/
        sub_452A10(v28, (NiPoint3 *)a6->members.super.super.pos); /*0x65539a*/
        result = 1; /*0x6553a2*/
      }
      break; /*0x6552c3*/
    default:
      *((_BYTE *)a1 + 0x11D) = (_BYTE)a2 != 0 ? 9 : 4;
LABEL_34:
      result = 1; /*0x6553bb*/
      break; /*0x6553be*/
  }
  return result; /*0x654f58*/
}
