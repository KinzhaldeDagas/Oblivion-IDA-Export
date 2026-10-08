unsigned __int8 __cdecl InterfaceManager_ConsumeMessageButton()
{
  UInt8 msgBoxButtonPressed; // bl

  msgBoxButtonPressed = InterfaceManager_GetSingleton(0, 1)->msgBoxButtonPressed; /*0x578d7a*/
  InterfaceManager_GetSingleton(0, 1)->msgBoxButtonPressed = 0xFF; /*0x578d8c*/
  return msgBoxButtonPressed; /*0x578d95*/
}
