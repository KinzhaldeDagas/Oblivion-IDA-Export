void Interface_ConsolePrint(char *Format, ...)
{
  _DWORD *GlobalScriptStateObj; // eax
  va_list ArgList; // [esp+8h] [ebp+8h] BYREF

  va_start(ArgList, Format);
  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x579b64*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x579b7c*/
    {
      if ( *(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 || unk_B3B908 ) /*0x579b92*/
      {
        GlobalScriptStateObj = (_DWORD *)GetGlobalScriptStateObj__(1); /*0x579ba7*/
        Console_FormatPrint(GlobalScriptStateObj, Format, ArgList); /*0x579bb1*/
      }
    }
  }
}
