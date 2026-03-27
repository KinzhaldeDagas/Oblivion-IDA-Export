int **__thiscall sub_5E5A00(_BYTE *this)
{
  _BYTE *v1; // ebp
  int **EquippedInstance; // esi
  char v3; // bl
  int v4; // edx
  int v5; // edi
  ExtraDataList *****ContainerChanges; // eax
  ExtraDataList *****v7; // eax
  int v8; // edi
  ExtraDataList *****v9; // eax
  int v10; // edi
  ExtraDataList *****v11; // eax
  int v12; // edi
  ExtraDataList *****v13; // eax
  int **result; // eax
  int v15; // edi
  ExtraDataList *****v16; // eax
  int v17; // ecx
  int **v18; // eax
  int *v19; // eax
  _DWORD *v20; // ebp
  int **v21; // eax
  int v22; // edi
  signed __int16 ExtraCount; // ax
  int v24; // ecx
  int **v25; // [esp+14h] [ebp-1Ch]
  int v26; // [esp+18h] [ebp-18h]
  int v27; // [esp+1Ch] [ebp-14h]

  v1 = this;
  EquippedInstance = 0;
  v25 = 0;
  v27 = 0;
  v3 = 0;
  while ( v27 < 7 )
  {
    v4 = GetRandomLargeInteger_(0) % 0x64;
    v5 = iArmorDamageHelmChance;
    v26 = v4;
    if ( v4 < iArmorDamageHelmChance )
    {
      if ( (v3 & 1) == 0 )
      {
        EquippedInstance = 0;
        ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(v1 + 0x44));
        if ( ContainerChanges )
          EquippedInstance = (int **)ContainerExtraData_GetEquippedInstance(ContainerChanges, 0, 1);
        v3 |= 1u;
      }
      if ( EquippedInstance )
        goto LABEL_13;
      if ( (v3 & 2) == 0 )
      {
        v7 = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(v1 + 0x44));
        if ( v7 )
          EquippedInstance = (int **)ContainerExtraData_GetEquippedInstance(v7, 1, 1);
        v3 |= 2u;
        if ( EquippedInstance )
LABEL_13:
          v25 = EquippedInstance;
      }
    }
    v8 = iArmorDamageCuirassChance + v5;
    if ( !v25 && v26 < v8 )
    {
      if ( (v3 & 4) == 0 )
      {
        EquippedInstance = 0;
        v9 = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(v1 + 0x44));
        if ( v9 )
          EquippedInstance = (int **)ContainerExtraData_GetEquippedInstance(v9, 2, 1);
        v3 |= 4u;
      }
      if ( EquippedInstance )
        v25 = EquippedInstance;
    }
    v10 = iArmorDamageGreavesChance + v8;
    if ( !v25 && v26 < v10 )
    {
      if ( (v3 & 8) == 0 )
      {
        EquippedInstance = 0;
        v11 = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(v1 + 0x44));
        if ( v11 )
          EquippedInstance = (int **)ContainerExtraData_GetEquippedInstance(v11, 3, 1);
        v3 |= 8u;
      }
      if ( EquippedInstance )
        v25 = EquippedInstance;
    }
    v12 = iArmorDamageGauntletsChance + v10;
    if ( !v25 && v26 < v12 )
    {
      if ( (v3 & 0x10) == 0 )
      {
        EquippedInstance = 0;
        v13 = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(v1 + 0x44));
        if ( v13 )
          EquippedInstance = (int **)ContainerExtraData_GetEquippedInstance(v13, 4, 1);
        v3 |= 0x10u;
      }
      if ( EquippedInstance )
        v25 = EquippedInstance;
    }
    result = v25;
    v15 = iArmorDamageBootsChance + v12;
    if ( v25 )
      return result;
    if ( v26 < v15 )
    {
      if ( (v3 & 0x20) == 0 )
      {
        EquippedInstance = 0;
        v16 = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(v1 + 0x44));
        if ( v16 )
          EquippedInstance = (int **)ContainerExtraData_GetEquippedInstance(v16, 5, 1);
        v3 |= 0x20u;
      }
      if ( !EquippedInstance )
        goto LABEL_56;
      v25 = EquippedInstance;
      goto LABEL_55;
    }
    v17 = *((_DWORD *)v1 + 0x16);
    if ( v17 )
    {
      v18 = (int **)(*(int (__thiscall **)(int, int))(*(_DWORD *)v17 + 0xF8))(v17, 1);
      EquippedInstance = v18;
      if ( !v18 )
        goto LABEL_56;
      v19 = *v18;
      if ( !*EquippedInstance || !*v19 )
        goto LABEL_56;
      v20 = (_DWORD *)FormHeapAlloc(0xCu);
      v21 = 0;
      if ( v20 )
      {
        v22 = (int)EquippedInstance[2];
        ExtraCount = ExtraDataList_GetExtraCount((ExtraDataList *)**EquippedInstance);
        v21 = (int **)ContainerEntryExtraData_constr(v20, v22, ExtraCount);
      }
      v24 = **EquippedInstance;
      v25 = v21;
      if ( v24 )
        BSSimpleList_PushFront(*v21, v24);
      v1 = this;
LABEL_55:
      if ( v25 )
        return v25;
LABEL_56:
      ++v27;
    }
    else
    {
      EquippedInstance = 0;
      ++v27;
    }
  }
  return v25;
}
