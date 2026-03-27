int __stdcall LevelUpMenu_HandleClick(int a1, int a2, Tile *a3)
{
  if ( a1 == 1 )
    return LevelUpMenu_HandleClick_::ExitButtonClicked(1, a2);
  else
    return LevelUpMenu_HandleClick_::StatItemClicked(a1, a2, a3);
}
