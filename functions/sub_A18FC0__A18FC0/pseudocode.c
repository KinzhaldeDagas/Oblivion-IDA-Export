void __cdecl sub_A18FC0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06D1C);
  if ( off_B06D20 )
  {
    if ( *off_B06D20 == 0x53 )
      FormHeapFree((unsigned int)off_B06D20);
  }
}
