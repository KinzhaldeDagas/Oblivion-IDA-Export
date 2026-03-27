void __cdecl sub_A1B990()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B08B7C);
  if ( off_B08B80 )
  {
    if ( *off_B08B80 == 0x53 )
      FormHeapFree((unsigned int)off_B08B80);
  }
}
