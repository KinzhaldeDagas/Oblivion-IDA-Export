void __cdecl sub_A1BB00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&havokDebug);
  if ( off_B097BC )
  {
    if ( *off_B097BC == 0x53 )
      FormHeapFree((unsigned int)off_B097BC);
  }
}
