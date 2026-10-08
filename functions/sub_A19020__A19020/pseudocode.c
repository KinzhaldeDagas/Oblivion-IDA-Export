void __cdecl sub_A19020()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06D2C); /*0xa1902a*/
  if ( off_B06D30 ) /*0xa19036*/
  {
    if ( *off_B06D30 == 0x53 ) /*0xa1903b*/
      FormHeapFree((unsigned int)off_B06D30); /*0xa1903e*/
  }
}
