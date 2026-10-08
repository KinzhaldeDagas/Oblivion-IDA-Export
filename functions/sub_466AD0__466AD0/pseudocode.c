void __usercall sub_466AD0(
        NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *> *a1@<ecx>,
        double a2@<st6>,
        double a3@<st5>,
        double a4@<st4>,
        double a5@<st3>,
        double a6@<st2>,
        double a7@<st1>,
        double a8@<st0>)
{
  GameUI_QueueMessage(stru_B38790.value, 0, 1u, 1.0); /*0x466ae3*/
  TESSaveLoadGame_SaveGame_(a1, 1.0, a2, a3, a4, a5, a6, a7, a8, 0, "quicksave", 0); /*0x466af6*/
}
