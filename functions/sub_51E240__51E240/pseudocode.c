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
  unsigned int Health; // eax
  TESObjectREFRVtbl *v27; // ecx
  int v28; // [esp+3Ah] [ebp-2Ch]
  char v29; // [esp+55h] [ebp-11h]
  unsigned int *v30; // [esp+56h] [ebp-10h]
  float v32; // [esp+5Eh] [ebp-8h] BYREF
  int v33; // [esp+62h] [ebp-4h]
  TESObjectREFR *a1a; // [esp+6Ah] [ebp+4h]
  unsigned int *v35; // [esp+76h] [ebp+10h]

  v10 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x51e257*/
  v11 = *(_BYTE *)(v10 + 0x185); /*0x51e25a*/
  v33 = v10; /*0x51e264*/
  v29 = v11; /*0x51e268*/
  if ( !a9 ) /*0x51e26c*/
    *(_BYTE *)(v10 + 0x185) = 0; /*0x51e26e*/
  if ( !a8 && a1->vtbl->IsActor(a1) ) /*0x51e28c*/
  {
    vtbl = a1[1].vtbl; /*0x51e292*/
    if ( vtbl ) /*0x51e297*/
    {
      if ( (*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x4E))(vtbl) ) /*0x51e2a1*/
        UnequipWeapon(a1, a2, (int)ecx0, a3, a4, a5); /*0x51e2a9*/
    }
  }
  v14 = 0; /*0x51e2ae*/
  ContainerExtraDataForRef = (int *)ContainerExtraData_GetContainerExtraDataForRef(a1); /*0x51e2c6*/
  ContainerExtraData_UnequipAll(ContainerExtraDataForRef, 1); /*0x51e2cc*/
  v16 = (TESObjectREFR *)OblivionDynamicCast( /*0x51e2de*/
                           a1,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                           &Actor `RTTI Type Descriptor',
                           0);
  v18 = v16; /*0x51e2e3*/
  if ( v16 ) /*0x51e2ea*/
  {
    v19 = v16[1].vtbl; /*0x51e2ec*/
    if ( v19 ) /*0x51e2f1*/
    {
      (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))v19->super.super.InitializeComponent + 0x43))(v19, 0); /*0x51e2fc*/
      (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))v18[1].vtbl->super.super.InitializeComponent + 0x44))( /*0x51e30a*/
        v18[1].vtbl,
        0);
      (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))v18[1].vtbl->super.super.InitializeComponent + 0x42))( /*0x51e318*/
        v18[1].vtbl,
        0);
      (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD, _DWORD))v18[1].vtbl->super.super.InitializeComponent + 0x41))( /*0x51e327*/
        v18[1].vtbl,
        0,
        0);
    }
  }
  v35 = 0; /*0x51e32d*/
  a1a = 0; /*0x51e331*/
  v30 = 0; /*0x51e335*/
  if ( a7 ) /*0x51e339*/
    v35 = ContainerChanges_SelectBestArmorForSlot((ExtraDataList *****)ContainerExtraDataForRef, ecx0, 0xD, 1); /*0x51e34b*/
  v32 = 0.0; /*0x51e355*/
  if ( a8 ) /*0x51e359*/
  {
    v20 = sub_48BDA0((int)ContainerExtraDataForRef, (int)v18, (int *)ecx0, &v32, 0xFFFFFFFF, 1); /*0x51e36b*/
    a1a = (TESObjectREFR *)v20; /*0x51e372*/
    if ( v20 ) /*0x51e376*/
    {
      v17 = (int)v20; /*0x51e378*/
      v21 = (void *)v20[2]; /*0x51e37a*/
      if ( v21 ) /*0x51e37f*/
      {
        v22 = OblivionDynamicCast( /*0x51e390*/
                v21,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                &TESObjectWEAP `RTTI Type Descriptor',
                0);
        if ( v22 ) /*0x51e39a*/
        {
          if ( v22[0x90] == 5 ) /*0x51e3a3*/
            v30 = sub_48B9C0((ExtraDataList *****)ContainerExtraDataForRef, (TESActorBase *)ecx0, 1); /*0x51e3af*/
        }
      }
    }
    v14 = (unsigned int)a1a; /*0x51e3b3*/
  }
  if ( v35 ) /*0x51e3bd*/
  {
    if ( sub_51D4C0(ecx0, (unsigned __int8 *)v35[2]) ) /*0x51e3c7*/
    {
      if ( !Actor_IsObjectEquipped(a1, v35[2]) ) /*0x51e3da*/
        ((void (__thiscall *)(TESObjectREFR *, unsigned int, int, _DWORD, _DWORD))a1->vtbl->Unk_42)(a1, v35[2], 1, 0, 0); /*0x51e3fb*/
    }
  }
  if ( v14 ) /*0x51e3ff*/
  {
    if ( sub_51D4C0(ecx0, *(unsigned __int8 **)(v14 + 8)) ) /*0x51e40d*/
    {
      if ( !Actor_IsObjectEquipped(a1, *(_DWORD *)(v14 + 8)) ) /*0x51e420*/
      {
        ((void (__thiscall *)(TESObjectREFR *, _DWORD, int, _DWORD, _DWORD))a1->vtbl->Unk_42)( /*0x51e441*/
          a1,
          *(_DWORD *)(v14 + 8),
          1,
          0,
          0);
        if ( v30 ) /*0x51e449*/
        {
          if ( !Actor_IsObjectEquipped(a1, v30[2]) ) /*0x51e451*/
          {
            v23 = 0; /*0x51e45d*/
            if ( *v30 ) /*0x51e45a*/
              v23 = *(_DWORD *)*v30; /*0x51e463*/
            v24 = v30[2]; /*0x51e469*/
            v25 = a1->vtbl; /*0x51e46c*/
            v28 = v23; /*0x51e470*/
            Health = TESHealthForm_GetHealth((TESHealthForm *)v30); /*0x51e471*/
            ((void (__thiscall *)(TESObjectREFR *, unsigned int, unsigned int, int, _DWORD))v25->Unk_42)( /*0x51e480*/
              a1,
              v24,
              Health,
              v28,
              0);
            v14 = (unsigned int)a1a; /*0x51e482*/
          }
        }
        if ( v18 ) /*0x51e488*/
        {
          v27 = v18[1].vtbl; /*0x51e48a*/
          if ( v27 ) /*0x51e48f*/
          {
            if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *, _DWORD))v27->super.super.InitializeComponent + 0x49))( /*0x51e4ab*/
                    v27,
                    0)
              && !v18->vtbl[1].super.GetEditorName((TESForm *)v18) )
            {
              (*((void (__thiscall **)(TESObjectREFRVtbl *, int))v18[1].vtbl->super.super.InitializeComponent + 0xC0))( /*0x51e4be*/
                v18[1].vtbl,
                1);
              if ( v18->vtbl->IsDead(v18, 0) ) /*0x51e4cc*/
                (*((void (__thiscall **)(TESObjectREFRVtbl *, int))v18[1].vtbl->super.super.InitializeComponent + 0xC2))( /*0x51e4df*/
                  v18[1].vtbl,
                  1);
            }
          }
        }
      }
    }
  }
  if ( v35 ) /*0x51e4e8*/
  {
    ContainerEntryExtraData_DestroyDataTable(v35, v17); /*0x51e4ea*/
    FormHeapFree((unsigned int)v35); /*0x51e4f4*/
  }
  if ( v14 ) /*0x51e4fe*/
  {
    ContainerEntryExtraData_DestroyDataTable((unsigned int *)v14, v17); /*0x51e502*/
    FormHeapFree(v14); /*0x51e508*/
  }
  if ( v30 ) /*0x51e518*/
  {
    ContainerEntryExtraData_DestroyDataTable(v30, v17); /*0x51e51a*/
    FormHeapFree((unsigned int)v30); /*0x51e524*/
  }
  *(_BYTE *)(v33 + 0x185) = v29; /*0x51e536*/
  if ( v18 ) /*0x51e53c*/
  {
    if ( v18[1].vtbl ) /*0x51e53e*/
      sub_5EDA20(v18, 1); /*0x51e548*/
  }
}
