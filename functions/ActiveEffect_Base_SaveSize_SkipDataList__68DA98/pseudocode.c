// positive sp value has been detected, the output may be wrong!
__int16 __stdcall ActiveEffect_Base_SaveSize_::SkipDataList(int a1)
{
  unsigned __int8 currentVersion; // al
  __int16 v3; // [esp-4h] [ebp-4h]

  currentVersion = g_TESSaveLoadGame->currentVersion; /*0x68da9e*/
  if ( currentVersion < 0x48u ) /*0x68daa4*/
    return ActiveEffect_Base_SaveSize_::LowbitUnk14(currentVersion, a1); /*0x68daa4*/
  else
    return v3 + 4; /*0x68daaa*/
}
