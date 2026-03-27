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

  sub_57DE50(0xB);
  result = TESSaveLoadGame_SaveGame_(
             (NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *> *)SaveLoad_CurrentSavegame,
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
  if ( Menu_GetOpenMenuTile(0x40F) )
  {
    result = flt_A30634;
    GameUI_QueueMessage((const char *)dword_B387D0, 0, 1u, flt_A30634);
    sub_5D2CF0(a6, a7);
    sub_5BDA20();
  }
  return result;
}
