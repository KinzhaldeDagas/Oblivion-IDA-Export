InterfaceManager *__cdecl InterfaceManager_GetSingleton(bool canCreate, bool arg1)
{
  InterfaceManager *result; // eax
  InterfaceManager *v3; // eax
  InterfaceManager *v4; // eax

  result = InterfaceManagerPtr;
  if ( canCreate && !result )
  {
    v3 = (InterfaceManager *)FormHeapAlloc(0x134u);
    if ( v3 )
      v4 = InitializeInterfaceManager(v3);
    else
      v4 = 0;
    InterfaceManagerPtr = v4;
    sub_581CC0(v4, arg1);
    return InterfaceManagerPtr;
  }
  return result;
}
