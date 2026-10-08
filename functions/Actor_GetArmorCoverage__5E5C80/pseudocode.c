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

  v3 = (ExtraDataList *)(this + 0x44); /*0x5e5c86*/
  v4 = 0; /*0x5e5c8b*/
  ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(this + 0x44)); /*0x5e5c8d*/
  if ( ContainerChanges ) /*0x5e5c94*/
  {
    EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerChanges, 0, 1); /*0x5e5c9b*/
    v8 = EquippedInstance; /*0x5e5ca0*/
    if ( EquippedInstance ) /*0x5e5ca4*/
    {
      v9 = (_BYTE *)EquippedInstance[2]; /*0x5e5ca6*/
      if ( v9 ) /*0x5e5cab*/
      {
        if ( v9[4] == 0x14 && (unsigned __int8)TESObjectARMO_ISHeavyArmor(v9) == a2 ) /*0x5e5cbf*/
          v4 = LODWORD(g_GameSettingStringPointers_B36CD8[0x7C]); /*0x5e5cc1*/
      }
      ContainerEntryExtraData_DestroyDataTable(v8, v7); /*0x5e5cc9*/
      FormHeapFree((unsigned int)v8); /*0x5e5ccf*/
    }
  }
  v10 = (ExtraDataList *****)ExtraDataList_GetContainerChanges(v3); /*0x5e5cd9*/
  if ( v10 ) /*0x5e5ce0*/
  {
    v11 = ContainerExtraData_GetEquippedInstance(v10, 1, 1); /*0x5e5ce8*/
    v13 = v11; /*0x5e5ced*/
    if ( v11 ) /*0x5e5cf1*/
    {
      v14 = (_BYTE *)v11[2]; /*0x5e5cf3*/
      if ( v14 ) /*0x5e5cf8*/
      {
        if ( v14[4] == 0x14 && (unsigned __int8)TESObjectARMO_ISHeavyArmor(v14) == a2 ) /*0x5e5d0c*/
          v4 += LODWORD(g_GameSettingStringPointers_B36CD8[0x7C]); /*0x5e5d0e*/
      }
      ContainerEntryExtraData_DestroyDataTable(v13, v12); /*0x5e5d16*/
      FormHeapFree((unsigned int)v13); /*0x5e5d1c*/
    }
  }
  v15 = (ExtraDataList *****)ExtraDataList_GetContainerChanges(v3); /*0x5e5d26*/
  if ( v15 ) /*0x5e5d2d*/
  {
    v16 = ContainerExtraData_GetEquippedInstance(v15, 2, 1); /*0x5e5d35*/
    v18 = v16; /*0x5e5d3a*/
    if ( v16 ) /*0x5e5d3e*/
    {
      v19 = (_BYTE *)v16[2]; /*0x5e5d40*/
      if ( v19 ) /*0x5e5d45*/
      {
        if ( v19[4] == 0x14 ) /*0x5e5d4b*/
        {
          v17 = (unsigned __int8)TESObjectARMO_ISHeavyArmor(v19); /*0x5e5d52*/
          if ( v17 == a2 ) /*0x5e5d59*/
            v4 += LODWORD(g_GameSettingStringPointers_B36CD8[0x78]); /*0x5e5d5b*/
        }
      }
      ContainerEntryExtraData_DestroyDataTable(v18, v17); /*0x5e5d63*/
      FormHeapFree((unsigned int)v18); /*0x5e5d69*/
    }
  }
  v20 = (ExtraDataList *****)ExtraDataList_GetContainerChanges(v3); /*0x5e5d73*/
  if ( v20 ) /*0x5e5d7a*/
  {
    v21 = ContainerExtraData_GetEquippedInstance(v20, 3, 1); /*0x5e5d82*/
    v23 = v21; /*0x5e5d87*/
    if ( v21 ) /*0x5e5d8b*/
    {
      v24 = (_BYTE *)v21[2]; /*0x5e5d8d*/
      if ( v24 ) /*0x5e5d92*/
      {
        if ( v24[4] == 0x14 && (unsigned __int8)TESObjectARMO_ISHeavyArmor(v24) == a2 ) /*0x5e5da6*/
          v4 += LODWORD(g_GameSettingStringPointers_B36CD8[0x7A]); /*0x5e5da8*/
      }
      ContainerEntryExtraData_DestroyDataTable(v23, v22); /*0x5e5db0*/
      FormHeapFree((unsigned int)v23); /*0x5e5db6*/
    }
  }
  v25 = (ExtraDataList *****)ExtraDataList_GetContainerChanges(v3); /*0x5e5dc0*/
  if ( v25 ) /*0x5e5dc7*/
  {
    v26 = ContainerExtraData_GetEquippedInstance(v25, 4, 1); /*0x5e5dcf*/
    v28 = v26; /*0x5e5dd4*/
    if ( v26 ) /*0x5e5dd8*/
    {
      v29 = (_BYTE *)v26[2]; /*0x5e5dda*/
      if ( v29 ) /*0x5e5ddf*/
      {
        if ( v29[4] == 0x14 && (unsigned __int8)TESObjectARMO_ISHeavyArmor(v29) == a2 ) /*0x5e5df3*/
          v4 += LODWORD(g_GameSettingStringPointers_B36CD8[0x7E]); /*0x5e5df5*/
      }
      ContainerEntryExtraData_DestroyDataTable(v28, v27); /*0x5e5dfd*/
      FormHeapFree((unsigned int)v28); /*0x5e5e03*/
    }
  }
  v30 = (ExtraDataList *****)ExtraDataList_GetContainerChanges(v3); /*0x5e5e0d*/
  if ( v30 ) /*0x5e5e14*/
  {
    v31 = ContainerExtraData_GetEquippedInstance(v30, 5, 1); /*0x5e5e1c*/
    v33 = v31; /*0x5e5e21*/
    if ( v31 ) /*0x5e5e25*/
    {
      v34 = (_BYTE *)v31[2]; /*0x5e5e27*/
      if ( v34 ) /*0x5e5e2c*/
      {
        if ( v34[4] == 0x14 ) /*0x5e5e32*/
        {
          v32 = (unsigned __int8)TESObjectARMO_ISHeavyArmor(v34); /*0x5e5e39*/
          if ( v32 == a2 ) /*0x5e5e40*/
            v4 += LODWORD(g_GameSettingStringPointers_B36CD8[0x80]); /*0x5e5e42*/
        }
      }
      ContainerEntryExtraData_DestroyDataTable(v33, v32); /*0x5e5e4a*/
      FormHeapFree((unsigned int)v33); /*0x5e5e50*/
    }
  }
  v35 = *((_DWORD *)this + 0x16); /*0x5e5e58*/
  if ( v35 ) /*0x5e5e5d*/
  {
    v36 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v35 + 0xF8))(v35, 1); /*0x5e5e69*/
    if ( v36 ) /*0x5e5e6d*/
    {
      v37 = *(_BYTE **)(v36 + 8); /*0x5e5e6f*/
      if ( v37 ) /*0x5e5e74*/
      {
        if ( v37[4] == 0x14 && (unsigned __int8)TESObjectARMO_ISHeavyArmor(v37) == a2 ) /*0x5e5e8a*/
          v4 += LODWORD(g_GameSettingStringPointers_B36CD8[0x82]); /*0x5e5e8c*/
      }
    }
  }
  if ( v4 < 0 ) /*0x5e5e94*/
    return 0; /*0x5e5e99*/
  result = 0x64; /*0x5e5ea2*/
  if ( v4 <= 0x64 ) /*0x5e5ea7*/
    return v4; /*0x5e5ea9*/
  return result; /*0x5e5e96*/
}
