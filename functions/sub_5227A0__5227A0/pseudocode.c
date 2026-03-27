void __userpurge sub_5227A0(
        BSExtraDataVtbl *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        TESObjectREFR *a1,
        char a6,
        char a7,
        char a8,
        char a9)
{
  int v10; // eax
  char v11; // dl
  TESObjectREFRVtbl *vtbl; // ecx
  int *ContainerExtraDataForRef; // esi
  TESObjectREFR *v15; // eax
  TESObjectREFRVtbl *v16; // ecx
  int v17; // edx
  void *v18; // eax
  _BYTE *v19; // eax
  unsigned int *v20; // ebx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  unsigned __int16 *v24; // edi
  unsigned __int16 *v25; // ebx
  int v26; // eax
  unsigned __int16 *v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  unsigned int v36; // esi
  TESObjectREFRVtbl *v37; // edi
  NiNode *Health; // eax
  unsigned int *v39; // ebx
  int v40; // eax
  unsigned int v41; // esi
  TESObjectREFRVtbl *v42; // edi
  NiNode *v43; // eax
  int v44; // [esp+AAh] [ebp-54h]
  int v45; // [esp+AAh] [ebp-54h]
  char v46; // [esp+C5h] [ebp-39h]
  unsigned int *v47; // [esp+C6h] [ebp-38h]
  unsigned int *v48; // [esp+CAh] [ebp-34h]
  unsigned int *v49; // [esp+CEh] [ebp-30h]
  unsigned int *v50; // [esp+D2h] [ebp-2Ch]
  unsigned int *v51; // [esp+D6h] [ebp-28h]
  unsigned int *v52; // [esp+DAh] [ebp-24h]
  unsigned int *v53; // [esp+DEh] [ebp-20h]
  unsigned int *v54; // [esp+E2h] [ebp-1Ch]
  unsigned int *v55; // [esp+E6h] [ebp-18h]
  TESObjectREFR *v56; // [esp+EAh] [ebp-14h]
  unsigned int *v57; // [esp+EEh] [ebp-10h]
  unsigned int *v58; // [esp+F2h] [ebp-Ch]
  float v59; // [esp+F6h] [ebp-8h] BYREF
  int v60; // [esp+FAh] [ebp-4h]
  unsigned int *a1a; // [esp+102h] [ebp+4h]
  unsigned int *v62; // [esp+106h] [ebp+8h]
  unsigned __int16 *v63; // [esp+106h] [ebp+8h]
  unsigned __int16 *v64; // [esp+10Ah] [ebp+Ch]
  unsigned __int16 *v65; // [esp+10Eh] [ebp+10h]
  unsigned int *v66; // [esp+112h] [ebp+14h]

  v10 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v11 = *(_BYTE *)(v10 + 0x185);
  v60 = v10;
  v46 = v11;
  if ( !a9 )
    *(_BYTE *)(v10 + 0x185) = 0;
  if ( ((unsigned __int8 (__usercall *)@<al>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->vtbl->IsActor)(
         a1,
         st7_0,
         st6_0,
         st5_0) )
  {
    vtbl = a1[1].vtbl;
    if ( vtbl )
    {
      if ( (*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x4E))(vtbl) )
        UnequipWeapon(a1, 0, (int)this, st5_0, st6_0, st7_0);
    }
  }
  ContainerExtraDataForRef = (int *)ContainerExtraData_GetContainerExtraDataForRef(a1);
  ContainerExtraData_UnequipAll(ContainerExtraDataForRef, 1);
  v15 = (TESObjectREFR *)OblivionDynamicCast(
                           a1,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                           &Actor `RTTI Type Descriptor',
                           0);
  v56 = v15;
  if ( v15 )
  {
    v16 = v15[1].vtbl;
    if ( v16 )
    {
      (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))v16->super.super.InitializeComponent + 0x43))(v16, 0);
      (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))v56[1].vtbl->super.super.InitializeComponent + 0x44))(
        v56[1].vtbl,
        0);
      (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))v56[1].vtbl->super.super.InitializeComponent + 0x42))(
        v56[1].vtbl,
        0);
      (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD, _DWORD))v56[1].vtbl->super.super.InitializeComponent + 0x41))(
        v56[1].vtbl,
        0,
        0);
    }
  }
  v66 = 0;
  a1a = 0;
  v51 = 0;
  v54 = 0;
  v53 = 0;
  v52 = 0;
  v55 = 0;
  v50 = 0;
  v57 = 0;
  v48 = 0;
  v47 = 0;
  v49 = 0;
  if ( a6 || a8 )
  {
    v66 = sub_48C870((ExtraDataList *****)ContainerExtraDataForRef, this, 2, 1);
    a1a = sub_48C870((ExtraDataList *****)ContainerExtraDataForRef, this, 3, 1);
    v51 = sub_48C870((ExtraDataList *****)ContainerExtraDataForRef, this, 5, 1);
    v52 = sub_48C870((ExtraDataList *****)ContainerExtraDataForRef, this, 4, 1);
    if ( !a8 )
    {
      v53 = sub_48C870((ExtraDataList *****)ContainerExtraDataForRef, this, 1, 1);
      v54 = sub_48C870((ExtraDataList *****)ContainerExtraDataForRef, this, 0, 1);
      v55 = sub_48C870((ExtraDataList *****)ContainerExtraDataForRef, this, 0xD, 1);
    }
    v48 = sub_48C870((ExtraDataList *****)ContainerExtraDataForRef, this, 6, 1);
    v47 = sub_48C870((ExtraDataList *****)ContainerExtraDataForRef, this, 7, 1);
    v49 = sub_48C870((ExtraDataList *****)ContainerExtraDataForRef, this, 8, 1);
  }
  v59 = 0.0;
  if ( a7 )
    v50 = sub_48BDA0((int)ContainerExtraDataForRef, (int)this, (int *)this, &v59, 0xFFFFFFFF, 1);
  v58 = sub_48B660((ExtraDataList *****)ContainerExtraDataForRef, (int *)this, COERCE_FLOAT(1));
  if ( v50 )
  {
    v17 = (int)v50;
    v18 = (void *)v50[2];
    if ( v18 )
    {
      v19 = OblivionDynamicCast(
              v18,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESObjectWEAP `RTTI Type Descriptor',
              0);
      if ( v19 )
      {
        if ( v19[0x90] == 5 )
          v57 = sub_48B9C0((ExtraDataList *****)ContainerExtraDataForRef, (int *)this, 1);
      }
    }
  }
  if ( !v66 || a8 )
  {
    v62 = 0;
    if ( a8 )
      v62 = v66;
    v66 = sub_48D110((ExtraDataList *****)ContainerExtraDataForRef, this, 2, 1);
    if ( v66 || !a8 )
    {
      if ( v62 )
      {
        ContainerEntryExtraData_DestroyDataTable(v62, v17);
        FormHeapFree((unsigned int)v62);
      }
    }
    else
    {
      v66 = v62;
    }
  }
  if ( !a1a || a8 )
  {
    v20 = 0;
    if ( a8 )
      v20 = a1a;
    a1a = sub_48D110((ExtraDataList *****)ContainerExtraDataForRef, this, 3, 1);
    if ( a1a || !a8 )
    {
      if ( v20 )
      {
        ContainerEntryExtraData_DestroyDataTable(v20, v17);
        FormHeapFree((unsigned int)v20);
      }
    }
    else
    {
      a1a = v20;
    }
  }
  if ( !v51 )
    v51 = sub_48D110((ExtraDataList *****)ContainerExtraDataForRef, this, 5, 1);
  if ( !v52 )
    v52 = sub_48D110((ExtraDataList *****)ContainerExtraDataForRef, this, 4, 1);
  if ( !v53 )
    v53 = sub_48D110((ExtraDataList *****)ContainerExtraDataForRef, this, 1, 1);
  if ( !v54 )
    v54 = sub_48D110((ExtraDataList *****)ContainerExtraDataForRef, this, 0, 1);
  if ( !v55 )
    v55 = sub_48D110((ExtraDataList *****)ContainerExtraDataForRef, this, 0xD, 1);
  if ( !v49 )
    v49 = sub_48D110((ExtraDataList *****)ContainerExtraDataForRef, this, 8, 1);
  if ( !v48 )
    v48 = sub_48D110((ExtraDataList *****)ContainerExtraDataForRef, this, 6, 1);
  if ( !v47 )
    v47 = sub_48D110((ExtraDataList *****)ContainerExtraDataForRef, this, 7, 1);
  if ( v49 )
  {
    if ( !Actor_IsObjectEquipped(a1, (int)v49) )
    {
      if ( *v49 )
        v21 = *(_DWORD *)*v49;
      else
        v21 = 0;
      ((void (__thiscall *)(TESObjectREFR *, unsigned int, int, int, _DWORD))a1->vtbl->Unk_42)(a1, v49[2], 1, v21, 0);
    }
  }
  if ( v47 )
  {
    if ( !Actor_IsObjectEquipped(a1, (int)v47) )
    {
      if ( *v47 )
        v22 = *(_DWORD *)*v47;
      else
        v22 = 0;
      ((void (__thiscall *)(TESObjectREFR *, unsigned int, int, int, _DWORD))a1->vtbl->Unk_42)(a1, v47[2], 1, v22, 0);
    }
  }
  if ( v48 )
  {
    if ( !Actor_IsObjectEquipped(a1, (int)v48) )
    {
      if ( *v48 )
        v23 = *(_DWORD *)*v48;
      else
        v23 = 0;
      ((void (__thiscall *)(TESObjectREFR *, unsigned int, int, int, _DWORD))a1->vtbl->Unk_42)(a1, v48[2], 1, v23, 0);
    }
  }
  v24 = 0;
  v25 = 0;
  v65 = 0;
  v63 = 0;
  v64 = 0;
  if ( !v66
    || Actor_IsObjectEquipped(a1, (int)v66)
    || (!*v66 ? (v26 = 0) : (v26 = *(_DWORD *)*v66),
        (((void (__thiscall *)(TESObjectREFR *, unsigned int, int, int, _DWORD))a1->vtbl->Unk_42)(a1, v66[2], 1, v26, 0),
         v27 = (unsigned __int16 *)OblivionDynamicCast(
                                     (void *)v66[2],
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                     &TESBipedModelForm `RTTI Type Descriptor',
                                     0),
         (v24 = v27) == 0)
     || !TESBipedModelForm_CoversSlot(v27, 3, 0)) )
  {
    if ( a1a )
    {
      if ( !Actor_IsObjectEquipped(a1, (int)a1a) )
      {
        if ( *a1a )
          v28 = *(_DWORD *)*a1a;
        else
          v28 = 0;
        ((void (__thiscall *)(TESObjectREFR *, unsigned int, int, int, _DWORD))a1->vtbl->Unk_42)(a1, a1a[2], 1, v28, 0);
        v25 = (unsigned __int16 *)OblivionDynamicCast(
                                    (void *)a1a[2],
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                    &TESBipedModelForm `RTTI Type Descriptor',
                                    0);
      }
    }
  }
  if ( (!v24 || !TESBipedModelForm_CoversSlot(v24, 4, 0)) && (!v25 || !TESBipedModelForm_CoversSlot(v25, 4, 0)) )
  {
    if ( v52 )
    {
      if ( !Actor_IsObjectEquipped(a1, (int)v52) )
      {
        if ( *v52 )
          v29 = *(_DWORD *)*v52;
        else
          v29 = 0;
        ((void (__thiscall *)(TESObjectREFR *, unsigned int, int, int, _DWORD))a1->vtbl->Unk_42)(a1, v52[2], 1, v29, 0);
        v65 = (unsigned __int16 *)OblivionDynamicCast(
                                    (void *)v52[2],
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                    &TESBipedModelForm `RTTI Type Descriptor',
                                    0);
      }
    }
  }
  if ( (!v24 || !TESBipedModelForm_CoversSlot(v24, 5, 0))
    && (!v25 || !TESBipedModelForm_CoversSlot(v25, 5, 0))
    && (!v65 || !TESBipedModelForm_CoversSlot(v65, 5, 0)) )
  {
    if ( v51 )
    {
      if ( !Actor_IsObjectEquipped(a1, (int)v51) )
      {
        if ( *v51 )
          v30 = *(_DWORD *)*v51;
        else
          v30 = 0;
        ((void (__thiscall *)(TESObjectREFR *, unsigned int, int, int, _DWORD))a1->vtbl->Unk_42)(a1, v51[2], 1, v30, 0);
        v63 = (unsigned __int16 *)OblivionDynamicCast(
                                    (void *)v51[2],
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                    &TESBipedModelForm `RTTI Type Descriptor',
                                    0);
      }
    }
  }
  if ( (!v24 || !TESBipedModelForm_CoversSlot(v24, 1, 0))
    && (!v25 || !TESBipedModelForm_CoversSlot(v25, 1, 0))
    && (!v65 || !TESBipedModelForm_CoversSlot(v65, 1, 0))
    && (!v63 || !TESBipedModelForm_CoversSlot(v63, 1, 0)) )
  {
    if ( v53 )
    {
      if ( !Actor_IsObjectEquipped(a1, (int)v53) )
      {
        if ( *v53 )
          v31 = *(_DWORD *)*v53;
        else
          v31 = 0;
        ((void (__thiscall *)(TESObjectREFR *, unsigned int, int, int, _DWORD))a1->vtbl->Unk_42)(a1, v53[2], 1, v31, 0);
        v64 = (unsigned __int16 *)OblivionDynamicCast(
                                    (void *)v53[2],
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                    &TESBipedModelForm `RTTI Type Descriptor',
                                    0);
      }
    }
  }
  if ( (!v24 || !TESBipedModelForm_CoversSlot(v24, 0, 0))
    && (!v25 || !TESBipedModelForm_CoversSlot(v25, 0, 0))
    && (!v65 || !TESBipedModelForm_CoversSlot(v65, 0, 0))
    && (!v64 || !TESBipedModelForm_CoversSlot(v64, 0, 0))
    && (!v63 || !TESBipedModelForm_CoversSlot(v63, 0, 0)) )
  {
    if ( v54 )
    {
      if ( !Actor_IsObjectEquipped(a1, (int)v54) )
      {
        if ( *v54 )
          v32 = *(_DWORD *)*v54;
        else
          v32 = 0;
        ((void (__thiscall *)(TESObjectREFR *, unsigned int, int, int, _DWORD))a1->vtbl->Unk_42)(a1, v54[2], 1, v32, 0);
      }
    }
  }
  if ( a1 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
  {
    if ( v58 )
    {
      if ( !Actor_IsObjectEquipped(a1, v58[2]) )
      {
        if ( *v58 )
          v33 = *(_DWORD *)*v58;
        else
          v33 = 0;
        ((void (__thiscall *)(TESObjectREFR *, unsigned int, int, int, _DWORD))a1->vtbl->Unk_42)(a1, v58[2], 1, v33, 0);
      }
    }
  }
  if ( v55 )
  {
    if ( !Actor_IsObjectEquipped(a1, (int)v55) )
    {
      if ( *v55 )
        v34 = *(_DWORD *)*v55;
      else
        v34 = 0;
      ((void (__thiscall *)(TESObjectREFR *, unsigned int, int, int, _DWORD))a1->vtbl->Unk_42)(a1, v55[2], 1, v34, 0);
    }
  }
  if ( !v50 || Actor_IsObjectEquipped(a1, v50[2]) )
  {
    v39 = v57;
  }
  else
  {
    if ( *v50 )
      v35 = *(_DWORD *)*v50;
    else
      v35 = 0;
    v36 = v50[2];
    v37 = a1->vtbl;
    v44 = v35;
    Health = TESHealthForm_GetHealth((Sky *)v50);
    ((void (__thiscall *)(TESObjectREFR *, unsigned int, NiNode *, int, _DWORD))v37->Unk_42)(a1, v36, Health, v44, 0);
    v39 = v57;
    if ( v57 )
    {
      if ( !Actor_IsObjectEquipped(a1, v57[2]) )
      {
        if ( *v57 )
          v40 = *(_DWORD *)*v57;
        else
          v40 = 0;
        v41 = v57[2];
        v42 = a1->vtbl;
        v45 = v40;
        v43 = TESHealthForm_GetHealth((Sky *)v57);
        ((void (__thiscall *)(TESObjectREFR *, unsigned int, NiNode *, int, _DWORD))v42->Unk_42)(a1, v41, v43, v45, 0);
      }
    }
  }
  if ( v66 )
  {
    ContainerEntryExtraData_DestroyDataTable(v66, v17);
    FormHeapFree((unsigned int)v66);
  }
  if ( a1a )
  {
    ContainerEntryExtraData_DestroyDataTable(a1a, v17);
    FormHeapFree((unsigned int)a1a);
  }
  if ( v51 )
  {
    ContainerEntryExtraData_DestroyDataTable(v51, v17);
    FormHeapFree((unsigned int)v51);
  }
  if ( v52 )
  {
    ContainerEntryExtraData_DestroyDataTable(v52, v17);
    FormHeapFree((unsigned int)v52);
  }
  if ( v53 )
  {
    ContainerEntryExtraData_DestroyDataTable(v53, v17);
    FormHeapFree((unsigned int)v53);
  }
  if ( v54 )
  {
    ContainerEntryExtraData_DestroyDataTable(v54, v17);
    FormHeapFree((unsigned int)v54);
  }
  if ( v55 )
  {
    ContainerEntryExtraData_DestroyDataTable(v55, v17);
    FormHeapFree((unsigned int)v55);
  }
  if ( v50 )
  {
    ContainerEntryExtraData_DestroyDataTable(v50, v17);
    FormHeapFree((unsigned int)v50);
  }
  if ( v39 )
  {
    ContainerEntryExtraData_DestroyDataTable(v39, v17);
    FormHeapFree((unsigned int)v39);
  }
  if ( v58 )
  {
    ContainerEntryExtraData_DestroyDataTable(v58, v17);
    FormHeapFree((unsigned int)v58);
  }
  if ( v47 )
  {
    ContainerEntryExtraData_DestroyDataTable(v47, v17);
    FormHeapFree((unsigned int)v47);
  }
  if ( v48 )
  {
    ContainerEntryExtraData_DestroyDataTable(v48, v17);
    FormHeapFree((unsigned int)v48);
  }
  if ( v49 )
  {
    ContainerEntryExtraData_DestroyDataTable(v49, v17);
    FormHeapFree((unsigned int)v49);
  }
  *(_BYTE *)(v60 + 0x185) = v46;
  if ( v56 )
  {
    if ( v56[1].vtbl )
      sub_5EDA20(v56, 1);
  }
}
