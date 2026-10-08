void __cdecl sub_A26280()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B16244); /*0xa2628a*/
  if ( off_B16248 ) /*0xa26296*/
  {
    if ( *off_B16248 == 0x53 ) /*0xa2629b*/
      FormHeapFree((unsigned int)off_B16248); /*0xa2629e*/
  }
}
