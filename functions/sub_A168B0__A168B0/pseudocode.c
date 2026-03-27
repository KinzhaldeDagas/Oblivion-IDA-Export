void __cdecl sub_A168B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02CD8);
  if ( off_B02CDC )
  {
    if ( *off_B02CDC == 0x53 )
      FormHeapFree((unsigned int)off_B02CDC);
  }
}
