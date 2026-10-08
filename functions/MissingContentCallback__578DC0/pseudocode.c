InterfaceManager *MissingContentCallback()
{
  UInt8 msgBoxButtonPressed; // bl
  InterfaceManager *result; // eax

  msgBoxButtonPressed = InterfaceManager_GetSingleton(0, 1)->msgBoxButtonPressed; /*0x578dca*/
  result = InterfaceManager_GetSingleton(0, 1); /*0x578dd4*/
  byte_B131FC = msgBoxButtonPressed; /*0x578ddc*/
  result->msgBoxButtonPressed = 0xFF; /*0x578de2*/
  return result; /*0x578de9*/
}
