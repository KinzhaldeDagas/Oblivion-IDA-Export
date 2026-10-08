void sub_57C370(char *Format, int a2, char ArgList, int a4, int a5, ...)
{
  _DWORD *GlobalScriptStateObj; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57c39c*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57c3b4*/
    {
      if ( GetGlobalScriptStateObj__(0) && *(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 || unk_B3B908 ) /*0x57c3d8*/
      {
        GlobalScriptStateObj = (_DWORD *)GetGlobalScriptStateObj__(1); /*0x57c3ed*/
        Console_FormatPrint(GlobalScriptStateObj, Format, &ArgList); /*0x57c3f7*/
      }
    }
  }
  FormHeapFree((unsigned int)Format); /*0x57c401*/
}
