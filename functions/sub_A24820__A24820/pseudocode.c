void __cdecl sub_A24820()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B135F8);
  if ( off_B135FC )
  {
    if ( *off_B135FC == 0x53 )
      FormHeapFree((unsigned int)off_B135FC);
  }
}
