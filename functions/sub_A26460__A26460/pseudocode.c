void __cdecl sub_A26460()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B16294);
  if ( off_B16298 )
  {
    if ( *off_B16298 == 0x53 )
      FormHeapFree((unsigned int)off_B16298);
  }
}
