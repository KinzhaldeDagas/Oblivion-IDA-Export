// [Controller decode 2026-07-10] atexit cleanup for registered Xenon-era Controls INI setting.
void __cdecl INISetting_Destroy_fXenonMenuStickMapCursorMinSpeed()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&fXenonMenuStickMapCursorMinSpeed); /*0xa24e1a*/
  if ( fXenonMenuStickMapCursorMinSpeedSettingName[0] ) /*0xa24e26*/
  {
    if ( *fXenonMenuStickMapCursorMinSpeedSettingName[0] == 0x53 ) /*0xa24e2b*/
      FormHeapFree((unsigned int)fXenonMenuStickMapCursorMinSpeedSettingName[0]); /*0xa24e2e*/
  }
}
