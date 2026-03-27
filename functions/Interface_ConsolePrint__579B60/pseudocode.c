void Interface_ConsolePrint(char *Format, ...)
{
  _DWORD *GlobalScriptStateObj; // eax
  va_list ArgList; // [esp+8h] [ebp+8h] BYREF

  va_start(ArgList, Format);
  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( *(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 || byte_B3B908 )
      {
        GlobalScriptStateObj = (_DWORD *)GetGlobalScriptStateObj__(1);
        Console_FormatPrint(GlobalScriptStateObj, Format, ArgList);
      }
    }
  }
}
