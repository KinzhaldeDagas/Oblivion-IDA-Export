void __fastcall sub_51F290(int ArgList)
{
  if ( (*(_DWORD *)(ArgList + 8) & 8) == 0 )
  {
    sub_46E6B0((char *)(ArgList + 0x24), (TESForm *)ArgList);
    TESForm_SetIsLinked((TESForm *)ArgList, 1);
  }
}
