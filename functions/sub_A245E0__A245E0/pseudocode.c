// [Controller decode 2026-07-10] atexit cleanup for registered Xenon-era Controls INI setting.
void __cdecl INISetting_Destroy_fXenonMenuDpadRepeatSpeed()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&fXenonMenuDpadRepeatSpeed); /*0xa245ea*/
  if ( fXenonMenuDpadRepeatSpeedSettingName ) /*0xa245f6*/
  {
    if ( *fXenonMenuDpadRepeatSpeedSettingName == 0x53 ) /*0xa245fb*/
      FormHeapFree((unsigned int)fXenonMenuDpadRepeatSpeedSettingName); /*0xa245fe*/
  }
}
