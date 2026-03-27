void sub_57C370(char *Format, int a2, char ArgList, int a4, int a5, ...)
{
  _DWORD *GlobalScriptStateObj; // eax

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( GetGlobalScriptStateObj__(0) && *(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 || byte_B3B908 )
      {
        GlobalScriptStateObj = (_DWORD *)GetGlobalScriptStateObj__(1);
        Console_FormatPrint(GlobalScriptStateObj, Format, &ArgList);
      }
    }
  }
  FormHeapFree((unsigned int)Format);
}
