// [Controller decode 2026-07-10] atexit cleanup for registered Xenon-era Controls INI setting.
void __cdecl INISetting_Destroy_iXenonMenuStickDeadZone()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iXenonMenuStickDeadZone); /*0xa2458a*/
  if ( iXenonMenuStickDeadZoneSettingName ) /*0xa24596*/
  {
    if ( *iXenonMenuStickDeadZoneSettingName == 0x53 ) /*0xa2459b*/
      FormHeapFree((unsigned int)iXenonMenuStickDeadZoneSettingName); /*0xa2459e*/
  }
}
