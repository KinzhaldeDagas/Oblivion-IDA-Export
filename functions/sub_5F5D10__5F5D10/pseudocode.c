void __usercall sub_5F5D10(TESObjectREFR *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // ebx
  LowProcess_vtbl *InitializeComponent; // edi
  ActorSkinInfo *v7; // eax
  int v8; // eax
  ExtraDataList *****ContainerChanges; // eax
  unsigned int *EquippedInstance; // edi
  TESChildCELL *v11; // eax
  int v12; // edx
  char v13; // bl
  EntryData *v14; // edi
  ExtraDataList *****v15; // eax
  unsigned int *v16; // eax
  unsigned int *v17; // ebp
  int v18; // edx
  LowProcess_vtbl *v19; // ebx
  ActorSkinInfo *v20; // eax
  int v21; // eax
  TESChildCELL *v22; // eax
  EntryData *v23; // edi
  int v24; // ebx
  bool v25; // bl
  LowProcess_vtbl *v26; // ebp
  ActorSkinInfo *v27; // eax
  int v28; // eax
  ActorSkinInfo *v29; // eax
  int v30; // edx
  int v31; // ecx
  TESChildCELL *v32; // eax
  float v33; // [esp+44h] [ebp-18h] BYREF
  int v34; // [esp+48h] [ebp-14h] BYREF
  int v35; // [esp+4Ch] [ebp-10h] BYREF
  int v36; // [esp+50h] [ebp-Ch] BYREF
  int v37; // [esp+54h] [ebp-8h] BYREF
  int v38; // [esp+58h] [ebp-4h] BYREF

  v5 = (*((int (__usercall **)@<eax>(TESObjectREFRVtbl *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))a1[1].vtbl->super.super.InitializeComponent /*0x5f5d28*/
        + 0x3E))(
         a1[1].vtbl,
         1,
         a4,
         a3,
         a2);
  if ( v5 ) /*0x5f5d2c*/
  {
    if ( !sub_41DF40(**(_BYTE ***)v5) ) /*0x5f5d36*/
    {
      InitializeComponent = (LowProcess_vtbl *)a1[1].vtbl->super.super.InitializeComponent; /*0x5f5d48*/
      v7 = a1->vtbl->GetActiveSkinInfo(a1); /*0x5f5d52*/
      v8 = InitializeComponent->Unk_47((BaseProcess *)a1[1].vtbl, (UInt32)v7); /*0x5f5d5e*/
      v36 = *(_DWORD *)(v8 + 0x88); /*0x5f5d66*/
      v37 = *(_DWORD *)(v8 + 0x8C); /*0x5f5d70*/
      v38 = *(_DWORD *)(v8 + 0x90); /*0x5f5d7a*/
      sub_711300((float *)(v8 + 0x64), &v33, (float *)&v34, (float *)&v35); /*0x5f5d90*/
      ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&a1->member.baseExtraList); /*0x5f5d98*/
      EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerChanges, 0xD, 0); /*0x5f5db8*/
      v11 = (TESChildCELL *)((int (__thiscall *)(TESObjectREFR *, _DWORD, _DWORD, int, int *, float *))a1->vtbl[1].Unk_48)( /*0x5f5dc9*/
                              a1,
                              *(_DWORD *)(v5 + 8),
                              *(_DWORD *)*EquippedInstance,
                              1,
                              &v36,
                              &v33);
      sub_4DC000((int)a1, v11); /*0x5f5dcd*/
      ContainerEntryExtraData_DestroyDataTable(EquippedInstance, v12); /*0x5f5dd7*/
      FormHeapFree((unsigned int)EquippedInstance); /*0x5f5ddd*/
    }
  }
  v13 = 0; /*0x5f5df2*/
  v14 = (EntryData *)(*((int (__thiscall **)(TESObjectREFRVtbl *, int))a1[1].vtbl->super.super.InitializeComponent + 0x3C))( /*0x5f5df6*/
                       a1[1].vtbl,
                       1);
  if ( v14 /*0x5f5e10*/
    || (v14 = (EntryData *)(*((int (__thiscall **)(TESObjectREFRVtbl *, _DWORD))a1[1].vtbl->super.super.InitializeComponent
                            + 0x3C))(
                             a1[1].vtbl,
                             0),
        v13 = 1,
        v14) )
  {
    v15 = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&a1->member.baseExtraList); /*0x5f5e19*/
    v16 = ContainerExtraData_GetEquippedInstance(v15, 0xE, 0); /*0x5f5e24*/
    v17 = v16; /*0x5f5e2b*/
    if ( v13 ) /*0x5f5e2d*/
    {
      Actor_UnequipItem((Actor *)a1, a4, a2, a3, v16[2], 1, 0, 0, 0, 0); /*0x5f5e3f*/
    }
    else
    {
      v19 = (LowProcess_vtbl *)a1[1].vtbl->super.super.InitializeComponent; /*0x5f5e4b*/
      v20 = a1->vtbl->GetActiveSkinInfo(a1); /*0x5f5e55*/
      v21 = v19->Unk_46((BaseProcess *)a1[1].vtbl, (UInt32)v20); /*0x5f5e61*/
      v33 = *(float *)(v21 + 0x88); /*0x5f5e69*/
      v34 = *(_DWORD *)(v21 + 0x8C); /*0x5f5e73*/
      v35 = *(_DWORD *)(v21 + 0x90); /*0x5f5e7d*/
      sub_711300((float *)(v21 + 0x64), (float *)&v36, (float *)&v37, (float *)&v38); /*0x5f5e93*/
      v22 = (TESChildCELL *)((int (__thiscall *)(TESObjectREFR *, TESForm *, _DWORD, int, float *, int *))a1->vtbl[1].Unk_48)( /*0x5f5eb8*/
                              a1,
                              v14->type,
                              *(_DWORD *)*v17,
                              1,
                              &v33,
                              &v36);
      sub_4DC000((int)a1, v22); /*0x5f5ebc*/
    }
    ContainerEntryExtraData_DestroyDataTable(v17, v18); /*0x5f5ec6*/
    FormHeapFree((unsigned int)v17); /*0x5f5ecc*/
  }
  v23 = (EntryData *)(*((int (__thiscall **)(TESObjectREFRVtbl *, int))a1[1].vtbl->super.super.InitializeComponent + 0x3B))( /*0x5f5ee6*/
                       a1[1].vtbl,
                       1);
  v24 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0xF6))(a1[1].vtbl); /*0x5f5ef4*/
  if ( v23 ) /*0x5f5ef6*/
  {
    if ( a1[1].vtbl ) /*0x5f5efc*/
    {
      if ( (*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0xC1))(a1[1].vtbl) ) /*0x5f5f11*/
      {
        if ( !sub_41DF40(v23->extendData->node.data) && v23->type != (TESForm *)v24 ) /*0x5f5f31*/
        {
          v25 = TESEnchantableForm_GetFormEnchantment(v23->type) != 0; /*0x5f5f46*/
          v26 = (LowProcess_vtbl *)a1[1].vtbl->super.super.InitializeComponent; /*0x5f5f59*/
          if ( LOBYTE(v23->type[6].vtbl) == 5 ) /*0x5f5f52*/
          {
            v27 = a1->vtbl->GetActiveSkinInfo(a1); /*0x5f5f63*/
            v28 = v26->Unk_46((BaseProcess *)a1[1].vtbl, (UInt32)v27); /*0x5f5f6f*/
          }
          else
          {
            v29 = a1->vtbl->GetActiveSkinInfo(a1); /*0x5f5f82*/
            v28 = v26->Unk_45((BaseProcess *)a1[1].vtbl, (UInt32)v29); /*0x5f5f8e*/
          }
          if ( v28 ) /*0x5f5f92*/
          {
            v30 = *(_DWORD *)(v28 + 0x8C); /*0x5f5f9a*/
            v33 = *(float *)(v28 + 0x88); /*0x5f5fa0*/
            v31 = *(_DWORD *)(v28 + 0x90); /*0x5f5fa4*/
            v34 = v30; /*0x5f5faa*/
            v35 = v31; /*0x5f5fae*/
            sub_711300((float *)(v28 + 0x64), (float *)&v36, (float *)&v37, (float *)&v38); /*0x5f5fc4*/
            v32 = (TESChildCELL *)((int (__thiscall *)(TESObjectREFR *, TESForm *, void *, int, float *, int *))a1->vtbl[1].Unk_48)( /*0x5f5fe8*/
                                    a1,
                                    v23->type,
                                    v23->extendData->node.data,
                                    1,
                                    &v33,
                                    &v36);
            sub_4DC000((int)a1, v32); /*0x5f5fec*/
            if ( v25 ) /*0x5f5ff6*/
              (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, int, _DWORD, _DWORD))a1[1].vtbl->super.super.InitializeComponent /*0x5f600a*/
               + 0x10B))(
                a1[1].vtbl,
                a1,
                1,
                0,
                0);
          }
        }
      }
    }
  }
}
