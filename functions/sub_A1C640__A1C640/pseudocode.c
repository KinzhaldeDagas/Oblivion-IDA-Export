void __cdecl sub_A1C640()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B11918); /*0xa1c64a*/
  if ( off_B1191C ) /*0xa1c656*/
  {
    if ( *off_B1191C == 0x53 ) /*0xa1c65b*/
      FormHeapFree((unsigned int)off_B1191C); /*0xa1c65e*/
  }
}
