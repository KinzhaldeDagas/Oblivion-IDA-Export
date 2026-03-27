void __cdecl sub_A24610()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B135A0);
  if ( off_B135A4 )
  {
    if ( *off_B135A4 == 0x53 )
      FormHeapFree((unsigned int)off_B135A4);
  }
}
