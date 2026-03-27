void __cdecl sub_A1A390()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B07088);
  if ( off_B0708C )
  {
    if ( *off_B0708C == 0x53 )
      FormHeapFree((unsigned int)off_B0708C);
  }
}
