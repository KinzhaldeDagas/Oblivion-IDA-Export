bool sub_45A170()
{
  unsigned __int8 next; // al

  next = (unsigned __int8)SaveLoad_CurrentSavegame[1].createdObjectList.next;
  return next >= 0x1Fu && next < 0x5Au;
}
