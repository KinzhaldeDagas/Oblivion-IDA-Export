char __userpurge sub_440AF0@<al>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        char bp0@<bpl>,
        char a5,
        char a6,
        signed int a7)
{
  void *v8; // ecx
  char *sound; // ebp
  int v10; // ebx
  int v11; // edi
  int CellAtCellCoord; // eax
  void *v14; // ecx
  __int16 MusicType; // ax
  _DWORD *v16; // ecx
  float v17[4]; // [esp+4h] [ebp-10h] BYREF

  if ( a5 )
  {
    if ( !Menu_GetOpenMenuTile(0x3EF) )
    {
      sub_540590(*(_DWORD **)(a1 + 0x5C));
      sound = (char *)OSGlobals->sound;
      if ( sound )
      {
        sub_6A9A10((_DWORD *)OSGlobals->sound);
        sub_6AC3D0(sound);
      }
      LOBYTE(v8) = a6;
      v10 = 0;
      v11 = 0;
      if ( *(_DWORD *)(a1 + 0x34) )
      {
        if ( !a6 )
          v10 = *(_DWORD *)(a1 + 0x34);
      }
      else if ( !a6 )
      {
        v10 = a7;
        if ( !a7 )
        {
          v8 = *(void **)(a1 + 0x20);
          if ( v8 == (void *)0x7FFFFFFF
            || *(_DWORD *)(a1 + 0x24) == 0x7FFFFFFF
            || (CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(
                                    *(TESWorldSpace **)(a1 + 0x74),
                                    (signed int)v8,
                                    *(_DWORD *)(a1 + 0x24)),
                (v11 = CellAtCellCoord) == 0) )
          {
            v10 = *(_DWORD *)(a1 + 0x74);
            if ( !v10 )
              return 0;
          }
          else
          {
            v10 = CellAtCellCoord;
          }
        }
      }
      if ( sub_40FDA0(v8) )
        goto LABEL_25;
      if ( v11 && sound )
      {
        v14 = (void *)v11;
      }
      else
      {
        v14 = *(void **)(a1 + 0x34);
        if ( !v14 || !sound )
          goto LABEL_25;
      }
      MusicType = TESObjectCELL_GetMusicType(v14, 0);
      if ( SoundManager_OpenMusicFile(sound, MusicType, 0, 0) )
        SoundManager_PlayMusic((int)sound, v11);
LABEL_25:
      sub_578E10((char)sound, a2, a3, v10);
      v17[0] = 0.0;
      v17[1] = flt_A2FAAC;
      v17[2] = flt_A37450;
      v17[3] = 0.0;
      sub_578E90(v17);
      return 1;
    }
  }
  else
  {
    sub_578E30(a2, a3, bp0);
    sub_5A9010(bp0, a2, a3);
    v16 = OSGlobals->sound;
    if ( v16 )
      sub_6A9AA0(v16);
  }
  return 0;
}
