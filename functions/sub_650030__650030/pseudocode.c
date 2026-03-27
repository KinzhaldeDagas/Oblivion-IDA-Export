char __userpurge sub_650030@<al>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        Actor *a7)
{
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  char result; // al
  ActorAnimData *v13; // ebp
  int v14; // ecx
  bool v15; // bl
  int v16; // eax
  unsigned __int8 **v17; // eax
  UInt32 v18; // ebx
  UInt32 v19; // eax
  double v20; // st7
  double v21; // st7
  UInt32 v22; // eax
  double v23; // st7
  int v26; // [esp+50h] [ebp-14h]
  float v27; // [esp+50h] [ebp-14h]
  int v28; // [esp+5Ch] [ebp-8h] BYREF
  float v29; // [esp+60h] [ebp-4h]
  bool v30; // [esp+68h] [ebp+4h]
  float v31; // [esp+68h] [ebp+4h]

  v8 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x184))(a1, a6, a5);
  v9 = *(_DWORD *)(a1 + 0x120);
  v10 = v8;
  if ( (!v9 || !(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0x154))(v9)) && (!v10 || *(_BYTE *)(v10 + 0x20) != 0x1B) )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x304))(a1)
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x210))(a1) )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x300))(a1, 0);
    return 1;
  }
  *(_DWORD *)(a1 + 0x30) = 0;
  v13 = a7->vtbl->super.super.GetAnimData(a7);
  if ( (unsigned int)Actor_GetCurrentAction(a7) <= 9 )
    return 1;
  v14 = *(_DWORD *)(a1 + 0x120);
  v15 = 0;
  v30 = 0;
  if ( v14 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 0x170))(v14);
    v30 = sub_4AE5D0(*(unsigned __int8 *)(a1 + 0x136));
    v15 = v30;
  }
  if ( !*(_BYTE *)(a1 + 0x11D) )
  {
    if ( v15 )
    {
      v16 = *(_DWORD *)(a1 + 8);
      if ( !v16 || *(_BYTE *)(v16 + 0x20) != 0x1B )
        (*(void (__thiscall **)(int, Actor *, _DWORD, _DWORD))(*(_DWORD *)a1 + 0x588))(a1, a7, 0, 0);
    }
    (*(void (__thiscall **)(int, int, _DWORD, int, int))(*(_DWORD *)a1 + 0x2C4))(a1, 0x400, 0, a2, a3);
    if ( a7 != (Actor *)TESDataHandler_g_PlayerRef )
      (*(void (__thiscall **)(int, Actor *))(*(_DWORD *)a1 + 0x194))(a1, a7);
    if ( !((unsigned __int8 (__thiscall *)(Actor *))a7->vtbl->Unk_D6)(a7)
      && sub_4D72C0(*(TESObjectREFR **)(a1 + 0x120), *(unsigned __int8 *)(a1 + 0x124)) )
    {
      (*(void (__thiscall **)(int, Actor *, _DWORD))(*(_DWORD *)a1 + 0x370))(a1, a7, 0);
      return 1;
    }
    if ( !((unsigned __int8 (__thiscall *)(Actor *))a7->vtbl->Unk_D6)(a7) )
    {
      if ( v15 )
        (*(void (__thiscall **)(int, Actor *, int, _DWORD, _DWORD))(*(_DWORD *)a1 + 0x370))(
          a1,
          a7,
          6,
          *(_DWORD *)(a1 + 0x120),
          *(unsigned __int8 *)(a1 + 0x124));
      else
        (*(void (__thiscall **)(int, Actor *, int, _DWORD, _DWORD))(*(_DWORD *)a1 + 0x370))(
          a1,
          a7,
          1,
          *(_DWORD *)(a1 + 0x120),
          *(unsigned __int8 *)(a1 + 0x124));
      if ( !(*(unsigned __int8 (__thiscall **)(int, Actor *))(*(_DWORD *)a1 + 0x384))(a1, a7) )
        PrintError(
          "Missing furniture dynamic idle for marker %d in the editor's idle manager.",
          *(unsigned __int8 *)(a1 + 0x136));
    }
    a3 = *(unsigned __int8 *)(a1 + 0x124);
    a2 = *(_DWORD *)(a1 + 0x120);
    if ( v15 )
      (*(void (__thiscall **)(int, Actor *, int))(*(_DWORD *)a1 + 0x370))(a1, a7, 7);
    else
      (*(void (__thiscall **)(int, Actor *, int))(*(_DWORD *)a1 + 0x370))(a1, a7, 2);
    v17 = sub_521450((TESObjectREFR *)g_idleAnimationMap, (TESObjectREFR *)a7, *(_BYTE **)(a1 + 0x120));
    v18 = (UInt32)v17;
    if ( !v17 )
    {
      *(_BYTE *)(a1 + 0x11D) = 0;
      return 0;
    }
    v19 = sub_520200(v17);
    sub_475300((int **)v13, v18, v19);
    ((void (__thiscall *)(Actor *, int))a7->vtbl->super.Unk_73)(a7, a1 + 0x128);
    *(float *)&v13->unk0C = Vector3_InitValue_;
    v13->unk10 = *(UInt32 *)(&Vector3_InitValue_ + 1);
    *(float *)&v13->unk14 = dword_B3F9B0;
    sub_4D7300(*(_BYTE **)(a1 + 0x120), *(unsigned __int8 *)(a1 + 0x124), 1);
    sub_65AC20(a7, 1);
    v15 = v30;
  }
  switch ( *(_BYTE *)(a1 + 0x11D) )
  {
    case 2:
    case 7:
      v31 = (double)*(unsigned __int16 *)(a1 + 0x134) / dbl_A2FC70;
      *(float *)&v28 = 0.0;
      sub_683D80((int)a7, v31, (int)&v28);
      v29 = fabs(v31);
      v20 = v29;
      v29 = (double)iActorKeepTurnDegree * dbl_A31C78;
      if ( v29 >= v20 )
      {
        sub_5E05F0(a7, 0x30);
        ((void (__thiscall *)(Actor *, _DWORD, int, int))a7->vtbl->super.Unk_7A)(a7, LODWORD(v31), a2, a3);
        ((void (__thiscall *)(Actor *, int))a7->vtbl->super.Unk_73)(a7, a1 + 0x128);
        *(float *)&v13->unk0C = Vector3_InitValue_;
        v13->unk10 = *(UInt32 *)(&Vector3_InitValue_ + 1);
        *(float *)&v13->unk14 = dword_B3F9B0;
        if ( !v15 )
        {
          (*(void (__thiscall **)(int, Actor *, int))(*(_DWORD *)a1 + 0x370))(a1, a7, 3);
          goto LABEL_40;
        }
        (*(void (__thiscall **)(int, Actor *, int))(*(_DWORD *)a1 + 0x370))(a1, a7, 8);
        result = 1;
      }
      else
      {
        sub_685530(a7, v31, 1);
        result = 1;
      }
      break;
    case 3:
    case 8:
      if ( sub_4711F0(v13)
        && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x2D0))(a1) == 0xFFFFFFFF
        && (!sub_4706E0(v13, 0) || sub_4706E0(v13, 0)[8].next == (PowerListEntry *)1) )
      {
        v13->unkC4 = 1;
        *(float *)&v13->unk0C = Vector3_InitValue_;
        v13->unk10 = *(UInt32 *)(&Vector3_InitValue_ + 1);
        *(float *)&v13->unk14 = dword_B3F9B0;
        ((void (__thiscall *)(Actor *, int))a7->vtbl->super.Unk_73)(a7, a1 + 0x128);
        sub_477E50(v13, (PlayerCharacter *)a7);
        Actor_ProcessAction(a7, a4, a5, 1.0, 1.0, 1.0);
        v13->unkC4 = 1;
        result = 1;
      }
      else
      {
        if ( !sub_472EA0(v13) )
          goto LABEL_40;
        if ( ((unsigned __int8 (__thiscall *)(Actor *, int, int))a7->vtbl->Unk_D6)(a7, a2, a3) )
        {
          (*(void (__thiscall **)(int, Actor *, _DWORD))(*(_DWORD *)a1 + 0x370))(a1, a7, 0);
          sub_65AC20(a7, 0);
          result = 0;
        }
        else
        {
          v26 = *(unsigned __int8 *)(a1 + 0x136);
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x120) + 0x170))(*(_DWORD *)(a1 + 0x120));
          v21 = sub_4AEBE0(v26);
          v27 = v21;
          sub_659B90((int *)a7, v21, v27);
          v13->unkC4 = 1;
          if ( v15 )
          {
            v22 = sub_5E12B0(a7);
            if ( v22 )
              (*(void (__thiscall **)(UInt32, int, _DWORD))(*(_DWORD *)v22 + 0x9C))(v22, 1, 0);
            (*(void (__thiscall **)(int, Actor *, int))(*(_DWORD *)a1 + 0x370))(a1, a7, 9);
            goto LABEL_40;
          }
          v23 = ((double (__thiscall *)(int, Actor *, int))*(_DWORD *)(*(_DWORD *)a1 + 0x370))(a1, a7, 4);
          HideEquipment((TESObjectREFR *)a7, a4, a5, v23, 0, 0);
          result = 1;
        }
      }
      break;
    default:
LABEL_40:
      result = 1;
      break;
  }
  return result;
}
