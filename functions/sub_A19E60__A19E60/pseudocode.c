void __cdecl sub_A19E60()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06F8C);
  if ( off_B06F90 )
  {
    if ( *off_B06F90 == 0x53 )
      FormHeapFree((unsigned int)off_B06F90);
  }
}
