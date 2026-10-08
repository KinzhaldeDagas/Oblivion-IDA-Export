void __cdecl sub_A26770()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B23C58); /*0xa2677a*/
  if ( off_B23C5C ) /*0xa26786*/
  {
    if ( *off_B23C5C == 0x53 ) /*0xa2678b*/
      FormHeapFree((unsigned int)off_B23C5C); /*0xa2678e*/
  }
}
