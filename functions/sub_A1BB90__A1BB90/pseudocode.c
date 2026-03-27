void __cdecl sub_A1BB90()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B097D0);
  if ( off_B097D4 )
  {
    if ( *off_B097D4 == 0x53 )
      FormHeapFree((unsigned int)off_B097D4);
  }
}
