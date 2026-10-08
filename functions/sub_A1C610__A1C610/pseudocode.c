void __cdecl sub_A1C610()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B11910); /*0xa1c61a*/
  if ( off_B11914 ) /*0xa1c626*/
  {
    if ( *off_B11914 == 0x53 ) /*0xa1c62b*/
      FormHeapFree((unsigned int)off_B11914); /*0xa1c62e*/
  }
}
