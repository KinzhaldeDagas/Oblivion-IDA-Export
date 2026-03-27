void __cdecl sub_A16BE0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bUseHardDriveCache);
  if ( off_B02D64 )
  {
    if ( *off_B02D64 == 0x53 )
      FormHeapFree((unsigned int)off_B02D64);
  }
}
