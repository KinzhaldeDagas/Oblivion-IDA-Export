void __cdecl sub_A1A5D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B070E8);
  if ( off_B070EC[0] )
  {
    if ( *off_B070EC[0] == 0x53 )
      FormHeapFree((unsigned int)off_B070EC[0]);
  }
}
