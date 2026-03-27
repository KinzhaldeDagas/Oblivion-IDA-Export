int sub_49F550()
{
  int v0; // eax

  v0 = 8;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x71u )
    v0 = 0xC;
  return v0 + 0xC;
}
