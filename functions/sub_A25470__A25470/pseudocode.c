void __cdecl sub_A25470()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bBackgroundLoadLipFiles);
  if ( off_B14910 )
  {
    if ( *off_B14910 == 0x53 )
      FormHeapFree((unsigned int)off_B14910);
  }
}
