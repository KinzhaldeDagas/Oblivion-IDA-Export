char __userpurge sub_631700@<al>(
        _DWORD *a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        Actor *a7,
        int a8,
        int a9,
        float a10)
{
  TESPackage *v11; // ebx
  int v13; // ecx
  int v14; // edx
  float *v15; // eax
  double v16; // st7
  int v17; // eax
  double v18; // st7
  float *v19; // eax
  ExtraTeleport *TeleportExtraData; // eax
  _BYTE *v21; // ecx
  float *v22; // eax
  int v23; // ebp
  TESObjectCELL *ParentCell; // eax
  float *v25; // eax
  int v26; // eax
  unsigned int v27; // eax
  bool v28; // cc
  PlayerCharacter *v29; // ecx
  bool IsSleeping; // al
  int v31; // eax
  unsigned int v32; // eax
  float *v33; // [esp+1Ch] [ebp-2Ch]
  TESWorldSpace *WorldSpace; // [esp+1Ch] [ebp-2Ch]
  float *v35; // [esp+1Ch] [ebp-2Ch]
  double v36; // [esp+30h] [ebp-18h] BYREF
  float v37; // [esp+38h] [ebp-10h] BYREF
  float v38[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v11 = (TESPackage *)(*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a1 + 0x184))(
                        a1,
                        a6,
                        a5,
                        a4);
  if ( !v11 )
    return 0;
  if ( !*((_BYTE *)a1 + 0xD0) )
    (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x194))(a1, a7);
  if ( !a1[0xB] )
    (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x558))(a1, a7);
  v13 = a1[0xB];
  if ( !v13 )
    goto LABEL_65;
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v13 + 0x198))(v13, 1) && !a1[0x11] )
  {
    sub_566870((TargetData **)v11, (TESForm *)a1[0xB], 1);
    if ( (v11->members.packageFlags & 0x1000) == 0 )
    {
      ((void (__thiscall *)(Actor *, _DWORD))a7->vtbl->Unk_BE)(a7, a1[0xB]);
      return 0;
    }
    return 0;
  }
  v14 = a1[0xB];
  if ( (*(_DWORD *)(v14 + 8) & 0x20) != 0 || (*(_DWORD *)(v14 + 8) & 0x800) != 0 )
  {
    if ( (*(_DWORD *)(v14 + 8) & 0x20) != 0 )
      sub_566870((TargetData **)v11, (TESForm *)v14, 1);
LABEL_65:
    (*(void (__thiscall **)(_DWORD *, Actor *, int))(*a1 + 0x188))(a1, a7, 1);
    return 0;
  }
  if ( v11->members.type == 9 )
  {
    v15 = (float *)sub_566B30(v11, (int)v38, a7);
    v16 = sub_4D7E30((float *)a1[0xB], v15);
    v36 = (double)Double_To_SInt32(v16);
    sub_566DB0(v11);
    v18 = (double)v17;
    if ( v17 < 0 )
      v18 = v18 + flt_A2FC78;
    a6 = v18 + dbl_A3DDE0;
    if ( a6 < v36 )
      (*(void (__thiscall **)(_DWORD *, Actor *, unsigned int))(*a1 + 0x188))(a1, a7, 0xFFFFFFFF);
  }
  if ( GetTeleportExtraData((_BYTE *)a1[0xB]) )
  {
    v33 = a7->vtbl->super.super.GetPos(a7);
    sub_4D76F0((_BYTE *)a1[0xB]);
    sub_4121A0(v19, (float *)&v36, v33);
    a6 = sub_404C90((float *)&v36);
    a5 = (double)dword_B36B28;
    if ( a5 >= a6 )
      goto LABEL_34;
  }
  else if ( sub_5687D0(v11, (int)v11, a6, (TESObjectREFR *)a7) )
  {
    goto LABEL_34;
  }
  if ( sub_64ADA0((Actor *)a1) )
    return 0;
  if ( (*(int (__thiscall **)(_DWORD *, int, int))(*a1 + 0x36C))(a1, a2, a3) )
    (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x1B0))(a1, a7);
  TeleportExtraData = GetTeleportExtraData((_BYTE *)a1[0xB]);
  v21 = (_BYTE *)a1[0xB];
  if ( TeleportExtraData )
    sub_4D76F0(v21);
  else
    v22 = (float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v21 + 0x174))(v21);
  v23 = *a1;
  v37 = *v22;
  v38[0] = v22[1];
  v38[1] = v22[2];
  sub_5677B0(v11, a6, (TESObjectREFR *)a7, 2);
  a6 = a10;
  WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]);
  ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a1[0xB]);
  (*(void (__thiscall **)(_DWORD *, Actor *, float *, TESObjectCELL *, TESWorldSpace *))(v23 + 0x418))(
    a1,
    a7,
    &v37,
    ParentCell,
    WorldSpace);
  if ( Actor::GetProcessLevel(a7) )
    return 0;
  if ( GetTeleportExtraData((_BYTE *)a1[0xB]) )
  {
    v35 = a7->vtbl->super.super.GetPos(a7);
    sub_4D76F0((_BYTE *)a1[0xB]);
    sub_4121A0(v25, v38, v35);
    a6 = sub_404C90(v38);
    a5 = (double)dword_B36B28;
    if ( a5 < a6 )
      return 0;
  }
  else if ( !sub_5687D0(v11, (int)v11, a6, (TESObjectREFR *)a7) )
  {
    return 0;
  }
LABEL_34:
  if ( sub_64ADA0((Actor *)a1) && (v11->members.packageFlags & 4) != 0 )
    return 0;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x190))(a1[0xB]) )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0x394))(a1, 1);
    v26 = a1[0x11];
    if ( v26 )
    {
      ActivateRef(
        (TESObjectREFR *)a1[0xB],
        a4,
        a5,
        a6,
        (TESObjectREFR *)a7,
        1,
        *(_DWORD *)(v26 + 4),
        *(_DWORD *)(v26 + 0x10));
      v27 = a1[0x11];
      --a1[0xE];
      if ( v27 )
        FormHeapFree(v27);
      v28 = a1[0xE] < 1;
      a1[0x11] = 0;
      a1[0xB] = 0;
      if ( !v28 )
        return 1;
      if ( v11->members.procedureArrayIndex == 0x1A && !v11->members.time.duration )
      {
        (*(void (__thiscall **)(_DWORD *, Actor *, int))(*a1 + 0x188))(a1, a7, 2);
        return 1;
      }
    }
    else
    {
      ActivateRef((TESObjectREFR *)a1[0xB], a4, a5, a6, (TESObjectREFR *)a7, 0, 0, 1);
    }
    (*(void (__thiscall **)(_DWORD *, Actor *, int))(*a1 + 0x188))(a1, a7, 1);
    return 1;
  }
  v29 = TESDataHandler_g_PlayerRef;
  if ( (PlayerCharacter *)a1[0xB] == TESDataHandler_g_PlayerRef
    && (IsSleeping = PlayerCharacter::IsSleeping_(v29), v29 = TESDataHandler_g_PlayerRef, IsSleeping)
    && !v29->isMovingToNewSpace )
  {
    v29->HoursToSleep = 0;
    v29->isSleeping = 1;
    (*(void (__thiscall **)(_DWORD *, Actor *, unsigned int))(*a1 + 0x188))(a1, a7, 0xFFFFFFFE);
  }
  else
  {
    if ( a1[0x11] )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)a1[0xB] + 0x198))(a1[0xB], 0)
        || (v31 = a1[0x11], *(int *)(v31 + 8) > 0) )
      {
        ActivateRef(
          (TESObjectREFR *)a1[0xB],
          a4,
          a5,
          a6,
          (TESObjectREFR *)a7,
          1,
          *(_DWORD *)(a1[0x11] + 4),
          *(_DWORD *)(a1[0x11] + 0x10));
        v32 = a1[0x11];
        --a1[0xE];
        if ( v32 )
          FormHeapFree(v32);
        a1[0x11] = 0;
        a1[0xB] = 0;
      }
      else if ( *(int *)(v31 + 0xC) > 0 )
      {
        (*(void (__thiscall **)(_DWORD *, Actor *, _DWORD, _DWORD, _DWORD, int, _DWORD, int, _DWORD, _DWORD, int))(*a1 + 0x228))(
          a1,
          a7,
          a1[0xB],
          0,
          0,
          1,
          0,
          1,
          0,
          0,
          1);
      }
      if ( (int)a1[0xE] > 0 )
        return 0;
    }
    else if ( (PlayerCharacter *)a1[0xB] == v29 )
    {
      return 0;
    }
    (*(void (__thiscall **)(_DWORD *, Actor *, int))(*a1 + 0x188))(a1, a7, 2);
  }
  return 0;
}
