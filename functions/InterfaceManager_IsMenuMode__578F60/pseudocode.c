char InterfaceManager_IsMenuMode()
{
  if ( InterfaceManager_GetSingleton(0, 1) && InterfaceManager_GetSingleton(0, 1)->cursor )
    return LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk008[0]) != 1;
  else
    return InterfaceManager_IsMenuMode_::Return_0();
}
