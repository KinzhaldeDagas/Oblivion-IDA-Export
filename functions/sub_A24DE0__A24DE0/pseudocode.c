// [Controller decode 2026-07-10] atexit cleanup for registered Xenon-era Controls INI setting.
void __cdecl INISetting_Destroy_fXenonMenuStickMapCursorMaxSpeed()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&fXenonMenuStickMapCursorMaxSpeed); /*0xa24dea*/
  if ( fXenonMenuStickMapCursorMaxSpeedSettingName ) /*0xa24df6*/
  {
    if ( *fXenonMenuStickMapCursorMaxSpeedSettingName == 0x53 ) /*0xa24dfb*/
      FormHeapFree((unsigned int)fXenonMenuStickMapCursorMaxSpeedSettingName); /*0xa24dfe*/
  }
}
