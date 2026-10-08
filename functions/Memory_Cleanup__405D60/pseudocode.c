// Verified memory-pressure dispatcher cases 9-11 and 13-15 call TES_RemoveTreeModelsByTrunkLength with BSTreeModel.trunkLength buckets [-FLT_MAX,100), [100,250), and [250,FLT_MAX). The ranges derive from CSpeedTreeRT_GetTrunkLength; the length units are Unknown.
int __cdecl Memory_Cleanup(int a1, int a2, int a3)
{
  char v3; // al
  int result; // eax
  DWORD CurrentThreadId; // eax
  void *v6; // ecx
  TESWorldSpace *CurrentWorldspace; // eax
  TESWorldSpace *v8; // eax
  TESWorldSpace *v9; // eax
  float v10; // [esp+0h] [ebp-84h]
  float v11; // [esp+0h] [ebp-84h]
  char v12; // [esp+Fh] [ebp-75h]
  tagMEMORYSTATUS Buffer[2]; // [esp+10h] [ebp-74h] BYREF

  v3 = bDisableWarning_MESSAGES; /*0x405d68*/
  v12 = bDisableWarning_MESSAGES; /*0x405d6e*/
  bDisableWarning_MESSAGES = 1; /*0x405d72*/
  if ( a1 )
  {
    bDisableWarning_MESSAGES = v3; /*0x405d7b*/
    return 0; /*0x405d80*/
  }
  else
  {
    CurrentThreadId = GetCurrentThreadId(); /*0x405d87*/
    switch ( a3 )
    {
      case 0:
        sub_43FC20(MEMORY[0xB333A0], 1); /*0x405dac*/
        goto LABEL_36; /*0x405db1*/
      case 1:
        sub_54FE70(); /*0x405db6*/
        sub_43FC20(MEMORY[0xB333A0], 1); /*0x405dc3*/
        goto LABEL_36; /*0x405dc8*/
      case 2:
      case 3:
        if ( !InterfaceManager_IsMenuMode() || sub_57BAC0() ) /*0x405dd6*/
          sub_579B20(); /*0x405de3*/
        goto LABEL_35; /*0x405de8*/
      case 4:
        sub_43BEB0(MEMORY[0xB33A1C]); /*0x405df3*/
        goto LABEL_36; /*0x405df8*/
      case 5:
        sub_442630(MEMORY[0xB333A0], 1u, 0); /*0x405e07*/
        Shared_NoOpVirtual_60D0A0(MEMORY[0xB333A0]->gridDistantArray); /*0x405e14*/
        sub_43BEB0(MEMORY[0xB33A1C]); /*0x405e1f*/
        sub_43FC20(MEMORY[0xB333A0], 1); /*0x405e2c*/
        goto LABEL_36; /*0x405e31*/
      case 6:
        OB_StBezierSpline_ClearCache_010201A0(v6); /*0x405e36*/
        goto LABEL_36; /*0x405e3b*/
      case 7:
      case 8:
        if ( !unk_B33395 ) /*0x405e47*/
        {
          if ( TES::GetCurrentWorldspace(MEMORY[0xB333A0]) ) /*0x405e53*/
          {
            CurrentWorldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x405e66*/
            if ( TESWorldSpace_GetRootTerrainLODQuadMap((int)CurrentWorldspace) ) /*0x405e6d*/
            {
              v8 = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x405e80*/
              TESWorldSpace_GetRootTerrainLODQuadMap((int)v8); /*0x405e87*/
              sub_4EB0E0(0); /*0x405e8e*/
              v9 = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x405e9c*/
              TESWorldSpace_GetRootTerrainLODQuadMap((int)v9); /*0x405ea3*/
              DistantLOD_UpdateLandLODAtPosition( /*0x405ec9*/
                SLODWORD(g_zeroNiPoint3),
                *(&g_zeroNiPoint3 + 1),
                SLODWORD(MEMORY[0xB3F9B0][0]),
                0);
              sub_43FC20(MEMORY[0xB333A0], 1); /*0x405ed9*/
            }
          }
        }
        goto LABEL_35; /*0x405ede*/
      case 9:
        if ( !unk_B33395 ) /*0x405eea*/
        {
          v10 = -3.4028235e38; /*0x405f05*/
          TES_RemoveTreeModelsByTrunkLength(1, v10, 100.0);// Verified Memory_Cleanup case 9 releases resident TREE model 3D with trunkLength in [-FLT_MAX,100), skipping the active exterior neighborhood. /*0x405f0a*/
        }
        goto LABEL_36; /*0x405f12*/
      case 0xA:
        if ( !unk_B33395 ) /*0x405f1e*/
          TES_RemoveTreeModelsByTrunkLength(1, 100.0, 250.0);// Verified Memory_Cleanup case 10 releases resident TREE model 3D with trunkLength in [100,250), skipping the active exterior neighborhood. /*0x405f3c*/
        goto LABEL_36; /*0x405f44*/
      case 0xB:
        if ( !unk_B33395 ) /*0x405f50*/
          TES_RemoveTreeModelsByTrunkLength(1, 250.0, 3.4028235e38);// Verified Memory_Cleanup case 11 releases resident TREE model 3D with trunkLength in [250,FLT_MAX), skipping the active exterior neighborhood. /*0x405f6e*/
        goto LABEL_36; /*0x405f76*/
      case 0xC:
        if ( !unk_B33395 ) /*0x405f82*/
        {
          if ( unk_B36094 ) /*0x405f8f*/
          {
            if ( (*(_BYTE *)(unk_B36094 + 0x18) & 1) == 0 ) /*0x405f99*/
            {
              *(_WORD *)(unk_B36094 + 0x18) |= 1u; /*0x405f9f*/
              byte_B09AE4 = 0; /*0x405fa4*/
              sub_7C4D90(); /*0x405fab*/
              sub_43FC20(MEMORY[0xB333A0], 1); /*0x405fb8*/
            }
          }
        }
        goto LABEL_36; /*0x405fbd*/
      case 0xD:
        if ( !unk_B33395 ) /*0x405fc9*/
        {
          v11 = -3.4028235e38; /*0x405fe4*/
          TES_RemoveTreeModelsByTrunkLength(0, v11, 100.0);// Verified Memory_Cleanup case 13 releases resident TREE model 3D with trunkLength in [-FLT_MAX,100) across loaded cells, including the active exterior neighborhood. /*0x405fe9*/
        }
        goto LABEL_36; /*0x405ff1*/
      case 0xE:
        if ( !unk_B33395 ) /*0x405ffd*/
          TES_RemoveTreeModelsByTrunkLength(0, 100.0, 250.0);// Verified Memory_Cleanup case 14 releases resident TREE model 3D with trunkLength in [100,250) across loaded cells, including the active exterior neighborhood. /*0x406017*/
        goto LABEL_36; /*0x40601f*/
      case 0xF:
        if ( !unk_B33395 ) /*0x406028*/
          TES_RemoveTreeModelsByTrunkLength(0, 250.0, 3.4028235e38);// Verified Memory_Cleanup case 15 releases resident TREE model 3D with trunkLength in [250,FLT_MAX) across loaded cells, including the active exterior neighborhood. /*0x406042*/
        goto LABEL_36; /*0x40604a*/
      case 0x10:
        if ( byte_B32B01 ) /*0x406053*/
          goto LABEL_36; /*0x406053*/
        bDisableWarning_MESSAGES = v12; /*0x40605c*/
        result = 0; /*0x406062*/
        break; /*0x406069*/
      default:
        sub_404EC0("%08X: Out of Memory Error - All passes failed.  The game will exit now.", CurrentThreadId);
LABEL_35:
        if ( a3 != 0xFFFFFFFF ) /*0x40607b*/
        {
LABEL_36:
          GlobalMemoryStatus(Buffer); /*0x40607d*/
          MemoryHeap_GetStats(&FormHeap, &Buffer[0].dwAvailPageFile, 1); /*0x406094*/
        }
        bDisableWarning_MESSAGES = v12; /*0x4060a0*/
        result = a3 + 1; /*0x40609d*/
        break; /*0x40609d*/
    }
  }
  return result; /*0x405d82*/
}
