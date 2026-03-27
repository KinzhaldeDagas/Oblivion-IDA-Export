void __usercall sub_466AD0(
        NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *> *a1@<ecx>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>)
{
  GameUI_QueueMessage((const char *)dword_B38790, 0, 1u, 1.0);
  TESSaveLoadGame_SaveGame_(a1, a2, a3, a4, a5, a6, a7, a8, 1.0, 0, "quicksave", 0);
}
