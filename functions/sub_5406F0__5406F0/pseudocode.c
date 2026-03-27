int sub_5406F0()
{
  unsigned __int8 next; // cl
  int v1; // eax
  int result; // eax

  next = (unsigned __int8)SaveLoad_CurrentSavegame[1].createdObjectList.next;
  v1 = 0xC;
  if ( next >= 0x5Du )
    v1 = 0x10;
  result = v1 + 0x10;
  if ( next >= 0x69u )
    result += 8;
  return result;
}
