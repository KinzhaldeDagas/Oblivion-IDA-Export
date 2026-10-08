void __cdecl INISetting_Destroy_bUseJoystick()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bUseJoystick); /*0xa1643a*/
  if ( bUseJoystickSettingName ) /*0xa16446*/
  {
    if ( *bUseJoystickSettingName == 0x53 ) /*0xa1644b*/
      FormHeapFree((unsigned int)bUseJoystickSettingName); /*0xa1644e*/
  }
}
