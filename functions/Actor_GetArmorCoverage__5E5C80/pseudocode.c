signed int __thiscall Actor_GetArmorCoverage(_BYTE *this, int a2)
{
  ExtraDataList *v3; // edi
  int v4; // ebp
  ExtraDataList *****ContainerChanges; // eax
  unsigned int *EquippedInstance; // eax
  int v7; // edx
  unsigned int *v8; // esi
  _BYTE *v9; // ecx
  ExtraDataList *****v10; // eax
  unsigned int *v11; // eax
  int v12; // edx
  unsigned int *v13; // esi
  _BYTE *v14; // ecx
  ExtraDataList *****v15; // eax
  unsigned int *v16; // eax
  int v17; // edx
  unsigned int *v18; // esi
  _BYTE *v19; // ecx
  ExtraDataList *****v20; // eax
  unsigned int *v21; // eax
  int v22; // edx
  unsigned int *v23; // esi
  _BYTE *v24; // ecx
  ExtraDataList *****v25; // eax
  unsigned int *v26; // eax
  int v27; // edx
  unsigned int *v28; // esi
  _BYTE *v29; // ecx
  ExtraDataList *****v30; // eax
  unsigned int *v31; // eax
  int v32; // edx
  unsigned int *v33; // esi
  _BYTE *v34; // ecx
  int v35; // ecx
  int v36; // eax
  _BYTE *v37; // eax
  signed int result; // eax

  v3 = (ExtraDataList *)(this + 0x44);
  v4 = 0;
  ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(this + 0x44));
  if ( ContainerChanges )
  {
    EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerChanges, 0, 1);
    v8 = EquippedInstance;
    if ( EquippedInstance )
    {
      v9 = (_BYTE *)EquippedInstance[2];
      if ( v9 )
      {
        if ( v9[4] == 0x14 && (unsigned __int8)TESObjectARMO_ISHeavyArmor(v9) == a2 )
          v4 = iArmorDamageHelmChance;
      }
      ContainerEntryExtraData_DestroyDataTable(v8, v7);
      FormHeapFree((unsigned int)v8);
    }
  }
  v10 = (ExtraDataList *****)ExtraDataList_GetContainerChanges(v3);
  if ( v10 )
  {
    v11 = ContainerExtraData_GetEquippedInstance(v10, 1, 1);
    v13 = v11;
    if ( v11 )
    {
      v14 = (_BYTE *)v11[2];
      if ( v14 )
      {
        if ( v14[4] == 0x14 && (unsigned __int8)TESObjectARMO_ISHeavyArmor(v14) == a2 )
          v4 += iArmorDamageHelmChance;
      }
      ContainerEntryExtraData_DestroyDataTable(v13, v12);
      FormHeapFree((unsigned int)v13);
    }
  }
  v15 = (ExtraDataList *****)ExtraDataList_GetContainerChanges(v3);
  if ( v15 )
  {
    v16 = ContainerExtraData_GetEquippedInstance(v15, 2, 1);
    v18 = v16;
    if ( v16 )
    {
      v19 = (_BYTE *)v16[2];
      if ( v19 )
      {
        if ( v19[4] == 0x14 )
        {
          v17 = (unsigned __int8)TESObjectARMO_ISHeavyArmor(v19);
          if ( v17 == a2 )
            v4 += iArmorDamageCuirassChance;
        }
      }
      ContainerEntryExtraData_DestroyDataTable(v18, v17);
      FormHeapFree((unsigned int)v18);
    }
  }
  v20 = (ExtraDataList *****)ExtraDataList_GetContainerChanges(v3);
  if ( v20 )
  {
    v21 = ContainerExtraData_GetEquippedInstance(v20, 3, 1);
    v23 = v21;
    if ( v21 )
    {
      v24 = (_BYTE *)v21[2];
      if ( v24 )
      {
        if ( v24[4] == 0x14 && (unsigned __int8)TESObjectARMO_ISHeavyArmor(v24) == a2 )
          v4 += iArmorDamageGreavesChance;
      }
      ContainerEntryExtraData_DestroyDataTable(v23, v22);
      FormHeapFree((unsigned int)v23);
    }
  }
  v25 = (ExtraDataList *****)ExtraDataList_GetContainerChanges(v3);
  if ( v25 )
  {
    v26 = ContainerExtraData_GetEquippedInstance(v25, 4, 1);
    v28 = v26;
    if ( v26 )
    {
      v29 = (_BYTE *)v26[2];
      if ( v29 )
      {
        if ( v29[4] == 0x14 && (unsigned __int8)TESObjectARMO_ISHeavyArmor(v29) == a2 )
          v4 += iArmorDamageGauntletsChance;
      }
      ContainerEntryExtraData_DestroyDataTable(v28, v27);
      FormHeapFree((unsigned int)v28);
    }
  }
  v30 = (ExtraDataList *****)ExtraDataList_GetContainerChanges(v3);
  if ( v30 )
  {
    v31 = ContainerExtraData_GetEquippedInstance(v30, 5, 1);
    v33 = v31;
    if ( v31 )
    {
      v34 = (_BYTE *)v31[2];
      if ( v34 )
      {
        if ( v34[4] == 0x14 )
        {
          v32 = (unsigned __int8)TESObjectARMO_ISHeavyArmor(v34);
          if ( v32 == a2 )
            v4 += iArmorDamageBootsChance;
        }
      }
      ContainerEntryExtraData_DestroyDataTable(v33, v32);
      FormHeapFree((unsigned int)v33);
    }
  }
  v35 = *((_DWORD *)this + 0x16);
  if ( v35 )
  {
    v36 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v35 + 0xF8))(v35, 1);
    if ( v36 )
    {
      v37 = *(_BYTE **)(v36 + 8);
      if ( v37 )
      {
        if ( v37[4] == 0x14 && (unsigned __int8)TESObjectARMO_ISHeavyArmor(v37) == a2 )
          v4 += iArmorDamageShieldChance;
      }
    }
  }
  if ( v4 < 0 )
    return 0;
  result = 0x64;
  if ( v4 <= 0x64 )
    return v4;
  return result;
}
