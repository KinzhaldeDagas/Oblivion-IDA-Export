int __cdecl sub_47F670(const char *ArgList)
{
  int result; // eax
  DWORD pcbBuffer; // [esp+4h] [ebp-10Ch] BYREF
  char Format[260]; // [esp+8h] [ebp-108h] BYREF

  pcbBuffer = 0x104;
  result = GetUserNameA(byte_B34190, &pcbBuffer);
  if ( result )
  {
    PrintToLog___("%s", ArgList);
    _sprintf(Format, "Computer Name: %s", byte_B34190);
    return PrintToLog___(Format);
  }
  return result;
}
