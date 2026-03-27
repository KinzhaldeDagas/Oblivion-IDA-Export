int __thiscall sub_67D4F0(_DWORD *this)
{
  int v2; // eax

  v2 = (unsigned __int16)(sub_567D20(this) + 0xC);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x6Cu )
    return v2 + 8;
  else
    return v2 + 0x10;
}
