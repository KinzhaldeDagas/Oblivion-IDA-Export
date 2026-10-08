// [Controller decode 2026-07-10] atexit cleanup for registered Xenon-era Controls INI setting.
void __cdecl INISetting_Destroy_fXenonMenuMouseXYMult()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&fXenonMenuMouseXYMult); /*0xa2455a*/
  if ( fXenonMenuMouseXYMultSettingName ) /*0xa24566*/
  {
    if ( *fXenonMenuMouseXYMultSettingName == 0x53 ) /*0xa2456b*/
      FormHeapFree((unsigned int)fXenonMenuMouseXYMultSettingName); /*0xa2456e*/
  }
}
