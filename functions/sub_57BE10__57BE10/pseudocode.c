signed int sub_57BE10()
{
  signed int result; // eax

  result = 8;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x5Du )
    return 9;
  return result;
}
