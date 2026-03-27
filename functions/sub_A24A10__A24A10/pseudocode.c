void __cdecl sub_A24A10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B139A4);
  if ( off_B139A8 )
  {
    if ( *off_B139A8 == 0x53 )
      FormHeapFree((unsigned int)off_B139A8);
  }
}
