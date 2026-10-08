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

  v10 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + LODWORD(OB_ShaderConstantStorage_010201A0[0x18FF4])); /*0x5227b4*/
  v11 = *(_BYTE *)(v10 + 0x185); /*0x5227b7*/
  v60 = v10; /*0x5227c3*/
  v46 = v11; /*0x5227c7*/
  if ( !a9 ) /*0x5227cb*/
    *(_BYTE *)(v10 + 0x185) = 0; /*0x5227cd*/
  if ( ((unsigned __int8 (__usercall *)@<al>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->vtbl->IsActor)( /*0x5227e3*/
         a1,
         st7_0,
         st6_0,
         st5_0) )
  {
    vtbl = a1[1].vtbl; /*0x5227e9*/
    if ( vtbl ) /*0x5227ee*/
    {
      if ( (*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x4E))(vtbl) ) /*0x5227f8*/
        UnequipWeapon(a1, 0, (int)this, st5_0, st6_0, st7_0); /*0x522800*/
    }
  }
  ContainerExtraDataForRef = (int *)ContainerExtraData_GetContainerExtraDataForRef(a1); /*0x52281a*/
  ContainerExtraData_UnequipAll(ContainerExtraDataForRef, 1); /*0x522820*/
  v15 = (TESObjectREFR *)OblivionDynamicCast( /*0x522832*/
                           a1,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                           &Actor `RTTI Type Descriptor',
                           0);
  v56 = v15; /*0x52283c*/
  if ( v15 ) /*0x522840*/
  {
    v16 = v15[1].vtbl; /*0x522842*/
    if ( v16 ) /*0x522847*/
    {
      (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))v16->super.super.InitializeComponent + 0x43))(v16, 0); /*0x522852*/
      (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))v56[1].vtbl->super.super.InitializeComponent + 0x44))( /*0x522864*/
        v56[1].vtbl,
        0);
      (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))v56[1].vtbl->super.super.InitializeComponent + 0x42))( /*0x522876*/
        v56[1].vtbl,
        0);
      (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD, _DWORD))v56[1].vtbl->super.super.InitializeComponent + 0x41))( /*0x522889*/
        v56[1].vtbl,
        0,
        0);
    }
  }
  v66 = 0; /*0x52288f*/
  a1a = 0; /*0x522893*/
  v51 = 0; /*0x522897*/
  v54 = 0; /*0x52289b*/
  v53 = 0; /*0x52289f*/
  v52 = 0; /*0x5228a3*/
  v55 = 0; /*0x5228a7*/
  v50 = 0; /*0x5228ab*/
  v57 = 0; /*0x5228af*/
  v48 = 0; /*0x5228b3*/
  v47 = 0; /*0x5228b7*/
  v49 = 0; /*0x5228bb*/
  if ( a6 || a8 ) /*0x5228c5*/
  {
    v66 = ContainerChanges_SelectBestArmorForSlot((ExtraDataList *****)ContainerExtraDataForRef, this, 2, 1); /*0x5228de*/
    a1a = ContainerChanges_SelectBestArmorForSlot((ExtraDataList *****)ContainerExtraDataForRef, this, 3, 1); /*0x5228ee*/
    v51 = ContainerChanges_SelectBestArmorForSlot((ExtraDataList *****)ContainerExtraDataForRef, this, 5, 1); /*0x5228fe*/
    v52 = ContainerChanges_SelectBestArmorForSlot((ExtraDataList *****)ContainerExtraDataForRef, this, 4, 1); /*0x52290b*/
    if ( !a8 ) /*0x52290f*/
    {
      v53 = ContainerChanges_SelectBestArmorForSlot((ExtraDataList *****)ContainerExtraDataForRef, this, 1, 1); /*0x522923*/
      v54 = ContainerChanges_SelectBestArmorForSlot((ExtraDataList *****)ContainerExtraDataForRef, this, 0, 1); /*0x522933*/
      v55 = ContainerChanges_SelectBestArmorForSlot((ExtraDataList *****)ContainerExtraDataForRef, this, 0xD, 1); /*0x52293c*/
    }
    v48 = ContainerChanges_SelectBestArmorForSlot((ExtraDataList *****)ContainerExtraDataForRef, this, 6, 1); /*0x522953*/
    v47 = ContainerChanges_SelectBestArmorForSlot((ExtraDataList *****)ContainerExtraDataForRef, this, 7, 1); /*0x522963*/
    v49 = ContainerChanges_SelectBestArmorForSlot((ExtraDataList *****)ContainerExtraDataForRef, this, 8, 1); /*0x52296c*/
  }
  v59 = 0.0; /*0x522976*/
  if ( a7 ) /*0x52297a*/
    v50 = sub_48BDA0((int)ContainerExtraDataForRef, (int)this, (int *)this, &v59, 0xFFFFFFFF, 1); /*0x52298d*/
  v58 = sub_48B660((ExtraDataList *****)ContainerExtraDataForRef, (int *)this, COERCE_FLOAT(1)); /*0x52299f*/
  if ( v50 ) /*0x5229a3*/
  {
    v17 = (int)v50; /*0x5229a5*/
    v18 = (void *)v50[2]; /*0x5229a9*/
    if ( v18 ) /*0x5229ae*/
    {
      v19 = OblivionDynamicCast( /*0x5229bd*/
              v18,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESObjectWEAP `RTTI Type Descriptor',
              0);
      if ( v19 ) /*0x5229c7*/
      {
        if ( v19[0x90] == 5 ) /*0x5229d0*/
          v57 = sub_48B9C0((ExtraDataList *****)ContainerExtraDataForRef, (int *)this, 1); /*0x5229dc*/
      }
    }
  }
  if ( !v66 || a8 ) /*0x5229ea*/
  {
    v62 = 0; /*0x5229f0*/
    if ( a8 ) /*0x5229f4*/
      v62 = v66; /*0x5229fa*/
    v66 = sub_48D110((ExtraDataList *****)ContainerExtraDataForRef, this, 2, 1); /*0x522a0c*/
    if ( v66 || !a8 ) /*0x522a16*/
    {
      if ( v62 ) /*0x522a26*/
      {
        ContainerEntryExtraData_DestroyDataTable(v62, v17); /*0x522a2c*/
        FormHeapFree((unsigned int)v62); /*0x522a36*/
      }
    }
    else
    {
      v66 = v62; /*0x522a1c*/
    }
  }
  if ( !a1a || a8 ) /*0x522a48*/
  {
    v20 = 0; /*0x522a4a*/
    if ( a8 ) /*0x522a50*/
      v20 = a1a; /*0x522a52*/
    a1a = sub_48D110((ExtraDataList *****)ContainerExtraDataForRef, this, 3, 1); /*0x522a64*/
    if ( a1a || !a8 ) /*0x522a6e*/
    {
      if ( v20 ) /*0x522a78*/
      {
        ContainerEntryExtraData_DestroyDataTable(v20, v17); /*0x522a7c*/
        FormHeapFree((unsigned int)v20); /*0x522a82*/
      }
    }
    else
    {
      a1a = v20; /*0x522a70*/
    }
  }
  if ( !v51 ) /*0x522a8f*/
    v51 = sub_48D110((ExtraDataList *****)ContainerExtraDataForRef, this, 5, 1); /*0x522a9d*/
  if ( !v52 ) /*0x522aa6*/
    v52 = sub_48D110((ExtraDataList *****)ContainerExtraDataForRef, this, 4, 1); /*0x522ab4*/
  if ( !v53 ) /*0x522abd*/
    v53 = sub_48D110((ExtraDataList *****)ContainerExtraDataForRef, this, 1, 1); /*0x522acb*/
  if ( !v54 ) /*0x522ad4*/
    v54 = sub_48D110((ExtraDataList *****)ContainerExtraDataForRef, this, 0, 1); /*0x522ae2*/
  if ( !v55 ) /*0x522aeb*/
    v55 = sub_48D110((ExtraDataList *****)ContainerExtraDataForRef, this, 0xD, 1); /*0x522af9*/
  if ( !v49 ) /*0x522b02*/
    v49 = sub_48D110((ExtraDataList *****)ContainerExtraDataForRef, this, 8, 1); /*0x522b10*/
  if ( !v48 ) /*0x522b19*/
    v48 = sub_48D110((ExtraDataList *****)ContainerExtraDataForRef, this, 6, 1); /*0x522b27*/
  if ( !v47 ) /*0x522b30*/
    v47 = sub_48D110((ExtraDataList *****)ContainerExtraDataForRef, this, 7, 1); /*0x522b3e*/
  if ( v49 ) /*0x522b47*/
  {
    if ( !Actor_IsObjectEquipped(a1, (int)v49) ) /*0x522b50*/
    {
      if ( *v49 ) /*0x522b5d*/
        v21 = *(_DWORD *)*v49; /*0x522b63*/
      else
        v21 = 0; /*0x522b67*/
      ((void (__thiscall *)(TESObjectREFR *, unsigned int, int, int, _DWORD))a1->vtbl->Unk_42)(a1, v49[2], 1, v21, 0); /*0x522b7d*/
    }
  }
  if ( v47 ) /*0x522b84*/
  {
    if ( !Actor_IsObjectEquipped(a1, (int)v47) ) /*0x522b8d*/
    {
      if ( *v47 ) /*0x522b9a*/
        v22 = *(_DWORD *)*v47; /*0x522ba0*/
      else
        v22 = 0; /*0x522ba4*/
      ((void (__thiscall *)(TESObjectREFR *, unsigned int, int, int, _DWORD))a1->vtbl->Unk_42)(a1, v47[2], 1, v22, 0); /*0x522bba*/
    }
  }
  if ( v48 ) /*0x522bc1*/
  {
    if ( !Actor_IsObjectEquipped(a1, (int)v48) ) /*0x522bca*/
    {
      if ( *v48 ) /*0x522bd7*/
        v23 = *(_DWORD *)*v48; /*0x522bdd*/
      else
        v23 = 0; /*0x522be1*/
      ((void (__thiscall *)(TESObjectREFR *, unsigned int, int, int, _DWORD))a1->vtbl->Unk_42)(a1, v48[2], 1, v23, 0); /*0x522bf7*/
    }
  }
  v24 = 0; /*0x522bf9*/
  v25 = 0; /*0x522bfb*/
  v65 = 0; /*0x522c01*/
  v63 = 0; /*0x522c05*/
  v64 = 0; /*0x522c09*/
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
    if ( a1a ) /*0x522c76*/
    {
      if ( !Actor_IsObjectEquipped(a1, (int)a1a) ) /*0x522c7b*/
      {
        if ( *a1a ) /*0x522c84*/
          v28 = *(_DWORD *)*a1a; /*0x522c8a*/
        else
          v28 = 0; /*0x522c8e*/
        ((void (__thiscall *)(TESObjectREFR *, unsigned int, int, int, _DWORD))a1->vtbl->Unk_42)(a1, a1a[2], 1, v28, 0); /*0x522ca4*/
        v25 = (unsigned __int16 *)OblivionDynamicCast( /*0x522cc0*/
                                    (void *)a1a[2],
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                    &TESBipedModelForm `RTTI Type Descriptor',
                                    0);
      }
    }
  }
  if ( (!v24 || !TESBipedModelForm_CoversSlot(v24, 4, 0)) && (!v25 || !TESBipedModelForm_CoversSlot(v25, 4, 0)) ) /*0x522cdf*/
  {
    if ( v52 ) /*0x522cee*/
    {
      if ( !Actor_IsObjectEquipped(a1, (int)v52) ) /*0x522cf3*/
      {
        if ( *v52 ) /*0x522cfc*/
          v29 = *(_DWORD *)*v52; /*0x522d02*/
        else
          v29 = 0; /*0x522d06*/
        ((void (__thiscall *)(TESObjectREFR *, unsigned int, int, int, _DWORD))a1->vtbl->Unk_42)(a1, v52[2], 1, v29, 0); /*0x522d1c*/
        v65 = (unsigned __int16 *)OblivionDynamicCast( /*0x522d38*/
                                    (void *)v52[2],
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                    &TESBipedModelForm `RTTI Type Descriptor',
                                    0);
      }
    }
  }
  if ( (!v24 || !TESBipedModelForm_CoversSlot(v24, 5, 0)) /*0x522d6e*/
    && (!v25 || !TESBipedModelForm_CoversSlot(v25, 5, 0))
    && (!v65 || !TESBipedModelForm_CoversSlot(v65, 5, 0)) )
  {
    if ( v51 ) /*0x522d7d*/
    {
      if ( !Actor_IsObjectEquipped(a1, (int)v51) ) /*0x522d82*/
      {
        if ( *v51 ) /*0x522d8b*/
          v30 = *(_DWORD *)*v51; /*0x522d91*/
        else
          v30 = 0; /*0x522d95*/
        ((void (__thiscall *)(TESObjectREFR *, unsigned int, int, int, _DWORD))a1->vtbl->Unk_42)(a1, v51[2], 1, v30, 0); /*0x522dab*/
        v63 = (unsigned __int16 *)OblivionDynamicCast( /*0x522dc7*/
                                    (void *)v51[2],
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                    &TESBipedModelForm `RTTI Type Descriptor',
                                    0);
      }
    }
  }
  if ( (!v24 || !TESBipedModelForm_CoversSlot(v24, 1, 0)) /*0x522e16*/
    && (!v25 || !TESBipedModelForm_CoversSlot(v25, 1, 0))
    && (!v65 || !TESBipedModelForm_CoversSlot(v65, 1, 0))
    && (!v63 || !TESBipedModelForm_CoversSlot(v63, 1, 0)) )
  {
    if ( v53 ) /*0x522e25*/
    {
      if ( !Actor_IsObjectEquipped(a1, (int)v53) ) /*0x522e2a*/
      {
        if ( *v53 ) /*0x522e33*/
          v31 = *(_DWORD *)*v53; /*0x522e39*/
        else
          v31 = 0; /*0x522e3d*/
        ((void (__thiscall *)(TESObjectREFR *, unsigned int, int, int, _DWORD))a1->vtbl->Unk_42)(a1, v53[2], 1, v31, 0); /*0x522e53*/
        v64 = (unsigned __int16 *)OblivionDynamicCast( /*0x522e6f*/
                                    (void *)v53[2],
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                    &TESBipedModelForm `RTTI Type Descriptor',
                                    0);
      }
    }
  }
  if ( (!v24 || !TESBipedModelForm_CoversSlot(v24, 0, 0)) /*0x522ed3*/
    && (!v25 || !TESBipedModelForm_CoversSlot(v25, 0, 0))
    && (!v65 || !TESBipedModelForm_CoversSlot(v65, 0, 0))
    && (!v64 || !TESBipedModelForm_CoversSlot(v64, 0, 0))
    && (!v63 || !TESBipedModelForm_CoversSlot(v63, 0, 0)) )
  {
    if ( v54 ) /*0x522ee2*/
    {
      if ( !Actor_IsObjectEquipped(a1, (int)v54) ) /*0x522ee7*/
      {
        if ( *v54 ) /*0x522ef0*/
          v32 = *(_DWORD *)*v54; /*0x522ef6*/
        else
          v32 = 0; /*0x522efa*/
        ((void (__thiscall *)(TESObjectREFR *, unsigned int, int, int, _DWORD))a1->vtbl->Unk_42)(a1, v54[2], 1, v32, 0); /*0x522f10*/
      }
    }
  }
  if ( a1 != (TESObjectREFR *)reference ) /*0x522f18*/
  {
    if ( v58 ) /*0x522f20*/
    {
      if ( !Actor_IsObjectEquipped(a1, v58[2]) ) /*0x522f28*/
      {
        if ( *v58 ) /*0x522f31*/
          v33 = *(_DWORD *)*v58; /*0x522f37*/
        else
          v33 = 0; /*0x522f3b*/
        ((void (__thiscall *)(TESObjectREFR *, unsigned int, int, int, _DWORD))a1->vtbl->Unk_42)(a1, v58[2], 1, v33, 0); /*0x522f51*/
      }
    }
  }
  if ( v55 ) /*0x522f59*/
  {
    if ( !Actor_IsObjectEquipped(a1, (int)v55) ) /*0x522f5e*/
    {
      if ( *v55 ) /*0x522f67*/
        v34 = *(_DWORD *)*v55; /*0x522f6d*/
      else
        v34 = 0; /*0x522f71*/
      ((void (__thiscall *)(TESObjectREFR *, unsigned int, int, int, _DWORD))a1->vtbl->Unk_42)(a1, v55[2], 1, v34, 0); /*0x522f87*/
    }
  }
  if ( !v50 || Actor_IsObjectEquipped(a1, v50[2]) ) /*0x522f97*/
  {
    v39 = v57; /*0x52300b*/
  }
  else
  {
    if ( *v50 ) /*0x522fa0*/
      v35 = *(_DWORD *)*v50; /*0x522fa6*/
    else
      v35 = 0; /*0x522faa*/
    v36 = v50[2]; /*0x522fb0*/
    v37 = a1->vtbl; /*0x522fb3*/
    v44 = v35; /*0x522fb8*/
    Health = TESHealthForm_GetHealth((Sky *)v50); /*0x522fb9*/
    ((void (__thiscall *)(TESObjectREFR *, unsigned int, NiNode *, int, _DWORD))v37->Unk_42)(a1, v36, Health, v44, 0); /*0x522fc8*/
    v39 = v57; /*0x522fca*/
    if ( v57 ) /*0x522fd0*/
    {
      if ( !Actor_IsObjectEquipped(a1, v57[2]) ) /*0x522fd8*/
      {
        if ( *v57 ) /*0x522fe1*/
          v40 = *(_DWORD *)*v57; /*0x522fe7*/
        else
          v40 = 0; /*0x522feb*/
        v41 = v57[2]; /*0x522fed*/
        v42 = a1->vtbl; /*0x522ff0*/
        v45 = v40; /*0x522ff5*/
        v43 = TESHealthForm_GetHealth((Sky *)v57); /*0x522ff8*/
        ((void (__thiscall *)(TESObjectREFR *, unsigned int, NiNode *, int, _DWORD))v42->Unk_42)(a1, v41, v43, v45, 0); /*0x523007*/
      }
    }
  }
  if ( v66 ) /*0x523016*/
  {
    ContainerEntryExtraData_DestroyDataTable(v66, v17); /*0x52301a*/
    FormHeapFree((unsigned int)v66); /*0x523020*/
  }
  if ( a1a ) /*0x52302e*/
  {
    ContainerEntryExtraData_DestroyDataTable(a1a, v17); /*0x523032*/
    FormHeapFree((unsigned int)a1a); /*0x523038*/
  }
  if ( v51 ) /*0x523046*/
  {
    ContainerEntryExtraData_DestroyDataTable(v51, v17); /*0x52304a*/
    FormHeapFree((unsigned int)v51); /*0x523050*/
  }
  if ( v52 ) /*0x52305e*/
  {
    ContainerEntryExtraData_DestroyDataTable(v52, v17); /*0x523062*/
    FormHeapFree((unsigned int)v52); /*0x523068*/
  }
  if ( v53 ) /*0x523076*/
  {
    ContainerEntryExtraData_DestroyDataTable(v53, v17); /*0x52307a*/
    FormHeapFree((unsigned int)v53); /*0x523080*/
  }
  if ( v54 ) /*0x52308e*/
  {
    ContainerEntryExtraData_DestroyDataTable(v54, v17); /*0x523092*/
    FormHeapFree((unsigned int)v54); /*0x523098*/
  }
  if ( v55 ) /*0x5230a6*/
  {
    ContainerEntryExtraData_DestroyDataTable(v55, v17); /*0x5230aa*/
    FormHeapFree((unsigned int)v55); /*0x5230b0*/
  }
  if ( v50 ) /*0x5230be*/
  {
    ContainerEntryExtraData_DestroyDataTable(v50, v17); /*0x5230c2*/
    FormHeapFree((unsigned int)v50); /*0x5230c8*/
  }
  if ( v39 ) /*0x5230d2*/
  {
    ContainerEntryExtraData_DestroyDataTable(v39, v17); /*0x5230d6*/
    FormHeapFree((unsigned int)v39); /*0x5230dc*/
  }
  if ( v58 ) /*0x5230ea*/
  {
    ContainerEntryExtraData_DestroyDataTable(v58, v17); /*0x5230ee*/
    FormHeapFree((unsigned int)v58); /*0x5230f4*/
  }
  if ( v47 ) /*0x523102*/
  {
    ContainerEntryExtraData_DestroyDataTable(v47, v17); /*0x523106*/
    FormHeapFree((unsigned int)v47); /*0x52310c*/
  }
  if ( v48 ) /*0x52311a*/
  {
    ContainerEntryExtraData_DestroyDataTable(v48, v17); /*0x52311e*/
    FormHeapFree((unsigned int)v48); /*0x523124*/
  }
  if ( v49 ) /*0x523132*/
  {
    ContainerEntryExtraData_DestroyDataTable(v49, v17); /*0x523136*/
    FormHeapFree((unsigned int)v49); /*0x52313c*/
  }
  *(_BYTE *)(v60 + 0x185) = v46; /*0x52314d*/
  if ( v56 ) /*0x52315b*/
  {
    if ( v56[1].vtbl ) /*0x52315d*/
      sub_5EDA20(v56, 1); /*0x523165*/
  }
}
