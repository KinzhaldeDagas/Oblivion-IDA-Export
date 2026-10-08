char __cdecl sub_509610(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *a6,
        int a7,
        UInt32 *a8)
{
  char *sound; // ebx
  unsigned __int16 v9; // ax
  const char *v10; // edi
  UInt16 *v11; // esi
  int v12; // ecx
  bool v13; // zf
  UInt16 v15; // [esp+18h] [ebp-204h] BYREF

  sound = (char *)MEMORY[0xB33398]->sound; /*0x509656*/
  if ( sound ) /*0x50966b*/
  {
    if ( Script_ExtractArgs(a1, a2, a8, a4, argC, a5, a6, &v15) ) /*0x509686*/
    {
      if ( !strcmp((const char *)&v15, "random") ) /*0x5096a7*/
      {
        v9 = Game_RandomLargeInteger(0) % 4; /*0x5096c6*/
        sub_6ACD10(sound, v9, 0, COERCE_INT(1.0)); /*0x5096ca*/
      }
      else if ( !strcmp((const char *)&v15, "explore") ) /*0x5096e4*/
      {
        sub_6ACD10(sound, 0, 0, COERCE_INT(1.0)); /*0x5096f2*/
      }
      else if ( !strcmp((const char *)&v15, "public") ) /*0x50970c*/
      {
        sub_6ACD10(sound, 1u, 0, COERCE_INT(1.0)); /*0x50971b*/
      }
      else if ( !strcmp((const char *)&v15, "dungeon") ) /*0x509732*/
      {
        sub_6ACD10(sound, 2u, 0, COERCE_INT(1.0)); /*0x509741*/
      }
      else
      {
        v10 = "battle"; /*0x509748*/
        v11 = &v15; /*0x50974d*/
        v12 = 7; /*0x509751*/
        v13 = 1; /*0x509756*/
        do /*0x509758*/
        {
          if ( !v12 ) /*0x509758*/
            break; /*0x509758*/
          v13 = *(_BYTE *)v11 == *v10; /*0x509758*/
          v11 = (UInt16 *)((char *)v11 + 1); /*0x509758*/
          ++v10; /*0x509758*/
          --v12; /*0x509758*/
        }
        while ( v13 ); /*0x509758*/
        if ( v13 ) /*0x50975a*/
        {
          sub_6ACD10(sound, 4u, 0, COERCE_INT(1.0)); /*0x509767*/
        }
        else
        {
          SoundManager_OpenMusicFile(sound, 0, (const char *)&v15, 0); /*0x509779*/
          SoundManager_PlayMusic((int)sound, (int)v10); /*0x509780*/
        }
      }
    }
  }
  return 1; /*0x509785*/
}
