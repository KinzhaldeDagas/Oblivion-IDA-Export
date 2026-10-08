char sub_579B20()
{
  InterfaceManager *Singleton; // eax
  InterfaceManager *v1; // esi

  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x579b24*/
  if ( Singleton ) /*0x579b2e*/
  {
    Singleton = InterfaceManager_GetSingleton(0, 1); /*0x579b34*/
    if ( Singleton->cursor ) /*0x579b3c*/
    {
      v1 = InterfaceManager_GetSingleton(0, 1); /*0x57da63*/
      Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x57da65*/
      (*(void (__thiscall **)(Tile *))(*(_DWORD *)v1->menuRoot + 0x18))(v1->menuRoot); /*0x57da75*/
      Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x57da79*/
      LOBYTE(Singleton) = sub_43FC20(MEMORY[0xB333A0], 1); /*0x57da89*/
    }
  }
  return (char)Singleton; /*0x579b55*/
}
