void __cdecl sub_A24850()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B13600);
  if ( off_B13604 )
  {
    if ( *off_B13604 == 0x53 )
      FormHeapFree((unsigned int)off_B13604);
  }
}
