void __cdecl sub_A18F60()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iMultiSample);
  if ( off_B06D10 )
  {
    if ( *off_B06D10 == 0x53 )
      FormHeapFree((unsigned int)off_B06D10);
  }
}
