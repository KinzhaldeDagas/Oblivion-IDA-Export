int __cdecl sub_47F670(const char *ArgList)
{
  int result; // eax
  DWORD pcbBuffer; // [esp+4h] [ebp-10Ch] BYREF
  char Format[260]; // [esp+8h] [ebp-108h] BYREF

  pcbBuffer = 0x104; /*0x47f696*/
  result = GetUserNameA(&MEMORY[0xB33E90][0x300], &pcbBuffer); /*0x47f69e*/
  if ( result )
  {
    PrintToLog___("%s", ArgList); /*0x47f6ae*/
    _sprintf(Format, "Computer Name: %s", &MEMORY[0xB33E90][0x300]);
    return PrintToLog___(Format); /*0x47f6cc*/
  }
  return result; /*0x47f6d4*/
}
