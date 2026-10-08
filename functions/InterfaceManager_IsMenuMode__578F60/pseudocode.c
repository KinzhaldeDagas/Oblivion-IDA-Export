// InterfaceManager_IsMenuMode. For a next-frame encounter handler, use this as a conservative gate: if true, leave pending encounter queued until menus are closed so spawn/combat starts in world update context.
char InterfaceManager_IsMenuMode()
{
  if ( InterfaceManager_GetSingleton(0, 1) && InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x578f7c*/
    return LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk008[0]) != 1; /*0x578f97*/
  else
    return InterfaceManager_IsMenuMode_::Return_0(); /*0x578f6e*/
}
