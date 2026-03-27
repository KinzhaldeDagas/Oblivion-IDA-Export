void __cdecl sub_A23460()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B120EC);
  if ( off_B120F0 )
  {
    if ( *off_B120F0 == 0x53 )
      FormHeapFree((unsigned int)off_B120F0);
  }
}
