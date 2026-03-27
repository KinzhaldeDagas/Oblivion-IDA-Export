void __cdecl sub_A232A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bFaceMipmaps);
  if ( off_B11F90[0] )
  {
    if ( *off_B11F90[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11F90[0]);
  }
}
