void __cdecl sub_A26430()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B1628C); /*0xa2643a*/
  if ( off_B16290 ) /*0xa26446*/
  {
    if ( *off_B16290 == 0x53 ) /*0xa2644b*/
      FormHeapFree((unsigned int)off_B16290); /*0xa2644e*/
  }
}
