void __cdecl sub_A1C670()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B11920); /*0xa1c67a*/
  if ( off_B11924[0] ) /*0xa1c686*/
  {
    if ( *off_B11924[0] == 0x53 ) /*0xa1c68b*/
      FormHeapFree((unsigned int)off_B11924[0]); /*0xa1c68e*/
  }
}
