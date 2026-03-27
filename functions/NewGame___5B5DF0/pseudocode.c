void __usercall NewGame___(char *a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  UInt8 v5; // bl
  _DWORD *OpenMenuTile; // eax
  UInt32 v7; // eax
  TESForm *v8; // eax
  _BYTE *v9; // edi
  TESForm *v10; // eax
  TESWorldSpace *v11; // eax
  OSGlobals *v12; // edx
  const char *sound; // esi
  PlayerCharacter *v14; // eax
  void *v15; // ecx
  char *EndPtr; // [esp+0h] [ebp-4h] BYREF

  EndPtr = a1;
  v5 = sub_578D70();
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x414);
  if ( OpenMenuTile )
  {
    if ( Tile_GetParentMenu(OpenMenuTile) )
    {
      if ( v5 == 1 )
      {
        v7 = strtol(off_B1436C, &EndPtr, 0x10);
        v8 = TESForm_LookupByFormID(v7);
        if ( v8
          && v8->member.type == kFormType_Quest
          && (v9 = OblivionDynamicCast(
                     v8,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESQuest `RTTI Type Descriptor',
                     0)) != 0 )
        {
          v10 = TESForm_LookupByFormID(0x3Cu);
          v11 = (TESWorldSpace *)OblivionDynamicCast(
                                   v10,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                   &TESWorldSpace `RTTI Type Descriptor',
                                   0);
          sub_4431F0(TES, a3, a2, a4, a5, v11);
          sub_5B5960(a3, a4);
          v12 = OSGlobals;
          IsAtMainMenu = 0;
          sound = (const char *)v12->sound;
          if ( sound )
          {
            SoundManager_OpenMusicFile(sound, 0xFFFF, 0, 0);
            SoundManager_OpenMusicFile(sound, 2, 0, 0);
            SoundManager_PlayMusic((int)sound, (int)v9);
          }
          v14 = TESDataHandler_g_PlayerRef;
          byte_B3A6D3 = 1;
          LOBYTE(v14->unk7F8) = 1;
          sub_529820(v9, 1);
          TESTexture::ClearComponentReferences(v15);
        }
        else
        {
          PrintError("Unable to find character generation quest '%s'.", off_B1436C);
        }
      }
    }
  }
}
