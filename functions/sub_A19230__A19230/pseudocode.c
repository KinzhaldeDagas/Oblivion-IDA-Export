void __cdecl sub_A19230()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06D84);
  if ( off_B06D88 )
  {
    if ( *off_B06D88 == 0x53 )
      FormHeapFree((unsigned int)off_B06D88);
  }
}
