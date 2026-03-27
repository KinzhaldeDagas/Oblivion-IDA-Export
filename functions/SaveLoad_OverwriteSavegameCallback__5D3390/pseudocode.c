void __usercall SaveLoad_OverwriteSavegameCallback(
        double a1@<st7>,
        double a2@<st6>,
        double a3@<st5>,
        double a4@<st4>,
        double a5@<st3>,
        double a6@<st2>,
        double a7@<st1>)
{
  UInt8 v7; // bl
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // edi
  _DWORD *v12; // ecx
  int v13; // esi
  double Float; // st7
  int v15; // eax
  int v16; // ecx
  float v17; // [esp+10h] [ebp-4h]

  v7 = sub_578D70();
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40F);
  ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
  v10 = OblivionDynamicCast(
          ParentMenu,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &SaveMenu `RTTI Type Descriptor',
          0);
  v11 = v10;
  if ( v7 == 2 )
  {
    v12 = (_DWORD *)v10[0x16];
    v13 = v10[0x13];
    if ( v12 )
      Float = Tile_GetFloat(v12, 0xFAE);
    else
      Float = flt_A30634;
    v17 = Float;
    v15 = Double_To_SInt32(v17);
    v16 = 1;
    if ( v13 )
    {
      while ( *(_DWORD *)v13 )
      {
        if ( v15 == v16 )
        {
          Tile_SetFloat((Tile *)v11[0x10], (_DWORD *)0xFA1, 1.0);
          TESSaveLoadGame_SaveGame_(
            (NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *> *)SaveLoad_CurrentSavegame,
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            1.0,
            *(Data **)v13,
            0,
            0);
          break;
        }
        v13 = *(_DWORD *)(v13 + 4);
        ++v16;
        if ( !v13 )
          break;
      }
    }
    GameUI_QueueMessage((const char *)dword_B387D0, 0, 1u, flt_A30634);
    sub_5D2CF0(a6, a7);
    sub_5BDA20();
  }
  *((_BYTE *)v11 + 0x5C) = 0;
}
