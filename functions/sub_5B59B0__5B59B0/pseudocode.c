void __cdecl MainMenu_QuitConfirmationCallback()
{
  double v0; // st5
  double v1; // st6
  _DWORD *OpenMenuTile; // esi
  unsigned __int8 v3; // bl
  int *Singleton; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x414); /*0x5b59bf*/
  v3 = InterfaceManager_ConsumeMessageButton(); /*0x5b59c8*/
  if ( OpenMenuTile ) /*0x5b59ca*/
    *(_BYTE *)(Tile_GetParentMenu(OpenMenuTile) + 0x4D) = 1; /*0x5b59d3*/
  if ( v3 == 1 ) /*0x5b59da*/
  {
    if ( OpenMenuTile ) /*0x5b59de*/
    {
      Singleton = (int *)InterfaceManager_GetSingleton(0, 1); /*0x5b59e8*/
      *(_WORD *)(*(_DWORD *)(Singleton[0x1A] + 0x24) + 0x18) |= 1u; /*0x5b59f3*/
      *(_WORD *)(*(_DWORD *)(Singleton[7] + 0x24) + 0x18) |= 1u; /*0x5b59fd*/
      MiscPass(Singleton, v0, v1, 0); /*0x5b5a08*/
    }
    MEMORY[0xB33398]->quitGame = 1; /*0x5b5a13*/
  }
  else if ( OpenMenuTile ) /*0x5b5a1a*/
  {
    *(_BYTE *)(Tile_GetParentMenu(OpenMenuTile) + 0x4D) = 0; /*0x5b5a23*/
  }
}
