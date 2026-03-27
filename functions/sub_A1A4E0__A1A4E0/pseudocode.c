void __cdecl sub_A1A4E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B070C0);
  if ( off_B070C4 )
  {
    if ( *off_B070C4 == 0x53 )
      FormHeapFree((unsigned int)off_B070C4);
  }
}
