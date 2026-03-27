void __cdecl sub_A24F00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B1480C);
  if ( off_B14810 )
  {
    if ( *off_B14810 == 0x53 )
      FormHeapFree((unsigned int)off_B14810);
  }
}
