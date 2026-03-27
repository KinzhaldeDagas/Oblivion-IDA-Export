void __cdecl sub_A17360()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B03154);
  if ( off_B03158 )
  {
    if ( *off_B03158 == 0x53 )
      FormHeapFree((unsigned int)off_B03158);
  }
}
