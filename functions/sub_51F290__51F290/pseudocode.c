void __fastcall sub_51F290(int ArgList)
{
  if ( (*(_DWORD *)(ArgList + 8) & 8) == 0 ) /*0x51f29b*/
  {
    sub_46E6B0((char *)(ArgList + 0x24), (TESForm *)ArgList); /*0x51f2a1*/
    TESForm_SetIsLinked((TESForm *)ArgList, 1); /*0x51f2aa*/
  }
}
