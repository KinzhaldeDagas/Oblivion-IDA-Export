void __thiscall sub_6B73E0(_DWORD *this)
{
  if ( g_TESDataHandler ) /*0x6b73e0*/
  {
    if ( !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] && sub_57B050(this) ) /*0x6b73f3*/
    {
      sub_57AF10(); /*0x6b73ff*/
      sub_57B0F0(0); /*0x6b7406*/
    }
  }
}
