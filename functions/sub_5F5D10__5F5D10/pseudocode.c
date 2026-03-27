void __usercall sub_5F5D10(PlayerCharacter *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // ebx
  LowProcess_vtbl *v6; // edi
  int v7; // eax
  int v8; // eax
  ExtraDataList *****ContainerChanges; // eax
  unsigned int *EquippedInstance; // edi
  TESForm *v11; // eax
  int v12; // edx
  char v13; // bl
  int v14; // edi
  ExtraDataList *****v15; // eax
  unsigned int *v16; // eax
  unsigned int *v17; // ebp
  int v18; // edx
  LowProcess_vtbl *v19; // ebx
  int v20; // eax
  int v21; // eax
  TESForm *v22; // eax
  EntryData *v23; // edi
  int v24; // ebx
  bool v25; // bl
  LowProcess_vtbl *v26; // ebp
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  TESForm *v32; // eax
  float v33; // [esp+44h] [ebp-18h] BYREF
  int v34; // [esp+48h] [ebp-14h] BYREF
  int v35; // [esp+4Ch] [ebp-10h] BYREF
  int v36; // [esp+50h] [ebp-Ch] BYREF
  int v37; // [esp+54h] [ebp-8h] BYREF
  int v38; // [esp+58h] [ebp-4h] BYREF

  v5 = ((int (__usercall *)@<eax>(LowProcess *@<ecx>, int, double@<st0>, double@<st1>))a1->super.super.super.process->GetEquippedShieldData)(
         a1->super.super.super.process,
         1,
         a4,
         a3);
  if ( v5 )
  {
    if ( !sub_41DF40(**(_BYTE ***)v5) )
    {
      v6 = a1->super.super.super.process->__vftable;
      v7 = ((int (__thiscall *)(PlayerCharacter *))a1->vtbl->super.super.super.Unk_5A)(a1);
      v8 = v6->Unk_47(a1->super.super.super.process, v7);
      v36 = *(_DWORD *)(v8 + 0x88);
      v37 = *(_DWORD *)(v8 + 0x8C);
      v38 = *(_DWORD *)(v8 + 0x90);
      sub_711300((float *)(v8 + 0x64), &v33, (float *)&v34, (float *)&v35);
      ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&a1->super.super.super.super.baseExtraList);
      EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerChanges, 0xD, 0);
      v11 = (TESForm *)((int (__thiscall *)(PlayerCharacter *, _DWORD, _DWORD, int, int *, float *))a1->vtbl->super.Unk_B2)(
                         a1,
                         *(_DWORD *)(v5 + 8),
                         *(_DWORD *)*EquippedInstance,
                         1,
                         &v36,
                         &v33);
      sub_4DC000((int)a1, v11);
      ContainerEntryExtraData_DestroyDataTable(EquippedInstance, v12);
      FormHeapFree((unsigned int)EquippedInstance);
    }
  }
  v13 = 0;
  v14 = (int)a1->super.super.super.process->GetEquippedLightData(a1->super.super.super.process, 1);
  if ( v14
    || (v14 = (int)a1->super.super.super.process->GetEquippedLightData(a1->super.super.super.process, 0), v13 = 1, v14) )
  {
    v15 = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&a1->super.super.super.super.baseExtraList);
    v16 = ContainerExtraData_GetEquippedInstance(v15, 0xE, 0);
    v17 = v16;
    if ( v13 )
    {
      Actor_UnequipItem(a1, a4, a2, a3, v16[2], 1, 0, 0, 0, 0);
    }
    else
    {
      v19 = a1->super.super.super.process->__vftable;
      v20 = ((int (__thiscall *)(PlayerCharacter *))a1->vtbl->super.super.super.Unk_5A)(a1);
      v21 = v19->Unk_46(a1->super.super.super.process, v20);
      v33 = *(float *)(v21 + 0x88);
      v34 = *(_DWORD *)(v21 + 0x8C);
      v35 = *(_DWORD *)(v21 + 0x90);
      sub_711300((float *)(v21 + 0x64), (float *)&v36, (float *)&v37, (float *)&v38);
      v22 = (TESForm *)((int (__thiscall *)(PlayerCharacter *, _DWORD, _DWORD, int, float *, int *))a1->vtbl->super.Unk_B2)(
                         a1,
                         *(_DWORD *)(v14 + 8),
                         *(_DWORD *)*v17,
                         1,
                         &v33,
                         &v36);
      sub_4DC000((int)a1, v22);
    }
    ContainerEntryExtraData_DestroyDataTable(v17, v18);
    FormHeapFree((unsigned int)v17);
  }
  v23 = a1->super.super.super.process->GetEquippedWeaponData(a1->super.super.super.process, 1);
  v24 = ((int (__thiscall *)(LowProcess *))a1->super.super.super.process->Unk_F5)(a1->super.super.super.process);
  if ( v23 )
  {
    if ( a1->super.super.super.process )
    {
      if ( a1->super.super.super.process->GetWeaponOut(a1->super.super.super.process) )
      {
        if ( !sub_41DF40(v23->extendData->node.data) && v23->type != (TESForm *)v24 )
        {
          v25 = TESEnchantableForm_GetFormEnchantment(v23->type) != 0;
          v26 = a1->super.super.super.process->__vftable;
          if ( LOBYTE(v23->type[6].vtbl) == 5 )
          {
            v27 = ((int (__thiscall *)(PlayerCharacter *))a1->vtbl->super.super.super.Unk_5A)(a1);
            v28 = v26->Unk_46(a1->super.super.super.process, v27);
          }
          else
          {
            v29 = ((int (__thiscall *)(PlayerCharacter *))a1->vtbl->super.super.super.Unk_5A)(a1);
            v28 = v26->Unk_45(a1->super.super.super.process, v29);
          }
          if ( v28 )
          {
            v30 = *(_DWORD *)(v28 + 0x8C);
            v33 = *(float *)(v28 + 0x88);
            v31 = *(_DWORD *)(v28 + 0x90);
            v34 = v30;
            v35 = v31;
            sub_711300((float *)(v28 + 0x64), (float *)&v36, (float *)&v37, (float *)&v38);
            v32 = (TESForm *)((int (__thiscall *)(PlayerCharacter *, TESForm *, void *, int, float *, int *))a1->vtbl->super.Unk_B2)(
                               a1,
                               v23->type,
                               v23->extendData->node.data,
                               1,
                               &v33,
                               &v36);
            sub_4DC000((int)a1, v32);
            if ( v25 )
              ((void (__thiscall *)(LowProcess *, PlayerCharacter *, int, _DWORD, _DWORD))a1->super.super.super.process->Unk_10A)(
                a1->super.super.super.process,
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
