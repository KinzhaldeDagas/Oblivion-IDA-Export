char __userpurge sub_440AF0@<al>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5,
        char a6,
        signed int a7)
{
  void *v9; // ecx
  char *sound; // ebp
  int v11; // ebx
  int v12; // edi
  TESObjectCELL *CellAtCellCoord; // eax
  TESObjectCELL *v15; // ecx
  __int16 MusicType; // ax
  _DWORD *v17; // ecx
  float v18[4]; // [esp+4h] [ebp-10h] BYREF

  if ( a5 ) /*0x440afb*/
  {
    if ( !Menu_GetOpenMenuTile(0x3EF) ) /*0x440b06*/
    {
      sub_540590(*(_DWORD **)(a1 + 0x5C)); /*0x440b1a*/
      sound = (char *)MEMORY[0xB33398]->sound; /*0x440b24*/
      if ( sound ) /*0x440b29*/
      {
        sub_6A9A10((_DWORD *)MEMORY[0xB33398]->sound); /*0x440b2d*/
        sub_6AC3D0(sound); /*0x440b34*/
      }
      LOBYTE(v9) = a6; /*0x440b3c*/
      v11 = 0; /*0x440b42*/
      v12 = 0; /*0x440b44*/
      if ( *(_DWORD *)(a1 + 0x34) ) /*0x440b39*/
      {
        if ( !a6 ) /*0x440b98*/
          v11 = *(_DWORD *)(a1 + 0x34); /*0x440b9a*/
      }
      else if ( !a6 ) /*0x440b4c*/
      {
        v11 = a7; /*0x440b4e*/
        if ( !a7 ) /*0x440b54*/
        {
          v9 = *(void **)(a1 + 0x20); /*0x440b56*/
          if ( v9 == (void *)0x7FFFFFFF /*0x440b79*/
            || *(_DWORD *)(a1 + 0x24) == 0x7FFFFFFF
            || (CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(
                                    *(TESWorldSpace **)(a1 + 0x74),
                                    (int)v9,
                                    *(_DWORD *)(a1 + 0x24)),
                (v12 = (int)CellAtCellCoord) == 0) )
          {
            v11 = *(_DWORD *)(a1 + 0x74); /*0x440b7f*/
            if ( !v11 ) /*0x440b84*/
              return 0; /*0x440b8f*/
          }
          else
          {
            v11 = (int)CellAtCellCoord; /*0x440b7b*/
          }
        }
      }
      if ( sub_40FDA0(v9) ) /*0x440b9c*/
        goto LABEL_25; /*0x440ba3*/
      if ( v12 && sound ) /*0x440bab*/
      {
        v15 = (TESObjectCELL *)v12; /*0x440bad*/
      }
      else
      {
        v15 = *(TESObjectCELL **)(a1 + 0x34); /*0x440bb1*/
        if ( !v15 || !sound ) /*0x440bba*/
          goto LABEL_25; /*0x440bba*/
      }
      MusicType = (unsigned __int16)TESObjectCELL_GetMusicType(v15, 0); /*0x440bc2*/
      if ( SoundManager_OpenMusicFile(sound, MusicType, 0, 0) ) /*0x440bca*/
        SoundManager_PlayMusic((int)sound, v12); /*0x440bd5*/
LABEL_25:
      sub_578E10((char)sound, a2, a3, a4, v11); /*0x440bda*/
      v18[0] = 0.0; /*0x440be2*/
      v18[1] = kFaceEarNormalMatchRadius; /*0x440bf1*/
      v18[2] = flt_A37450; /*0x440bfb*/
      v18[3] = 0.0; /*0x440bff*/
      sub_578E90(v18); /*0x440c03*/
      return 1; /*0x440c14*/
    }
  }
  else
  {
    sub_578E30(a2, a3, a4); /*0x440c17*/
    sub_5A9010(); /*0x440c1c*/
    v17 = MEMORY[0xB33398]->sound; /*0x440c27*/
    if ( v17 ) /*0x440c2c*/
      sub_6A9AA0(v17); /*0x440c2e*/
  }
  return 0; /*0x440b8b*/
}
