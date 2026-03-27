void __cdecl sub_A17330()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B0314C);
  if ( off_B03150 )
  {
    if ( *off_B03150 == 0x53 )
      FormHeapFree((unsigned int)off_B03150);
  }
}
