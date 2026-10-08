InterfaceManager *ToggleDebugText()
{
  InterfaceManager *result; // eax

  result = InterfaceManager_GetSingleton(0, 1); /*0x57c204*/
  if ( result ) /*0x57c20e*/
  {
    result = InterfaceManager_GetSingleton(0, 1); /*0x57c214*/
    if ( result->cursor ) /*0x57c21c*/
    {
      result = InterfaceManager_GetSingleton(0, 1); /*0x57c226*/
      result->debugTextOn = !result->debugTextOn; /*0x57c235*/
    }
  }
  return result; /*0x57c238*/
}
