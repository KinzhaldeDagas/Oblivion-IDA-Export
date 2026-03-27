InterfaceManager *ToggleDebugText()
{
  InterfaceManager *result; // eax

  result = InterfaceManager_GetSingleton(0, 1);
  if ( result )
  {
    result = InterfaceManager_GetSingleton(0, 1);
    if ( result->cursor )
    {
      result = InterfaceManager_GetSingleton(0, 1);
      result->debugTextOn = !result->debugTextOn;
    }
  }
  return result;
}
