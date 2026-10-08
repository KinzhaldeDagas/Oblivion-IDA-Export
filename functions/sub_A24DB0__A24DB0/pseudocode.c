// [Controller decode 2026-07-10] atexit cleanup for registered Xenon-era Controls INI setting.
void __cdecl INISetting_Destroy_fXenonMenuStickMapCursorGamma()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&fXenonMenuStickMapCursorGamma); /*0xa24dba*/
  if ( fXenonMenuStickMapCursorGammaSettingName ) /*0xa24dc6*/
  {
    if ( *fXenonMenuStickMapCursorGammaSettingName == 0x53 ) /*0xa24dcb*/
      FormHeapFree((unsigned int)fXenonMenuStickMapCursorGammaSettingName); /*0xa24dce*/
  }
}
