bool __userpurge sub_64CB10@<al>(
        float *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double st7_0@<st0>,
        Actor *a5,
        int a6)
{
  int v8; // eax
  double GameHour; // st7
  TESPackage *v10; // eax
  UInt32 packageFlags; // eax
  bool v12; // al
  double v13; // st7
  bool v14; // bl
  unsigned int *v15; // ebp
  int v16; // ebx
  TESForm *v17; // eax
  BSExtraDataVtbl *v18; // ebx
  TESForm *v19; // eax
  BSExtraDataVtbl *v20; // eax
  int v21; // esi
  int v22; // esi
  bool v24; // [esp+15h] [ebp-5h]
  float v25; // [esp+16h] [ebp-4h]
  char v26; // [esp+1Eh] [ebp+4h]
  char v27; // [esp+1Eh] [ebp+4h]
  char v28; // [esp+22h] [ebp+8h]

  if ( ((unsigned __int8 (__usercall *)@<al>(Actor *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->IsInCombat)(
         a5,
         1,
         st7_0,
         a3,
         a2) )
  {
    return 0;
  }
  if ( sub_5E6B40(a5) )
    return 0;
  if ( sub_5E6BA0(a5) )
    return 0;
  if ( (unsigned __int8)sub_5E03B0(a5) )
    return 0;
  v8 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 0x36C))(a1);
  if ( v8 )
  {
    if ( v8 != 4 && v8 != 9 )
      return 0;
  }
  if ( *((_DWORD *)a1 + 0x30) )
    (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0x178))(a1, 0);
  GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
  v25 = GameHour;
  v24 = 0;
  v10 = sub_5E0380(a5);
  v26 = 0;
  if ( v10 )
  {
    if ( v10->members.type == 4
      || (packageFlags = v10->members.packageFlags, (packageFlags & 0x100000) != 0)
      || (packageFlags & 0x200000) != 0 )
    {
      v26 = 1;
    }
  }
  if ( (_BYTE)a6 || !*((_DWORD *)a1 + 2) || (GameHour = v25, *((_DWORD *)a1 + 0x24) != Double_To_SInt32(v25)) )
  {
    v12 = sub_649340(a1, a6, a3, GameHour, (TESChildCELL *)a5, a6);
    v13 = v25;
    v14 = v12;
    v24 = v12;
    *((_DWORD *)a1 + 0x24) = Double_To_SInt32(v25);
    if ( v14 )
    {
      (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0x38C))(a1, 0);
      (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0xBC))(a1, 0);
      (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0x394))(a1, 0);
      v15 = (unsigned int *)(a1 + 0xF);
      while ( *((_DWORD *)a1 + 0x10) || *v15 )
      {
        v16 = *v15;
        if ( *v15 )
          FormHeapFree(*v15);
        BSSimpleList_Remove((_DWORD *)a1 + 0xF, v16);
      }
      if ( v26 )
      {
        v17 = a5->vtbl->super.super.GetBaseForm(a5);
        v18 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                   v17,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                   &TESNPC `RTTI Type Descriptor',
                                   0);
        v19 = a5->vtbl->super.super.GetBaseForm(a5);
        v20 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                   v19,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                   &TESCreature `RTTI Type Descriptor',
                                   0);
        v21 = *((_DWORD *)a1 + 2);
        v28 = 1;
        v27 = 1;
        if ( v21 )
        {
          v22 = *(_DWORD *)(v21 + 0x1C);
          v28 = (v22 & 0x100000) == 0;
          v27 = (v22 & 0x200000) == 0;
        }
        if ( v18 )
        {
          sub_5227A0(v18, a2, a3, v13, (TESObjectREFR *)a5, v28, v27, 0, 1);
          return v24;
        }
        if ( v20 )
          sub_51E240(v20, 0, a2, a3, v13, (TESObjectREFR *)a5, v28, v27, 1);
      }
    }
  }
  return v24;
}
