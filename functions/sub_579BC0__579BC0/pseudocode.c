bool sub_579BC0()
{
  return InterfaceManager_GetSingleton(0, 1)
      && InterfaceManager_GetSingleton(0, 1)->cursor
      && GetGlobalScriptStateObj__(0)
      && *(_BYTE *)(GetGlobalScriptStateObj__(1) + 0x31) > 0;
}
