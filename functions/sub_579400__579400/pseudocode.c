char sub_579400()
{
  if ( InterfaceManager_GetSingleton(0, 1) && InterfaceManager_GetSingleton(0, 1)->cursor )
    return InterfaceManager_GetSingleton(0, 1)->unk0A8;
  else
    return 0;
}
