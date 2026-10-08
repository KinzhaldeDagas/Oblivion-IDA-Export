ScriptRunner **__cdecl ScriptRunner_GetSingleton()
{
  if ( (dword_B361CC[0x10] & 1) == 0 ) /*0x51697b*/
  {
    dword_B361CC[0x10] |= 1u; /*0x51697d*/
    dword_B361CC[0xF] = 0; /*0x516988*/
    atexit(sub_A1C100); /*0x516992*/
  }
  return (ScriptRunner **)&dword_B361CC[0xF]; /*0x51699f*/
}
