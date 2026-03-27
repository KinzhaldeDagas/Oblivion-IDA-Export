int __cdecl SetHavokPaused(char a1)
{
  int result; // eax

  if ( HavokGamePausedFlag != a1 )
  {
    dword_BA7924 = 0;
    dword_BA7928 = 0;
    dword_BA792C = 0;
    dword_BA7930 = 0;
    dword_BA7934 = 0;
    HavokGamePausedFlag = a1;
    return 0;
  }
  return result;
}
