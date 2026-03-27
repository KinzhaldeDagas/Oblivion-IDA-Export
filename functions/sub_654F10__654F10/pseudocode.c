char __userpurge sub_654F10@<al>(_DWORD *a1@<ecx>, int a2@<ebx>, double a3@<st2>, double a4@<st1>, int a5)
{
  int v7; // ebp
  int v8; // ecx
  char result; // al
  char v10; // al
  UInt32 v11; // eax
  unsigned __int8 **v12; // eax
  double v13; // st7
  double v14; // st7
  int v15; // ebp
  int v16; // eax
  int v17; // eax
  void *v18; // eax
  BSExtraDataVtbl *v19; // eax
  void *v20; // eax
  BSExtraDataVtbl *v21; // eax
  UInt32 v22; // eax
  int v23; // ebx
  double v24; // st7
  double v25; // st7
  int v26; // ebx
  bhkCharacterProxy *v27; // esi
  float v28; // [esp+24h] [ebp-1Ch]
  int v29; // [esp+28h] [ebp-18h]
  float v30; // [esp+28h] [ebp-18h]
  char v31; // [esp+38h] [ebp-8h]
  _BYTE v32[4]; // [esp+3Ch] [ebp-4h] BYREF
  UInt32 v33; // [esp+44h] [ebp+4h]
  float v34; // [esp+44h] [ebp+4h]
  char v35; // [esp+44h] [ebp+4h]
  float v36; // [esp+44h] [ebp+4h]

  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 0x164))(a5);
  if ( !v7 )
    return 0;
  v8 = a1[0x48];
  if ( !v8 )
  {
    (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int))(*a1 + 0x370))(a1, a5, 0, 0, 0x7F);
    (*(void (__thiscall **)(_DWORD *, int, int))(*a1 + 0x188))(a1, a5, 1);
    return 0;
  }
  v29 = a2;
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 0x170))(v8);
  LOBYTE(a2) = sub_4AE5D0(*((unsigned __int8 *)a1 + 0x136));
  v10 = *((_BYTE *)a1 + 0x11D);
  if ( v10 == 4 && (_BYTE)a2 || v10 == 9 && !(_BYTE)a2 )
    return 0;
  switch ( v10 )
  {
    case 4:
    case 9:
      if ( (_BYTE)a2 )
      {
        v11 = sub_5E12B0((Actor *)a5);
        if ( v11 )
          (*(void (__thiscall **)(UInt32, _DWORD, _DWORD))(*(_DWORD *)v11 + 0x9C))(v11, 0, 0);
        (*(void (__thiscall **)(_DWORD *, int, int, _DWORD, _DWORD))(*a1 + 0x370))(
          a1,
          a5,
          0xA,
          a1[0x48],
          *((unsigned __int8 *)a1 + 0x124));
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, int, int, _DWORD, _DWORD))(*a1 + 0x370))(
          a1,
          a5,
          5,
          a1[0x48],
          *((unsigned __int8 *)a1 + 0x124));
      }
      v12 = sub_521450((TESObjectREFR *)g_idleAnimationMap, (TESObjectREFR *)a5, (_BYTE *)a1[0x48]);
      v33 = (UInt32)v12;
      if ( v12 )
      {
        v22 = sub_520200(v12);
        sub_475300((int **)v7, v33, v22);
        result = 1;
      }
      else
      {
        sub_4D7300((_BYTE *)a1[0x48], *((unsigned __int8 *)a1 + 0x124), 0);
        *(_BYTE *)(v7 + 0xC4) = 1;
        v13 = ((double (__thiscall *)(_DWORD *, int, _DWORD, _DWORD))*(_DWORD *)(*a1 + 0x370))(a1, a5, 0, a1[0x48]);
        HideEquipment((TESObjectREFR *)a5, a3, a4, v13, 0, 0);
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)a1[0x48] + 0x170))(
          a1[0x48],
          *((unsigned __int8 *)a1 + 0x136));
        v14 = -sub_4AEBE0(0x7F);
        v28 = v14;
        sub_659B90((int *)a5, v14, v28);
        v15 = *(_DWORD *)a5;
        v34 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a5 + 0x1E0))(a5) + dbl_A3D5B8;
        (*(void (__thiscall **)(int, _DWORD))(v15 + 0x1E8))(a5, LODWORD(v34));
        sub_6FAEE0((Unk128 *)(a1 + 0x4A), 0.0);
        *((_BYTE *)a1 + 0x136) = 0;
        a1[0x4A] = LODWORD(Vector3_InitValue_);
        a1[0x4B] = *((_DWORD *)&Vector3_InitValue_ + 1);
        a1[0x4C] = LODWORD(dword_B3F9B0);
        a1[0x48] = 0;
        sub_65AC20((_DWORD *)a5, 0);
        if ( !(_BYTE)a2 )
          return 0;
        v31 = 1;
        v35 = 1;
        v16 = (*(int (__thiscall **)(_DWORD *))(*a1 + 0x184))(a1);
        if ( v16 )
        {
          v17 = *(_DWORD *)(v16 + 0x1C);
          v31 = (v17 & 0x100000) == 0;
          v35 = (v17 & 0x200000) == 0;
        }
        if ( !sub_5E32D0((void *)a5) )
        {
          v20 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)a5 + 0x170))(a5);
          v21 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                     v20,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                     &TESCreature `RTTI Type Descriptor',
                                     0);
          if ( v21 )
            sub_51E240(v21, a2, a3, a4, 0.0, (TESObjectREFR *)a5, v31, v35, 1);
          return 0;
        }
        v18 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)a5 + 0x170))(a5);
        v19 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                   v18,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                   &TESNPC `RTTI Type Descriptor',
                                   0);
        if ( !v19 )
          return 0;
        sub_5227A0(v19, a3, a4, 0.0, (TESObjectREFR *)a5, v31, v35, 0, 1);
        result = 0;
      }
      break;
    case 5:
    case 0xA:
      if ( sub_4711F0((_DWORD *)v7)
        && (!sub_4706E0((ActorAnimData *)v7, 0) || sub_4706E0((ActorAnimData *)v7, 0)[8].next == (PowerListEntry *)1) )
      {
        *(_BYTE *)(v7 + 0xC4) = 1;
        v23 = *((unsigned __int8 *)a1 + 0x11D);
        (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, _DWORD))(*a1 + 0x370))(
          a1,
          a5,
          0,
          a1[0x48],
          *((unsigned __int8 *)a1 + 0x124));
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)a1[0x48] + 0x170))(
          a1[0x48],
          *((unsigned __int8 *)a1 + 0x136));
        v24 = -sub_4AEBE0(v29);
        v30 = v24;
        sub_659B90((int *)a5, v24, v30);
        (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*a1 + 0x370))(a1, a5, v23, a1[0x48]);
        sub_477E50((ActorAnimData *)v7, (PlayerCharacter *)a5);
        *(_BYTE *)(v7 + 0xC4) = 1;
        result = 1;
      }
      else
      {
        if ( !sub_472EA0((_DWORD *)v7) )
          goto LABEL_34;
        sub_4D7300((_BYTE *)a1[0x48], *((unsigned __int8 *)a1 + 0x124), 0);
        *(_BYTE *)(v7 + 0xC4) = 1;
        v25 = ((double (__thiscall *)(_DWORD *, int, _DWORD, _DWORD, int))*(_DWORD *)(*a1 + 0x370))(a1, a5, 0, 0, 0x7F);
        HideEquipment((TESObjectREFR *)a5, a3, a4, v25, 0, 0);
        v26 = *(_DWORD *)a5;
        v36 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a5 + 0x1E0))(a5) + dbl_A3D5B8;
        (*(void (__thiscall **)(int, _DWORD))(v26 + 0x1E8))(a5, LODWORD(v36));
        sub_6FAEE0((Unk128 *)(a1 + 0x4A), 0.0);
        *((_BYTE *)a1 + 0x136) = 0;
        a1[0x4A] = LODWORD(Vector3_InitValue_);
        a1[0x4B] = *((_DWORD *)&Vector3_InitValue_ + 1);
        a1[0x4C] = LODWORD(dword_B3F9B0);
        sub_65AC20((_DWORD *)a5, 0);
        v27 = *(bhkCharacterProxy **)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 0x18C))(a1, v32);
        sub_7016A0((NiD3DVertexShader *)v32);
        if ( !v27 )
          goto LABEL_34;
        sub_452A10(v27, (NiPoint3 *)(a5 + 0x2C));
        result = 1;
      }
      break;
    default:
      *((_BYTE *)a1 + 0x11D) = (_BYTE)a2 != 0 ? 9 : 4;
LABEL_34:
      result = 1;
      break;
  }
  return result;
}
