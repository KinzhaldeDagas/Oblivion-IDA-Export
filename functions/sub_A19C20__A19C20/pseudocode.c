void __cdecl sub_A19C20()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06F2C);
  if ( off_B06F30 )
  {
    if ( *off_B06F30 == 0x53 )
      FormHeapFree((unsigned int)off_B06F30);
  }
}
