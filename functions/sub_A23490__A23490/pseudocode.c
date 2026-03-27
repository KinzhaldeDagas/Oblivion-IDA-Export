void __cdecl sub_A23490()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B120F4);
  if ( off_B120F8 )
  {
    if ( *off_B120F8 == 0x53 )
      FormHeapFree((unsigned int)off_B120F8);
  }
}
