void __cdecl sub_A24C50()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B14150);
  if ( off_B14154 )
  {
    if ( *off_B14154 == 0x53 )
      FormHeapFree((unsigned int)off_B14154);
  }
}
