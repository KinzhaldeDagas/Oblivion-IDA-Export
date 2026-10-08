void __usercall NewGame___(char *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  unsigned __int8 v4; // bl
  _DWORD *OpenMenuTile; // eax
  UInt32 v6; // eax
  TESForm *v7; // eax
  TESQuest *v8; // edi
  TESForm *v9; // eax
  TESWorldSpace *v10; // eax
  OSGlobals *v11; // edx
  char *sound; // esi
  PlayerCharacter *v13; // eax
  void *v14; // ecx
  char *EndPtr; // [esp+0h] [ebp-4h] BYREF

  EndPtr = a1; /*0x5b5df0*/
  v4 = InterfaceManager_ConsumeMessageButton(); /*0x5b5dfc*/
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x414); /*0x5b5dfe*/
  if ( OpenMenuTile ) /*0x5b5e08*/
  {
    if ( Tile_GetParentMenu(OpenMenuTile) ) /*0x5b5e10*/
    {
      if ( v4 == 1 ) /*0x5b5e20*/
      {
        v6 = strtol(off_B1436C, &EndPtr, 0x10); /*0x5b5e35*/
        v7 = TESForm_LookupByFormID(v6); /*0x5b5e3b*/
        if ( v7 /*0x5b5e70*/
          && v7->member.type == kFormType_Quest
          && (v8 = (TESQuest *)OblivionDynamicCast(
                                 v7,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &TESQuest `RTTI Type Descriptor',
                                 0)) != 0 )
        {
          v9 = TESForm_LookupByFormID(0x3Cu); /*0x5b5e87*/
          v10 = (TESWorldSpace *)OblivionDynamicCast( /*0x5b5e90*/
                                   v9,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                   &TESWorldSpace `RTTI Type Descriptor',
                                   0);
          sub_4431F0(MEMORY[0xB333A0], a2, a3, a4, v10); /*0x5b5e9f*/
          sub_5B5960(a2, a3); /*0x5b5ea4*/
          v11 = MEMORY[0xB33398]; /*0x5b5ea9*/
          MEMORY[0xB3C0EC] = 0; /*0x5b5eaf*/
          sound = (char *)v11->sound; /*0x5b5eb6*/
          if ( sound ) /*0x5b5ebb*/
          {
            SoundManager_OpenMusicFile(sound, 0xFFFF, 0, 0); /*0x5b5ec8*/
            SoundManager_OpenMusicFile(sound, 2, 0, 0); /*0x5b5ed5*/
            SoundManager_PlayMusic((int)sound, (int)v8); /*0x5b5edc*/
          }
          v13 = reference; /*0x5b5ee1*/
          unk_B3A6D3 = 1; /*0x5b5ee6*/
          LOBYTE(v13->unk7F8) = 1; /*0x5b5ef1*/
          TESQuest::SetRunning(v8, 1); /*0x5b5ef8*/
          Shared_NoOpVirtual_60D0A0(v14); /*0x5b5efd*/
        }
        else
        {
          PrintError("Unable to find character generation quest '%s'.", off_B1436C); /*0x5b5f13*/
        }
      }
    }
  }
}
