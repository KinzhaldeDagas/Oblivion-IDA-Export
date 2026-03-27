void __cdecl sub_A258F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bAllowHavokGrabTheLiving);
  if ( off_B14EA4 )
  {
    if ( *off_B14EA4 == 0x53 )
      FormHeapFree((unsigned int)off_B14EA4);
  }
}
