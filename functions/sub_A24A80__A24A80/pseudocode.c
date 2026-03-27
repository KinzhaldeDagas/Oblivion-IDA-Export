void __cdecl sub_A24A80()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B13FC4);
  if ( off_B13FC8 )
  {
    if ( *off_B13FC8 == 0x53 )
      FormHeapFree((unsigned int)off_B13FC8);
  }
}
