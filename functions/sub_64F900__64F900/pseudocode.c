void __userpurge sub_64F900(int *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, Actor *a5)
{
  int v6; // eax
  int v7; // ebx
  Atmosphere *v8; // ecx
  int PointerAtOffset08; // ebp
  TargetData *v10; // edi
  int *v11; // ebx
  bool v12; // zf
  TESForm *(__thiscall *GetBaseForm)(TESObjectREFR *); // eax
  TESForm *v14; // eax
  BSExtraDataVtbl *v15; // eax
  TESForm *v16; // eax
  BSExtraDataVtbl *v17; // eax
  void (__thiscall *v18)(int *, Actor *, int); // eax
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

  v6 = (*(int (__usercall **)@<eax>(int *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a1 + 0x184))( /*0x64f90c*/
         a1,
         a4,
         a3,
         a2);
  v7 = v6; /*0x64f90e*/
  if ( !v6 ) /*0x64f912*/
    return; /*0x64f912*/
  v8 = *(Atmosphere **)(v6 + 0x28); /*0x64f918*/
  PointerAtOffset08 = 1; /*0x64f91e*/
  if ( v8 ) /*0x64f923*/
  {
    if ( Shared_GetPointerAtOffset08(v8) ) /*0x64f925*/
      PointerAtOffset08 = (int)Shared_GetPointerAtOffset08(*(Atmosphere **)(v7 + 0x28)); /*0x64f936*/
  }
  v10 = *(TargetData **)(v7 + 0x28); /*0x64f93d*/
  if ( !*(_BYTE *)(v7 + 0x20) /*0x64f964*/
    && v10
    && (sub_569E80(*(TargetData **)(v7 + 0x28)).form == (TESObjectREFR *)0x15
     || sub_569E80(v10).form == (TESObjectREFR *)0x16) )
  {
    (*(void (__thiscall **)(int *, Actor *, int))(*a1 + 0x51C))(a1, a5, 1); /*0x64f97b*/
    if ( a1[1] > 1 ) /*0x64f981*/
    {
      v11 = a1 + 0xF; /*0x64f98b*/
      if ( a1[0x10] || *v11 ) /*0x64f990*/
      {
        (*(void (__thiscall **)(int *, Actor *, unsigned int))(*a1 + 0x188))(a1, a5, 0xFFFFFFFF); /*0x64f9a2*/
        v28 = *v11; /*0x64f9a6*/
        a1[0x11] = *v11; /*0x64f9a9*/
        BSSimpleList_Remove(a1 + 0xF, v28); /*0x64f9ac*/
        a1[0xB] = *(_DWORD *)a1[0x11]; /*0x64f9b8*/
      }
      else
      {
        (*(void (__thiscall **)(int *, Actor *, int))(*a1 + 0x188))(a1, a5, 1); /*0x64f9cd*/
        v12 = !Actor::HasNPCBaseForm(a5); /*0x64f9d8*/
        GetBaseForm = a5->vtbl->super.super.GetBaseForm; /*0x64f9da*/
        if ( v12 ) /*0x64f9e4*/
        {
          v16 = GetBaseForm((TESObjectREFR *)a5); /*0x64fa28*/
          v17 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x64fa2b*/
                                     v16,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                     &TESCreature `RTTI Type Descriptor',
                                     0);
          if ( v17 ) /*0x64fa35*/
            sub_51E240(v17, (int)v11, a2, a3, a4, (TESObjectREFR *)a5, 1, 1, 1); /*0x64fa44*/
        }
        else
        {
          v14 = GetBaseForm((TESObjectREFR *)a5); /*0x64f9f2*/
          v15 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x64f9f5*/
                                     v14,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                     &TESNPC `RTTI Type Descriptor',
                                     0);
          if ( v15 ) /*0x64f9ff*/
            sub_5227A0(v15, a2, a3, a4, (TESObjectREFR *)a5, 1, 1, 0, 1); /*0x64fa10*/
        }
      }
    }
    return; /*0x64f9bd*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(int *, Actor *, int))(*a1 + 0x554))(a1, a5, PointerAtOffset08) ) /*0x64fa60*/
  {
    (*(void (__thiscall **)(int *, Actor *))(*a1 + 0x194))(a1, a5); /*0x64fa71*/
    if ( a1[0x30] ) /*0x64fa73*/
      goto LABEL_20; /*0x64fa7a*/
    goto LABEL_43; /*0x64fa7a*/
  }
  v20 = a1[0xB]; /*0x64faa0*/
  if ( !v20 || (v21 = *(_DWORD *)(v20 + 8), (v21 & 0x20) != 0) || (v21 & 0x800) != 0 ) /*0x64fab9*/
    (*(void (__thiscall **)(int *, Actor *))(*a1 + 0x558))(a1, a5); /*0x64fac6*/
  v22 = a1[0xB]; /*0x64fac8*/
  if ( !v22 ) /*0x64facd*/
    goto LABEL_46; /*0x64facd*/
  v12 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v22 + 0x190))(v22) == 0; /*0x64fadd*/
  v23 = a1[0x11]; /*0x64fadf*/
  if ( !v12 ) /*0x64fae2*/
  {
    if ( v23 ) /*0x64fae6*/
    {
      v24 = *a1; /*0x64faec*/
      if ( *(_DWORD *)(v23 + 0x1C) == 4 ) /*0x64faf1*/
        (*(void (__thiscall **)(int *, Actor *))(v24 + 0x580))(a1, a5); /*0x64faf9*/
      else
        (*(void (__thiscall **)(int *, Actor *))(v24 + 0x578))(a1, a5); /*0x64fb03*/
    }
    goto LABEL_39; /*0x64fafb*/
  }
  if ( !v23 ) /*0x64fb09*/
  {
    v26 = *(TargetData **)(v7 + 0x28); /*0x64fb24*/
    if ( v26 && sub_569E60(v26).form == (TESObjectREFR *)a1[0xB] ) /*0x64fb37*/
    {
      (*(void (__stdcall **)(Actor *, int))(*a1 + 0x51C))(a5, 1); /*0x64fb4a*/
      goto LABEL_39; /*0x64fb4a*/
    }
LABEL_46:
    v18 = *(void (__thiscall **)(int *, Actor *, int))(*a1 + 0x188); /*0x64fbcf*/
    v19 = a1; /*0x64fbd7*/
LABEL_47:
    v18(v19, a5, 1); /*0x64fbd9*/
    return; /*0x64fbdc*/
  }
  v25 = *a1; /*0x64fb0f*/
  if ( *(_DWORD *)(v23 + 0x1C) == 3 ) /*0x64fb13*/
    (*(void (__thiscall **)(int *, Actor *))(v25 + 0x57C))(a1, a5); /*0x64fb1c*/
  else
    (*(void (__stdcall **)(Actor *, _DWORD))(v25 + 0x51C))(a5, 0); /*0x64fb22*/
LABEL_39:
  if ( Actor::GetProcessLevel(a5) == 1 /*0x64fb74*/
    && MobileObject_GetProcessLevel((MobileObject *)a5) == 1
    && (*(unsigned __int8 (__thiscall **)(int *, Actor *, int))(*a1 + 0x554))(a1, a5, PointerAtOffset08) )
  {
    (*(void (__thiscall **)(int *, Actor *))(*a1 + 0x194))(a1, a5); /*0x64fb85*/
    if ( a1[0x30] ) /*0x64fb87*/
    {
LABEL_20:
      v18 = *(void (__thiscall **)(int *, Actor *, int))(*a1 + 0x188); /*0x64fa80*/
      v19 = a1; /*0x64fa8c*/
      if ( *(_DWORD *)(v7 + 0x18) == 0x1A ) /*0x64fa8e*/
      {
        v18(a1, a5, 2); /*0x64fa97*/
        return; /*0x64fa9d*/
      }
      goto LABEL_47; /*0x64fa8e*/
    }
LABEL_43:
    sub_566DC0((TESPackage *)v7, kTerrainLODQuadRayDirectionZ, a3, a2, a5, 0, kTerrainLODQuadRayDirectionZ); /*0x64fb94*/
    if ( !v27 && *(_BYTE *)(v7 + 0x20) != 2 ) /*0x64fbb4*/
    {
      (*(void (__thiscall **)(int *, _DWORD))(*a1 + 0x17C))(a1, 0); /*0x64fbc6*/
      return; /*0x64fbcc*/
    }
    goto LABEL_20; /*0x64fbb4*/
  }
}
