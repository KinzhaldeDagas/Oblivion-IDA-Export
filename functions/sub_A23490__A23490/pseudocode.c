void __cdecl sub_A23490()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B120F4); /*0xa2349a*/
  if ( off_B120F8 ) /*0xa234a6*/
  {
    if ( *off_B120F8 == 0x53 ) /*0xa234ab*/
      FormHeapFree((unsigned int)off_B120F8); /*0xa234ae*/
  }
}
