void __cdecl sub_A19920()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06EAC);
  if ( off_B06EB0 )
  {
    if ( *off_B06EB0 == 0x53 )
      FormHeapFree((unsigned int)off_B06EB0);
  }
}
