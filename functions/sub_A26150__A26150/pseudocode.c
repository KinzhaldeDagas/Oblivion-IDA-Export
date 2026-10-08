void __cdecl sub_A26150()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B161B8); /*0xa2615a*/
  if ( off_B161BC ) /*0xa26166*/
  {
    if ( *off_B161BC == 0x53 ) /*0xa2616b*/
      FormHeapFree((unsigned int)off_B161BC); /*0xa2616e*/
  }
}
