// LevelUpMenu click dispatcher. Exit commits the level-up; attribute-row clicks toggle one of the menu's three available selections.
void __userpurge LevelUpMenu_HandleClick(
        int a1@<ecx>,
        int a2@<edi>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7,
        Tile *a8)
{
  if ( a6 == 1 ) /*0x5ac7ba*/
    LevelUpMenu_HandleClick_::ExitButtonClicked(a2, a3, a4, a5, 1, a7); /*0x5ac7bb*/
  else
    LevelUpMenu_HandleClick_::StatItemClicked(a6, a1, a6, a7, a8); /*0x5ac7ba*/
}
