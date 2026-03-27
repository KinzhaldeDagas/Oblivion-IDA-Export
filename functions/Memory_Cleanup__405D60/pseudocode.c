int __usercall Memory_Cleanup@<eax>(
        char a1@<bpl>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        int a6,
        int a7)
{
  char v7; // al
  int result; // eax
  DWORD CurrentThreadId; // eax
  void *v10; // ecx
  TESWorldSpace *CurrentWorldspace; // eax
  TESWorldSpace *v12; // eax
  TESWorldSpace *v13; // eax
  float v14; // [esp+0h] [ebp-84h]
  float v15; // [esp+0h] [ebp-84h]
  char v16; // [esp+Fh] [ebp-75h]
  tagMEMORYSTATUS Buffer[2]; // [esp+10h] [ebp-74h] BYREF

  v7 = bDisableWarning_MESSAGES;
  v16 = bDisableWarning_MESSAGES;
  bDisableWarning_MESSAGES = 1;
  if ( a5 )
  {
    bDisableWarning_MESSAGES = v7;
    return 0;
  }
  else
  {
    CurrentThreadId = GetCurrentThreadId();
    switch ( a7 )
    {
      case 0:
        sub_43FC20(TES, 1);
        goto LABEL_36;
      case 1:
        sub_54FE70();
        sub_43FC20(TES, 1);
        goto LABEL_36;
      case 2:
      case 3:
        if ( !InterfaceManager_IsMenuMode() || sub_57BAC0(a1, a2, a3, a4) )
          sub_579B20();
        goto LABEL_35;
      case 4:
        sub_43BEB0(ModelLoaderPtr);
        goto LABEL_36;
      case 5:
        sub_442630(TES, 1u, 0);
        TESTexture::ClearComponentReferences(TES->gridDistantArray);
        sub_43BEB0(ModelLoaderPtr);
        sub_43FC20(TES, 1);
        goto LABEL_36;
      case 6:
        sub_785D30(v10);
        goto LABEL_36;
      case 7:
      case 8:
        if ( !byte_B33395 )
        {
          if ( TES::GetCurrentWorldspace(TES) )
          {
            CurrentWorldspace = TES::GetCurrentWorldspace(TES);
            if ( sub_4EF7E0((int)CurrentWorldspace) )
            {
              v12 = TES::GetCurrentWorldspace(TES);
              sub_4EF7E0((int)v12);
              sub_4EB0E0(0);
              v13 = TES::GetCurrentWorldspace(TES);
              sub_4EF7E0((int)v13);
              sub_4EA6E0(LODWORD(Vector3_InitValue_), *((_DWORD *)&Vector3_InitValue_ + 1), LODWORD(dword_B3F9B0), 0);
              sub_43FC20(TES, 1);
            }
          }
        }
        goto LABEL_35;
      case 9:
        if ( !byte_B33395 )
        {
          v14 = -3.4028235e38;
          sub_405090(1, v14, 100.0);
        }
        goto LABEL_36;
      case 0xA:
        if ( !byte_B33395 )
          sub_405090(1, 100.0, 250.0);
        goto LABEL_36;
      case 0xB:
        if ( !byte_B33395 )
          sub_405090(1, 250.0, 3.4028235e38);
        goto LABEL_36;
      case 0xC:
        if ( !byte_B33395 )
        {
          if ( dword_B36094 )
          {
            if ( (*(_BYTE *)(dword_B36094 + 0x18) & 1) == 0 )
            {
              *(_WORD *)(dword_B36094 + 0x18) |= 1u;
              byte_B09AE4 = 0;
              sub_7C4D90();
              sub_43FC20(TES, 1);
            }
          }
        }
        goto LABEL_36;
      case 0xD:
        if ( !byte_B33395 )
        {
          v15 = -3.4028235e38;
          sub_405090(0, v15, 100.0);
        }
        goto LABEL_36;
      case 0xE:
        if ( !byte_B33395 )
          sub_405090(0, 100.0, 250.0);
        goto LABEL_36;
      case 0xF:
        if ( !byte_B33395 )
          sub_405090(0, 250.0, 3.4028235e38);
        goto LABEL_36;
      case 0x10:
        if ( byte_B32B01 )
          goto LABEL_36;
        bDisableWarning_MESSAGES = v16;
        result = 0;
        break;
      default:
        sub_404EC0("%08X: Out of Memory Error - All passes failed.  The game will exit now.", CurrentThreadId);
LABEL_35:
        if ( a7 != 0xFFFFFFFF )
        {
LABEL_36:
          GlobalMemoryStatus(Buffer);
          MemoryHeap_GetStats(&FormHeap, &Buffer[0].dwAvailPageFile, 1);
        }
        bDisableWarning_MESSAGES = v16;
        result = a7 + 1;
        break;
    }
  }
  return result;
}
