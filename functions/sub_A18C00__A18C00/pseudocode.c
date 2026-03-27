void __cdecl sub_A18C00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&X);
  if ( off_B06C80 )
  {
    if ( *off_B06C80 == 0x53 )
      FormHeapFree((unsigned int)off_B06C80);
  }
}
