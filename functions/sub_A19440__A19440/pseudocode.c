void __cdecl sub_A19440()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06DDC);
  if ( off_B06DE0 )
  {
    if ( *off_B06DE0 == 0x53 )
      FormHeapFree((unsigned int)off_B06DE0);
  }
}
