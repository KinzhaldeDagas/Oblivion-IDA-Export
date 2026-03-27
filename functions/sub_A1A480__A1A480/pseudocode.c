void __cdecl sub_A1A480()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B070B0);
  if ( off_B070B4 )
  {
    if ( *off_B070B4 == 0x53 )
      FormHeapFree((unsigned int)off_B070B4);
  }
}
