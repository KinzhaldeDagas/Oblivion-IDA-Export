void __usercall SaveLoad_OverwriteSavegameCallback(
        double a1@<st7>,
        double a2@<st6>,
        double a3@<st5>,
        double a4@<st4>,
        double a5@<st3>,
        double a6@<st2>,
        double a7@<st1>)
{
  unsigned __int8 v7; // bl
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

  v7 = InterfaceManager_ConsumeMessageButton(); /*0x5d339d*/
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40F); /*0x5d339f*/
  ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5d33a9*/
  v10 = OblivionDynamicCast( /*0x5d33bd*/
          ParentMenu,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &SaveMenu `RTTI Type Descriptor',
          0);
  v11 = v10; /*0x5d33c8*/
  if ( v7 == 2 ) /*0x5d33ca*/
  {
    v12 = (_DWORD *)v10[0x16]; /*0x5d33d0*/
    v13 = v10[0x13]; /*0x5d33d6*/
    if ( v12 ) /*0x5d33d9*/
      Float = Tile_GetFloat(v12, 0xFAE); /*0x5d33e0*/
    else
      Float = kTerrainLODQuadRayDirectionZ; /*0x5d33e7*/
    v17 = Float; /*0x5d33ed*/
    v15 = Double_To_SInt32(v17); /*0x5d33f5*/
    v16 = 1; /*0x5d33fc*/
    if ( v13 ) /*0x5d3401*/
    {
      while ( *(_DWORD *)v13 ) /*0x5d3406*/
      {
        if ( v15 == v16 ) /*0x5d340a*/
        {
          Tile_SetFloat((Tile *)v11[0x10], 0xFA1u, 1.0); /*0x5d3426*/
          TESSaveLoadGame_SaveGame_( /*0x5d3438*/
            (NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *> *)g_TESSaveLoadGame,
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
          break; /*0x5d3438*/
        }
        v13 = *(_DWORD *)(v13 + 4); /*0x5d340c*/
        ++v16; /*0x5d340f*/
        if ( !v13 ) /*0x5d3414*/
          break; /*0x5d3414*/
      }
    }
    GameUI_QueueMessage(stru_B387D0.value, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x5d343d*/
    sub_5D2CF0(a7); /*0x5d345a*/
    sub_5BDA20(); /*0x5d345f*/
  }
  *((_BYTE *)v11 + 0x5C) = 0; /*0x5d3465*/
}
