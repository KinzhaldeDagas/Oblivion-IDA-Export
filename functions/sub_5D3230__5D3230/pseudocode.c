double __usercall sub_5D3230@<st0>(
        double a1@<st7>,
        double a2@<st6>,
        double a3@<st5>,
        double a4@<st4>,
        double a5@<st3>,
        double a6@<st2>,
        double a7@<st1>,
        double a8@<st0>)
{
  double result; // st7
  double v9; // st6

  sub_57DE50(0xB); /*0x5d3232*/
  result = TESSaveLoadGame_SaveGame_( /*0x5d3246*/
             (NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *> *)g_TESSaveLoadGame,
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             0,
             0,
             0);
  if ( Menu_GetOpenMenuTile(0x40F) ) /*0x5d3250*/
  {
    v9 = kTerrainLODQuadRayDirectionZ; /*0x5d325c*/
    GameUI_QueueMessage((const char *)stru_B387D0, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x5d3270*/
    sub_5D2CF0(a6, v9); /*0x5d3278*/
    sub_5BDA20(); /*0x5d327d*/
  }
  return result; /*0x5d3282*/
}
