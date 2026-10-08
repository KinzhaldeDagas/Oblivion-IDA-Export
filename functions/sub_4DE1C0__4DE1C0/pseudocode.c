char __usercall sub_4DE1C0@<al>(int a1@<esi>, int a2)
{
  int v3; // esi
  char v4; // bl
  TESForm *v5; // eax
  int v6; // eax
  TESForm *v7; // esi
  unsigned int i; // ebp
  int v9; // esi
  size_t v10; // [esp-10h] [ebp-14h]

  if ( !a2 ) /*0x4de1c7*/
    return 0; /*0x4de1cc*/
  HIDWORD(v10) = a1; /*0x4de1cf*/
  v3 = *(_DWORD *)(a2 + 8); /*0x4de1d0*/
  v4 = 0; /*0x4de1d3*/
  if ( v3 ) /*0x4de1d7*/
  {
    LODWORD(v10) = 9; /*0x4de1dd*/
    if ( _strnicmp((const char *)v3, "FlameNode", v10) ) /*0x4de1e5*/
    {
      if ( !CRT_StricmpLocaleDispatch((const char *)v3, "FlameCap") ) /*0x4de29c*/
        *(_WORD *)(a2 + 0x18) |= 1u; /*0x4de2a8*/
      goto LABEL_15; /*0x4de2a8*/
    }
    sub_88CD50((NiObjectNET *)a2, 1, 1); /*0x4de1fa*/
    if ( isdigit(*(char *)(v3 + 9)) ) /*0x4de204*/
    {
      v5 = TESForm_LookupByFormID(*(char *)(v3 + 9) - 0x12); /*0x4de218*/
      goto LABEL_9; /*0x4de220*/
    }
    if ( isalpha(*(char *)(v3 + 9)) ) /*0x4de227*/
    {
      v6 = tolower(*(char *)(v3 + 9)); /*0x4de238*/
      v5 = TESForm_LookupByFormID(v6 - 0x39); /*0x4de241*/
LABEL_9:
      v7 = v5; /*0x4de249*/
      if ( v5 ) /*0x4de24d*/
      {
        if ( OB_CompactString_Length_010201A0(&v5[1].member.refID) ) /*0x4de252*/
        {
          if ( *(_WORD *)(a2 + 0xB8) ) /*0x4de25b*/
          {
            Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4de267*/
            ((void (__thiscall *)(TESForm *, _DWORD))v7->vtbl[1].Unk_05)(v7, 0); /*0x4de27b*/
            NiTObjectArray_ClearAndRelease((void *)(a2 + 0xAC)); /*0x4de283*/
            Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4de28a*/
            v4 = 1; /*0x4de292*/
          }
        }
      }
    }
  }
LABEL_15:
  for ( i = 0; i < *(unsigned __int16 *)(a2 + 0xB6); ++i ) /*0x4de2af*/
  {
    if ( *(unsigned __int16 *)(a2 + 0xB6) > i ) /*0x4de2c9*/
    {
      v9 = *(_DWORD *)(*(_DWORD *)(a2 + 0xB0) + 4 * i); /*0x4de2d1*/
      if ( v9 ) /*0x4de2d6*/
      {
        if ( (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9) == &parent ) /*0x4de2eb*/
        {
          if ( sub_4DE1C0(v9, v9) ) /*0x4de2ee*/
            v4 = 1; /*0x4de2fa*/
        }
      }
    }
  }
  return v4; /*0x4de1cb*/
}
