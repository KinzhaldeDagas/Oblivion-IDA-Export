int __stdcall sub_6A0400(int a1, int a2)
{
  int result; // eax

  result = (unsigned __int16)(sub_69DB90(a1, a2) + 4);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x37u )
    result += 9;
  return result;
}
