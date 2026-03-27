InterfaceManager *sub_5793B0()
{
  InterfaceManager *result; // eax
  bool v5; // bl

  result = InterfaceManager_GetSingleton(0, 1);
  if ( result )
  {
    result = InterfaceManager_GetSingleton(0, 1);
    if ( result->cursor )
    {
      v5 = LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk0A8) == 0;
      result = InterfaceManager_GetSingleton(0, 1);
      LOBYTE(result->unk0A8) = v5;
    }
  }
  return result;
}
