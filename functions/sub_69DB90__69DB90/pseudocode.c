signed int __stdcall sub_69DB90(int a1, int a2)
{
  signed int result; // eax

  result = 5;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x72u )
    return 9;
  return result;
}
