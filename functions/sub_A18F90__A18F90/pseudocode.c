void __cdecl sub_A18F90()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bAllowScreenShot);
  if ( off_B06D18 )
  {
    if ( *off_B06D18 == 0x53 )
      FormHeapFree((unsigned int)off_B06D18);
  }
}
