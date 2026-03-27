char __userpurge sub_630D40@<al>(float *a1@<ecx>, double a2@<st0>, double a3@<st1>, TESForm *a4, int a5, char a6)
{
  int v7; // eax
  TESPackage *v8; // ebp
  int v9; // ecx
  int v11; // edx
  char *location; // ecx
  char v13; // al
  void *v14; // eax
  char v15; // al
  Actor *v16; // eax
  int v17; // eax
  TESObjectCELL *ParentCell; // eax
  double v19; // st7
  TESObjectREFR *v20; // eax
  PlayerCharacter *v21; // eax
  int v22; // ebp
  int v23; // ebx
  TESObjectCELL *v24; // eax
  int v25; // eax
  TESWorldSpace *WorldSpace; // [esp+4h] [ebp-1Ch]
  int v27; // [esp+2Ch] [ebp+Ch]
  float v28; // [esp+2Ch] [ebp+Ch]

  v7 = (*(int (__usercall **)@<eax>(float *@<ecx>, double@<st0>))(*(_DWORD *)a1 + 0x184))(a1, a2);
  v8 = (TESPackage *)v7;
  if ( !v7 )
    return 0;
  if ( (*(_BYTE *)(v7 + 0x1E) & 1) != 0 )
  {
    if ( sub_663A60((int)a4) || sub_663A00() >= dword_B36A80 )
      return 0;
    sub_5668E0(v8, 0);
  }
  if ( !*((_DWORD *)a1 + 0xB) )
    (*(void (__thiscall **)(float *, TESForm *))(*(_DWORD *)a1 + 0x558))(a1, a4);
  v9 = *((_DWORD *)a1 + 0xB);
  if ( !v9 )
  {
    if ( a6 )
    {
      (*(void (__thiscall **)(float *, TESForm *, int))(*(_DWORD *)a1 + 0x188))(a1, a4, 1);
      return 0;
    }
    return 0;
  }
  v11 = *(_DWORD *)(v9 + 8);
  if ( (v11 & 0x20) != 0 || (v11 & 0x800) != 0 )
  {
    if ( (*(_DWORD *)(v9 + 8) & 0x20) != 0 )
      sub_566870((TargetData **)v8, (TESForm *)v9, 1);
    if ( a6 )
      (*(void (__thiscall **)(float *, TESForm *, int))(*(_DWORD *)a1 + 0x188))(a1, a4, 1);
    return 0;
  }
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x198))(v9, 1) )
  {
    sub_566870((TargetData **)v8, *((TESForm **)a1 + 0xB), 1);
    ((void (__thiscall *)(TESForm *, _DWORD))a4->vtbl[3].Unk_19)(a4, *((_DWORD *)a1 + 0xB));
    return 0;
  }
  if ( !*((_DWORD *)a1 + 0xB)
    || (location = (char *)v8->members.location) != 0
    && sub_569740(location) < 2
    && (a2 = sub_566DC0(v8, flt_A30634, a3, (Actor *)a4, 0, flt_A30634), v13) )
  {
    if ( a6 )
      (*(void (__thiscall **)(float *, TESForm *, int))(*(_DWORD *)a1 + 0x188))(a1, a4, 1);
    if ( sub_5660A0(v8) )
    {
      v8->__vftable->super.Destroy((TESForm *)v8, 1);
      a1[2] = 0.0;
      a4->vtbl->ClearModified(a4, 0x30000);
      (*(void (__thiscall **)(float *, TESForm *, _DWORD))(*(_DWORD *)a1 + 0x18))(a1, a4, 0);
      if ( ((int (__thiscall *)(TESForm *))a4->vtbl[4].Destroy)(a4)
        && (*(_DWORD *)(*((_DWORD *)a1 + 2) + 0x1C) & 0x800000) == 0 )
      {
        v14 = (void *)((int (__thiscall *)(TESForm *))a4->vtbl[4].Destroy)(a4);
        sub_5E9A60(v14, a2);
        if ( !v15 )
        {
          a1[0x6A] = 0.0;
          v16 = (Actor *)((int (__thiscall *)(TESForm *))a4->vtbl[4].Destroy)(a4);
          sub_5F80D0(v16);
        }
        a4->vtbl[2].Unk_1E(a4);
        return 0;
      }
      return 0;
    }
  }
  if ( sub_5660A0(v8) )
  {
    v17 = *((_DWORD *)a1 + 2);
    if ( v17 )
    {
      if ( (*(_DWORD *)(v17 + 0x1C) & 0x200) != 0 && (*(_BYTE *)(v17 + 0x1C) & 1) != 0 )
      {
        if ( TESObjectREFR_GetParentCell((TESObjectREFR *)a4) )
        {
          ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a4);
          if ( sub_4CAAC0((ExtraDataList *)ParentCell, (Actor *)a4) )
          {
            if ( sub_5F2820((Actor *)a4, a2, 0, *((TESObjectREFR **)a1 + 0xB), 1, 0, 0) )
            {
              (*(void (__thiscall **)(float *, TESForm *))(*(_DWORD *)a1 + 0x194))(a1, a4);
              return 0;
            }
          }
        }
      }
    }
  }
  v19 = sub_5677B0(v8, a2, (TESObjectREFR *)a4, 2);
  v27 = Double_To_SInt32(v19);
  v20 = *((TESObjectREFR **)a1 + 0xB);
  if ( !v20 )
    return 0;
  v28 = (float)v27;
  if ( v28 >= TesObjectREF_GetDistance((TESObjectREFR *)a4, v20, 0) )
    return 0;
  v21 = *((PlayerCharacter **)a1 + 0xB);
  if ( v21 == TESDataHandler_g_PlayerRef )
    return 0;
  v22 = *(_DWORD *)a1;
  v23 = *((_DWORD *)a1 + 0xB);
  WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)v21);
  v24 = TESObjectREFR_GetParentCell(*((TESObjectREFR **)a1 + 0xB));
  v25 = (*(int (__thiscall **)(int, TESObjectCELL *, TESWorldSpace *, int, float))(*(_DWORD *)v23 + 0x174))(
          v23,
          v24,
          WorldSpace,
          a5,
          COERCE_FLOAT(LODWORD(v28)));
  (*(void (__thiscall **)(float *, TESForm *, int))(v22 + 0x418))(a1, a4, v25);
  return 0;
}
