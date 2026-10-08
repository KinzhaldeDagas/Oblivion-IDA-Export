InterfaceManager *__cdecl InterfaceManager_GetSingleton(bool canCreate, bool arg1)
{
  InterfaceManager *result; // eax
  InterfaceManager *v3; // eax
  InterfaceManager *v4; // eax

  result = MEMORY[0xB3A6E0]; /*0x582185*/
  if ( canCreate && !result ) /*0x58218e*/
  {
    v3 = (InterfaceManager *)FormHeapAlloc(0x134u); /*0x582195*/
    if ( v3 ) /*0x5821ab*/
      v4 = InitializeInterfaceManager(v3); /*0x5821af*/
    else
      v4 = 0; /*0x5821b6*/
    MEMORY[0xB3A6E0] = v4; /*0x5821c7*/
    sub_581CC0(v4, arg1); /*0x5821cc*/
    return MEMORY[0xB3A6E0]; /*0x5821d1*/
  }
  return result; /*0x5821d6*/
}
