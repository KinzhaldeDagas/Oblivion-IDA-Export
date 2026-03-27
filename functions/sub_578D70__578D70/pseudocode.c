UInt8 sub_578D70()
{
  UInt8 msgBoxButtonPressed; // bl

  msgBoxButtonPressed = InterfaceManager_GetSingleton(0, 1)->msgBoxButtonPressed;
  InterfaceManager_GetSingleton(0, 1)->msgBoxButtonPressed = 0xFF;
  return msgBoxButtonPressed;
}
