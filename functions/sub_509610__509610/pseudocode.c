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
  void *sound; // ebx
  unsigned __int16 v10; // ax
  const char *v11; // edi
  UInt16 *v12; // esi
  int v13; // ecx
  bool v14; // zf
  UInt16 v16; // [esp+18h] [ebp-204h] BYREF

  sound = OSGlobals->sound;
  if ( sound )
  {
    if ( Script_ExtractArgs(a1, a2, a8, a4, argC, a5, a6, &v16) )
    {
      if ( !strcmp((const char *)&v16, "random") )
      {
        v10 = GetRandomLargeInteger_(0) % 4;
        sub_6ACD10(sound, v10, 0, COERCE_INT(1.0));
      }
      else if ( !strcmp((const char *)&v16, "explore") )
      {
        sub_6ACD10(sound, 0, 0, COERCE_INT(1.0));
      }
      else if ( !strcmp((const char *)&v16, "public") )
      {
        sub_6ACD10(sound, 1u, 0, COERCE_INT(1.0));
      }
      else if ( !strcmp((const char *)&v16, "dungeon") )
      {
        sub_6ACD10(sound, 2u, 0, COERCE_INT(1.0));
      }
      else
      {
        v11 = "battle";
        v12 = &v16;
        v13 = 7;
        v14 = 1;
        do
        {
          if ( !v13 )
            break;
          v14 = *(_BYTE *)v12 == *v11;
          v12 = (UInt16 *)((char *)v12 + 1);
          ++v11;
          --v13;
        }
        while ( v14 );
        if ( v14 )
        {
          sub_6ACD10(sound, 4u, 0, COERCE_INT(1.0));
        }
        else
        {
          SoundManager_OpenMusicFile((const char *)sound, 0, (int)&v16, 0);
          SoundManager_PlayMusic((int)sound, (int)v11);
        }
      }
    }
  }
  return 1;
}
