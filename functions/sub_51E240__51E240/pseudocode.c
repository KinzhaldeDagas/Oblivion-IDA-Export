void __userpurge sub_51E240(
        BSExtraDataVtbl *ecx0@<ecx>,
        int a2@<ebx>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        TESObjectREFR *a1,
        char a7,
        char a8,
        char a9)
{
  int v10; // eax
  char v11; // dl
  TESObjectREFRVtbl *vtbl; // ecx
  unsigned int v14; // ebx
  int *ContainerExtraDataForRef; // ebp
  TESObjectREFR *v16; // eax
  int v17; // edx
  TESObjectREFR *v18; // edi
  TESObjectREFRVtbl *v19; // ecx
  unsigned int *v20; // eax
  void *v21; // eax
  _BYTE *v22; // eax
  int v23; // eax
  unsigned int v24; // ebp
  TESObjectREFRVtbl *v25; // ebx
  NiNode *Health; // eax
  TESObjectREFRVtbl *v27; // ecx
  int v28; // [esp+3Ah] [ebp-2Ch]
  char v29; // [esp+55h] [ebp-11h]
  unsigned int *v30; // [esp+56h] [ebp-10h]
  float v32; // [esp+5Eh] [ebp-8h] BYREF
  int v33; // [esp+62h] [ebp-4h]
  TESObjectREFR *a1a; // [esp+6Ah] [ebp+4h]
  unsigned int *v35; // [esp+76h] [ebp+10h]

  v10 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v11 = *(_BYTE *)(v10 + 0x185);
  v33 = v10;
  v29 = v11;
  if ( !a9 )
    *(_BYTE *)(v10 + 0x185) = 0;
  if ( !a8 && a1->vtbl->IsActor(a1) )
  {
    vtbl = a1[1].vtbl;
    if ( vtbl )
    {
      if ( (*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x4E))(vtbl) )
        UnequipWeapon(a1, a2, (int)ecx0, a3, a4, a5);
    }
  }
  v14 = 0;
  ContainerExtraDataForRef = (int *)ContainerExtraData_GetContainerExtraDataForRef(a1);
  ContainerExtraData_UnequipAll(ContainerExtraDataForRef, 1);
  v16 = (TESObjectREFR *)OblivionDynamicCast(
                           a1,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                           &Actor `RTTI Type Descriptor',
                           0);
  v18 = v16;
  if ( v16 )
  {
    v19 = v16[1].vtbl;
    if ( v19 )
    {
      (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))v19->super.super.InitializeComponent + 0x43))(v19, 0);
      (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))v18[1].vtbl->super.super.InitializeComponent + 0x44))(
        v18[1].vtbl,
        0);
      (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))v18[1].vtbl->super.super.InitializeComponent + 0x42))(
        v18[1].vtbl,
        0);
      (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD, _DWORD))v18[1].vtbl->super.super.InitializeComponent + 0x41))(
        v18[1].vtbl,
        0,
        0);
    }
  }
  v35 = 0;
  a1a = 0;
  v30 = 0;
  if ( a7 )
    v35 = sub_48C870((ExtraDataList *****)ContainerExtraDataForRef, ecx0, 0xD, 1);
  v32 = 0.0;
  if ( a8 )
  {
    v20 = sub_48BDA0((int)ContainerExtraDataForRef, (int)v18, (int *)ecx0, &v32, 0xFFFFFFFF, 1);
    a1a = (TESObjectREFR *)v20;
    if ( v20 )
    {
      v17 = (int)v20;
      v21 = (void *)v20[2];
      if ( v21 )
      {
        v22 = OblivionDynamicCast(
                v21,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                &TESObjectWEAP `RTTI Type Descriptor',
                0);
        if ( v22 )
        {
          if ( v22[0x90] == 5 )
            v30 = sub_48B9C0((ExtraDataList *****)ContainerExtraDataForRef, (int *)ecx0, 1);
        }
      }
    }
    v14 = (unsigned int)a1a;
  }
  if ( v35 )
  {
    if ( sub_51D4C0(ecx0, (unsigned __int8 *)v35[2]) )
    {
      if ( !Actor_IsObjectEquipped(a1, v35[2]) )
        ((void (__thiscall *)(TESObjectREFR *, unsigned int, int, _DWORD, _DWORD))a1->vtbl->Unk_42)(a1, v35[2], 1, 0, 0);
    }
  }
  if ( v14 )
  {
    if ( sub_51D4C0(ecx0, *(unsigned __int8 **)(v14 + 8)) )
    {
      if ( !Actor_IsObjectEquipped(a1, *(_DWORD *)(v14 + 8)) )
      {
        ((void (__thiscall *)(TESObjectREFR *, _DWORD, int, _DWORD, _DWORD))a1->vtbl->Unk_42)(
          a1,
          *(_DWORD *)(v14 + 8),
          1,
          0,
          0);
        if ( v30 )
        {
          if ( !Actor_IsObjectEquipped(a1, v30[2]) )
          {
            v23 = 0;
            if ( *v30 )
              v23 = *(_DWORD *)*v30;
            v24 = v30[2];
            v25 = a1->vtbl;
            v28 = v23;
            Health = TESHealthForm_GetHealth((Sky *)v30);
            ((void (__thiscall *)(TESObjectREFR *, unsigned int, NiNode *, int, _DWORD))v25->Unk_42)(
              a1,
              v24,
              Health,
              v28,
              0);
            v14 = (unsigned int)a1a;
          }
        }
        if ( v18 )
        {
          v27 = v18[1].vtbl;
          if ( v27 )
          {
            if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *, _DWORD))v27->super.super.InitializeComponent + 0x49))(
                    v27,
                    0)
              && !v18->vtbl[1].super.GetEditorName((TESForm *)v18) )
            {
              (*((void (__thiscall **)(TESObjectREFRVtbl *, int))v18[1].vtbl->super.super.InitializeComponent + 0xC0))(
                v18[1].vtbl,
                1);
              if ( v18->vtbl->IsDead(v18, 0) )
                (*((void (__thiscall **)(TESObjectREFRVtbl *, int))v18[1].vtbl->super.super.InitializeComponent + 0xC2))(
                  v18[1].vtbl,
                  1);
            }
          }
        }
      }
    }
  }
  if ( v35 )
  {
    ContainerEntryExtraData_DestroyDataTable(v35, v17);
    FormHeapFree((unsigned int)v35);
  }
  if ( v14 )
  {
    ContainerEntryExtraData_DestroyDataTable((unsigned int *)v14, v17);
    FormHeapFree(v14);
  }
  if ( v30 )
  {
    ContainerEntryExtraData_DestroyDataTable(v30, v17);
    FormHeapFree((unsigned int)v30);
  }
  *(_BYTE *)(v33 + 0x185) = v29;
  if ( v18 )
  {
    if ( v18[1].vtbl )
      sub_5EDA20(v18, 1);
  }
}
