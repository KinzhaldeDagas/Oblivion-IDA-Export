InterfaceManager *sub_5793B0()
{
  InterfaceManager *result; // eax
  bool v1; // bl

  result = InterfaceManager_GetSingleton(0, 1); /*0x5793b4*/
  if ( result ) /*0x5793be*/
  {
    result = InterfaceManager_GetSingleton(0, 1); /*0x5793c4*/
    if ( result->cursor ) /*0x5793cc*/
    {
      v1 = LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk0A8) == 0; /*0x5793e7*/
      result = InterfaceManager_GetSingleton(0, 1); /*0x5793ea*/
      LOBYTE(result->unk0A8) = v1; /*0x5793f2*/
    }
  }
  return result; /*0x5793f9*/
}
