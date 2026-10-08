// [Controller decode 2026-07-10] atexit cleanup for registered Xenon-era Controls INI setting.
void __cdecl INISetting_Destroy_fXenonMenuStickSpeedPlayerRotMod()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&fXenonMenuStickSpeedPlayerRotMod); /*0xa24b2a*/
  if ( fXenonMenuStickSpeedPlayerRotModSettingName ) /*0xa24b36*/
  {
    if ( *fXenonMenuStickSpeedPlayerRotModSettingName == 0x53 ) /*0xa24b3b*/
      FormHeapFree((unsigned int)fXenonMenuStickSpeedPlayerRotModSettingName); /*0xa24b3e*/
  }
}
