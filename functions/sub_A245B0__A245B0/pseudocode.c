// [Controller decode 2026-07-10] atexit cleanup for registered Xenon-era Controls INI setting.
void __cdecl INISetting_Destroy_fXenonMenuStickSpeed()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&fXenonMenuStickSpeed); /*0xa245ba*/
  if ( fXenonMenuStickSpeedSettingName ) /*0xa245c6*/
  {
    if ( *fXenonMenuStickSpeedSettingName == 0x53 ) /*0xa245cb*/
      FormHeapFree((unsigned int)fXenonMenuStickSpeedSettingName); /*0xa245ce*/
  }
}
