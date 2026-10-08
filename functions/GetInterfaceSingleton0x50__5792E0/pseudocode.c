bool GetInterfaceSingleton0x50()
{
  return InterfaceManager_GetSingleton(0, 1) /*0x57930b*/
      && InterfaceManager_GetSingleton(0, 1)->cursor
      && InterfaceManager_GetSingleton(0, 1)->debugTextOn;
}
