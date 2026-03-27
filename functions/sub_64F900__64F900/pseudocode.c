void __userpurge sub_64F900(int *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, TESObjectREFR *a5)
{
  int v6; // eax
  int v7; // ebx
  Atmosphere *v8; // ecx
  int v9; // ebp
  TargetData *v10; // edi
  int *v11; // ebx
  bool v12; // zf
  TESForm *(__thiscall *GetBaseForm)(TESObjectREFR *); // eax
  TESForm *v14; // eax
  BSExtraDataVtbl *v15; // eax
  TESForm *v16; // eax
  BSExtraDataVtbl *v17; // eax
  void (__thiscall *v18)(int *, TESObjectREFR *, int); // eax
  int *v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  int v25; // edx
  TargetData *v26; // ecx
  char v27; // al
  int v28; // [esp+20h] [ebp-14h]

  v6 = (*(int (__usercall **)@<eax>(int *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a1 + 0x184))(
         a1,
         a4,
         a3,
         a2);
  v7 = v6;
  if ( !v6 )
    return;
  v8 = *(Atmosphere **)(v6 + 0x28);
  v9 = 1;
  if ( v8 )
  {
    if ( sub_452A60(v8) )
      v9 = (int)sub_452A60(*(Atmosphere **)(v7 + 0x28));
  }
  v10 = *(TargetData **)(v7 + 0x28);
  if ( !*(_BYTE *)(v7 + 0x20)
    && v10
    && (sub_569E80(*(TargetData **)(v7 + 0x28)).form == (TESObjectREFR *)0x15
     || sub_569E80(v10).form == (TESObjectREFR *)0x16) )
  {
    (*(void (__thiscall **)(int *, TESObjectREFR *, int))(*a1 + 0x51C))(a1, a5, 1);
    if ( a1[1] > 1 )
    {
      v11 = a1 + 0xF;
      if ( a1[0x10] || *v11 )
      {
        (*(void (__thiscall **)(int *, TESObjectREFR *, unsigned int))(*a1 + 0x188))(a1, a5, 0xFFFFFFFF);
        v28 = *v11;
        a1[0x11] = *v11;
        BSSimpleList_Remove(a1 + 0xF, v28);
        a1[0xB] = *(_DWORD *)a1[0x11];
      }
      else
      {
        (*(void (__thiscall **)(int *, TESObjectREFR *, int))(*a1 + 0x188))(a1, a5, 1);
        v12 = !sub_5E32D0(a5);
        GetBaseForm = a5->vtbl->GetBaseForm;
        if ( v12 )
        {
          v16 = GetBaseForm(a5);
          v17 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                     v16,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                     &TESCreature `RTTI Type Descriptor',
                                     0);
          if ( v17 )
            sub_51E240(v17, (int)v11, a2, a3, a4, a5, 1, 1, 1);
        }
        else
        {
          v14 = GetBaseForm(a5);
          v15 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                     v14,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                     &TESNPC `RTTI Type Descriptor',
                                     0);
          if ( v15 )
            sub_5227A0(v15, a2, a3, a4, a5, 1, 1, 0, 1);
        }
      }
    }
    return;
  }
  if ( (*(unsigned __int8 (__thiscall **)(int *, TESObjectREFR *, int))(*a1 + 0x554))(a1, a5, v9) )
  {
    (*(void (__thiscall **)(int *, TESObjectREFR *))(*a1 + 0x194))(a1, a5);
    if ( a1[0x30] )
      goto LABEL_20;
    goto LABEL_43;
  }
  v20 = a1[0xB];
  if ( !v20 || (v21 = *(_DWORD *)(v20 + 8), (v21 & 0x20) != 0) || (v21 & 0x800) != 0 )
    (*(void (__thiscall **)(int *, TESObjectREFR *))(*a1 + 0x558))(a1, a5);
  v22 = a1[0xB];
  if ( !v22 )
    goto LABEL_46;
  v12 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v22 + 0x190))(v22) == 0;
  v23 = a1[0x11];
  if ( !v12 )
  {
    if ( v23 )
    {
      v24 = *a1;
      if ( *(_DWORD *)(v23 + 0x1C) == 4 )
        (*(void (__thiscall **)(int *, TESObjectREFR *))(v24 + 0x580))(a1, a5);
      else
        (*(void (__thiscall **)(int *, TESObjectREFR *))(v24 + 0x578))(a1, a5);
    }
    goto LABEL_39;
  }
  if ( !v23 )
  {
    v26 = *(TargetData **)(v7 + 0x28);
    if ( v26 && sub_569E60(v26).form == (TESObjectREFR *)a1[0xB] )
    {
      (*(void (__stdcall **)(TESObjectREFR *, int))(*a1 + 0x51C))(a5, 1);
      goto LABEL_39;
    }
LABEL_46:
    v18 = *(void (__thiscall **)(int *, TESObjectREFR *, int))(*a1 + 0x188);
    v19 = a1;
LABEL_47:
    v18(v19, a5, 1);
    return;
  }
  v25 = *a1;
  if ( *(_DWORD *)(v23 + 0x1C) == 3 )
    (*(void (__thiscall **)(int *, TESObjectREFR *))(v25 + 0x57C))(a1, a5);
  else
    (*(void (__stdcall **)(TESObjectREFR *, _DWORD))(v25 + 0x51C))(a5, 0);
LABEL_39:
  if ( Actor::GetProcessLevel((Actor *)a5) == 1
    && MobileObject_GetProcessLevel((MobileObject *)a5) == 1
    && (*(unsigned __int8 (__thiscall **)(int *, TESObjectREFR *, int))(*a1 + 0x554))(a1, a5, v9) )
  {
    (*(void (__thiscall **)(int *, TESObjectREFR *))(*a1 + 0x194))(a1, a5);
    if ( a1[0x30] )
    {
LABEL_20:
      v18 = *(void (__thiscall **)(int *, TESObjectREFR *, int))(*a1 + 0x188);
      v19 = a1;
      if ( *(_DWORD *)(v7 + 0x18) == 0x1A )
      {
        v18(a1, a5, 2);
        return;
      }
      goto LABEL_47;
    }
LABEL_43:
    sub_566DC0((TESPackage *)v7, flt_A30634, a3, (Actor *)a5, 0, flt_A30634);
    if ( !v27 && *(_BYTE *)(v7 + 0x20) != 2 )
    {
      (*(void (__thiscall **)(int *, _DWORD))(*a1 + 0x17C))(a1, 0);
      return;
    }
    goto LABEL_20;
  }
}
