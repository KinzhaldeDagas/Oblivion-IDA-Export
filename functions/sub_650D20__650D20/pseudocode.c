void __userpurge sub_650D20(int *a1@<ecx>, int a2@<ebx>, double a3@<st2>, double a4@<st1>, TESObjectREFR *a5)
{
  TESObjectREFR *v6; // eax
  TESObjectREFR *v7; // ebp
  ExtraDataList *****ContainerChanges; // ebx
  int v9; // ebp
  _DWORD *EquippedInstance; // eax
  int v11; // ebp
  _DWORD *v12; // eax
  int v13; // ebp
  _DWORD *v14; // eax
  int v15; // ebp
  _DWORD *v16; // eax
  double v17; // st7
  int v18; // eax
  int v19; // eax
  double v20; // st7
  int v21; // eax
  int v22; // eax
  TESObjectREFR *v23; // eax
  int v24; // edx
  int v25; // ebp
  int v26; // esi
  unsigned int *v27; // esi
  unsigned int *v28; // ebp
  unsigned int *v29; // ebx
  int v30; // edx
  int v31; // edx
  int v32; // edx

  v6 = (TESObjectREFR *)OblivionDynamicCast(
                          a5,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
  v7 = v6;
  if ( v6 )
  {
    if ( sub_5E1CF0(v6) )
    {
      ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&a5->member.baseExtraList);
      if ( ContainerChanges )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*a1 + 0x138))(a1, a2) )
          sub_5E13D0(v7, 0);
        v9 = *a1;
        EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerChanges, 9, 0);
        (*(void (__thiscall **)(int *, _DWORD *))(v9 + 0x104))(a1, EquippedInstance);
        v11 = *a1;
        v12 = ContainerExtraData_GetEquippedInstance(ContainerChanges, 0xC, 0);
        (*(void (__thiscall **)(int *, _DWORD *))(v11 + 0x10C))(a1, v12);
        v13 = *a1;
        v14 = ContainerExtraData_GetEquippedInstance(ContainerChanges, 0xD, 0);
        (*(void (__thiscall **)(int *, _DWORD *))(v13 + 0x110))(a1, v14);
        v15 = *a1;
        v16 = ContainerExtraData_GetEquippedInstance(ContainerChanges, 0xE, 0);
        v17 = ((double (__thiscall *)(int *, _DWORD *))*(_DWORD *)(v15 + 0x108))(a1, v16);
        UnequipWeapon(a5, (int)ContainerChanges, (int)a5, a3, a4, v17);
        v18 = a1[0x39];
        if ( v18 )
          EquipWeapon(a5, v17, a3, a4, *(_DWORD *)(v18 + 8), 0);
        sub_4DCCF0(a5, v15, a3, a4, v17);
        v19 = a1[0x3B];
        if ( v19 )
          sub_4E1DF0(a5, v17, a3, a4, *(_DWORD *)(v19 + 8));
        v20 = sub_4DC8F0(a5, v17, a3, a4, v15, 0);
        v21 = a1[0x3C];
        if ( v21 )
          EquipShield(a5, v20, a3, a4, *(_DWORD *)(v21 + 8));
        UnequipLight(a5, a3, a4, v20);
        v22 = a1[0x3A];
        if ( v22 )
          EquipLight(a5, v20, a3, a4, *(int **)(v22 + 8));
        v23 = (TESObjectREFR *)OblivionDynamicCast(
                                 a5,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                                 &Actor `RTTI Type Descriptor',
                                 0);
        if ( v23 )
        {
          v24 = a1[0x3C];
          v25 = 0;
          if ( v24 )
          {
            v25 = *(_DWORD *)(v24 + 8);
          }
          else
          {
            v26 = a1[0x3A];
            if ( v26 )
              v25 = *(_DWORD *)(v26 + 8);
          }
          HideEquipment(v23, a3, a4, v20, v25, 1);
        }
        v27 = ContainerExtraData_GetEquippedInstance(ContainerChanges, 7, 0);
        v28 = ContainerExtraData_GetEquippedInstance(ContainerChanges, 6, 0);
        v29 = ContainerExtraData_GetEquippedInstance(ContainerChanges, 8, 0);
        sub_4DCF10(a5, (char)v28, a3, a4, v20, 1);
        if ( v27 )
        {
          sub_4DCE60((Actor *)a5, v20, a3, a4, (int)v28, (_DWORD *)v27[2], 1);
          ContainerEntryExtraData_DestroyDataTable(v27, v30);
          FormHeapFree((unsigned int)v27);
        }
        sub_4DCF10(a5, (char)v28, a3, a4, v20, 0);
        if ( v28 )
        {
          sub_4DCE60((Actor *)a5, v20, a3, a4, (int)v28, (_DWORD *)v28[2], 0);
          ContainerEntryExtraData_DestroyDataTable(v28, v31);
          FormHeapFree((unsigned int)v28);
        }
        sub_4DD000(a5, (char)v28, a3, a4, v20);
        if ( v29 )
        {
          sub_4DCF90(a5, a3, a4, v20, (int)v28, v29[2]);
          ContainerEntryExtraData_DestroyDataTable(v29, v32);
          FormHeapFree((unsigned int)v29);
        }
      }
    }
  }
}
