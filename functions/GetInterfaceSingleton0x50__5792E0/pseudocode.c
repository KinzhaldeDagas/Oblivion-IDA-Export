bool GetInterfaceSingleton0x50()
{
  return InterfaceManager_GetSingleton(0, 1)
      && InterfaceManager_GetSingleton(0, 1)->cursor
      && InterfaceManager_GetSingleton(0, 1)->debugTextOn;
}
