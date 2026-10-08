// [Controller decode 2026-07-10] atexit cleanup for registered Xenon-era Controls INI setting.
void __cdecl INISetting_Destroy_fXenonMenuStickSpeedMaxMod()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&fXenonMenuStickSpeedMaxMod); /*0xa248ea*/
  if ( fXenonMenuStickSpeedMaxModSettingName[0] ) /*0xa248f6*/
  {
    if ( *fXenonMenuStickSpeedMaxModSettingName[0] == 0x53 ) /*0xa248fb*/
      FormHeapFree((unsigned int)fXenonMenuStickSpeedMaxModSettingName[0]); /*0xa248fe*/
  }
}
