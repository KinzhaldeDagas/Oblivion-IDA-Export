InterfaceManager *MissingContentCallback()
{
  UInt8 msgBoxButtonPressed; // bl
  InterfaceManager *result; // eax

  msgBoxButtonPressed = InterfaceManager_GetSingleton(0, 1)->msgBoxButtonPressed;
  result = InterfaceManager_GetSingleton(0, 1);
  byte_B131FC = msgBoxButtonPressed;
  result->msgBoxButtonPressed = 0xFF;
  return result;
}
