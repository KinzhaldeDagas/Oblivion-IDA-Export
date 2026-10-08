void __cdecl sub_A1B450()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B08150); /*0xa1b45a*/
  if ( off_B08154 ) /*0xa1b466*/
  {
    if ( *off_B08154 == 0x53 ) /*0xa1b46b*/
      FormHeapFree((unsigned int)off_B08154); /*0xa1b46e*/
  }
}
