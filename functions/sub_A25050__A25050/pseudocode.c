void __cdecl sub_A25050()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14844);
  if ( off_B14848 )
  {
    if ( *off_B14848 == 0x53 )
      FormHeapFree((unsigned int)off_B14848);
  }
}
