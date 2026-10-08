// ODismemberment combat decode: selects a random equipped armor/shield/container entry for durability damage using iArmorDamage* chances, falling back to equipped weapon entry if no armor entry is chosen.
int **__thiscall Actor_SelectArmorOrShieldForHitDamage(_BYTE *this)
{
  _BYTE *v1; // ebp
  int **EquippedInstance; // esi
  char v3; // bl
  int v4; // edx
  float v5; // edi
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

  v1 = this; /*0x5e5a27*/
  EquippedInstance = 0; /*0x5e5a2d*/
  v25 = 0; /*0x5e5a2f*/
  v27 = 0; /*0x5e5a33*/
  v3 = 0; /*0x5e5a37*/
  while ( v27 < 7 ) /*0x5e5a45*/
  {
    v4 = Game_RandomLargeInteger(0) % 0x64; /*0x5e5a58*/
    v5 = g_GameSettingStringPointers_B36CD8[0x7C]; /*0x5e5a5a*/
    v26 = v4; /*0x5e5a65*/
    if ( v4 < SLODWORD(g_GameSettingStringPointers_B36CD8[0x7C]) ) /*0x5e5a69*/
    {
      if ( (v3 & 1) == 0 ) /*0x5e5a6e*/
      {
        EquippedInstance = 0; /*0x5e5a73*/
        ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(v1 + 0x44)); /*0x5e5a75*/
        if ( ContainerChanges ) /*0x5e5a7c*/
          EquippedInstance = (int **)ContainerExtraData_GetEquippedInstance(ContainerChanges, 0, 1); /*0x5e5a88*/
        v3 |= 1u; /*0x5e5a8a*/
      }
      if ( EquippedInstance ) /*0x5e5a8f*/
        goto LABEL_13; /*0x5e5a8f*/
      if ( (v3 & 2) == 0 ) /*0x5e5a94*/
      {
        v7 = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(v1 + 0x44)); /*0x5e5a99*/
        if ( v7 ) /*0x5e5aa0*/
          EquippedInstance = (int **)ContainerExtraData_GetEquippedInstance(v7, 1, 1); /*0x5e5aad*/
        v3 |= 2u; /*0x5e5aaf*/
        if ( EquippedInstance ) /*0x5e5ab4*/
LABEL_13:
          v25 = EquippedInstance; /*0x5e5ab6*/
      }
    }
    v8 = LODWORD(g_GameSettingStringPointers_B36CD8[0x78]) + LODWORD(v5); /*0x5e5aba*/
    if ( !v25 && v26 < v8 ) /*0x5e5acb*/
    {
      if ( (v3 & 4) == 0 ) /*0x5e5ad0*/
      {
        EquippedInstance = 0; /*0x5e5ad5*/
        v9 = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(v1 + 0x44)); /*0x5e5ad7*/
        if ( v9 ) /*0x5e5ade*/
          EquippedInstance = (int **)ContainerExtraData_GetEquippedInstance(v9, 2, 1); /*0x5e5aeb*/
        v3 |= 4u; /*0x5e5aed*/
      }
      if ( EquippedInstance ) /*0x5e5af2*/
        v25 = EquippedInstance; /*0x5e5af4*/
    }
    v10 = LODWORD(g_GameSettingStringPointers_B36CD8[0x7A]) + v8; /*0x5e5af8*/
    if ( !v25 && v26 < v10 ) /*0x5e5b09*/
    {
      if ( (v3 & 8) == 0 ) /*0x5e5b0e*/
      {
        EquippedInstance = 0; /*0x5e5b13*/
        v11 = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(v1 + 0x44)); /*0x5e5b15*/
        if ( v11 ) /*0x5e5b1c*/
          EquippedInstance = (int **)ContainerExtraData_GetEquippedInstance(v11, 3, 1); /*0x5e5b29*/
        v3 |= 8u; /*0x5e5b2b*/
      }
      if ( EquippedInstance ) /*0x5e5b30*/
        v25 = EquippedInstance; /*0x5e5b32*/
    }
    v12 = LODWORD(g_GameSettingStringPointers_B36CD8[0x7E]) + v10; /*0x5e5b36*/
    if ( !v25 && v26 < v12 ) /*0x5e5b47*/
    {
      if ( (v3 & 0x10) == 0 ) /*0x5e5b4c*/
      {
        EquippedInstance = 0; /*0x5e5b51*/
        v13 = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(v1 + 0x44)); /*0x5e5b53*/
        if ( v13 ) /*0x5e5b5a*/
          EquippedInstance = (int **)ContainerExtraData_GetEquippedInstance(v13, 4, 1); /*0x5e5b67*/
        v3 |= 0x10u; /*0x5e5b69*/
      }
      if ( EquippedInstance ) /*0x5e5b6e*/
        v25 = EquippedInstance; /*0x5e5b70*/
    }
    result = v25; /*0x5e5b74*/
    v15 = LODWORD(g_GameSettingStringPointers_B36CD8[0x80]) + v12; /*0x5e5b78*/
    if ( v25 ) /*0x5e5b80*/
      return result; /*0x5e5b80*/
    if ( v26 < v15 ) /*0x5e5b8a*/
    {
      if ( (v3 & 0x20) == 0 ) /*0x5e5b8f*/
      {
        EquippedInstance = 0; /*0x5e5b94*/
        v16 = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(v1 + 0x44)); /*0x5e5b96*/
        if ( v16 ) /*0x5e5b9d*/
          EquippedInstance = (int **)ContainerExtraData_GetEquippedInstance(v16, 5, 1); /*0x5e5baa*/
        v3 |= 0x20u; /*0x5e5bac*/
      }
      if ( !EquippedInstance ) /*0x5e5bb1*/
        goto LABEL_56; /*0x5e5bb1*/
      v25 = EquippedInstance; /*0x5e5bb7*/
      goto LABEL_55; /*0x5e5bbb*/
    }
    v17 = *((_DWORD *)v1 + 0x16); /*0x5e5bc5*/
    if ( v17 ) /*0x5e5bca*/
    {
      v18 = (int **)(*(int (__thiscall **)(int, int))(*(_DWORD *)v17 + 0xF8))(v17, 1); /*0x5e5bda*/
      EquippedInstance = v18; /*0x5e5bdc*/
      if ( !v18 ) /*0x5e5be0*/
        goto LABEL_56; /*0x5e5be0*/
      v19 = *v18; /*0x5e5be2*/
      if ( !*EquippedInstance || !*v19 ) /*0x5e5be8*/
        goto LABEL_56; /*0x5e5beb*/
      v20 = (_DWORD *)FormHeapAlloc(0xCu); /*0x5e5bf4*/
      v21 = 0; /*0x5e5bfd*/
      if ( v20 ) /*0x5e5c05*/
      {
        v22 = (int)EquippedInstance[2]; /*0x5e5c0b*/
        ExtraCount = ExtraDataList_GetExtraCount((ExtraDataList *)**EquippedInstance); /*0x5e5c10*/
        v21 = (int **)ContainerEntryExtraData_constr(v20, v22, ExtraCount); /*0x5e5c1c*/
      }
      v24 = **EquippedInstance; /*0x5e5c23*/
      v25 = v21; /*0x5e5c2f*/
      if ( v24 ) /*0x5e5c33*/
        BSSimpleList_PushFront(*v21, v24); /*0x5e5c38*/
      v1 = this; /*0x5e5c3d*/
LABEL_55:
      if ( v25 ) /*0x5e5c46*/
        return v25; /*0x5e5c46*/
LABEL_56:
      ++v27; /*0x5e5c48*/
    }
    else
    {
      EquippedInstance = 0; /*0x5e5c52*/
      ++v27; /*0x5e5c54*/
    }
  }
  return v25; /*0x5e5c62*/
}
