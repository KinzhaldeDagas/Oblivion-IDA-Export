char sub_579400()
{
  if ( InterfaceManager_GetSingleton(0, 1) && InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57941c*/
    return InterfaceManager_GetSingleton(0, 1)->unk0A8; /*0x57942b*/
  else
    return 0; /*0x579435*/
}
