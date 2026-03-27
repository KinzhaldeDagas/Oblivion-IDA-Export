void __cdecl sub_A26700()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B16304);
  if ( off_B16308[0] )
  {
    if ( *off_B16308[0] == 0x53 )
      FormHeapFree((unsigned int)off_B16308[0]);
  }
}
