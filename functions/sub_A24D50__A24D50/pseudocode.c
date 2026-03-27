void __cdecl sub_A24D50()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B1436C);
  if ( off_B14370[0] )
  {
    if ( *off_B14370[0] == 0x53 )
      FormHeapFree((unsigned int)off_B14370[0]);
  }
}
