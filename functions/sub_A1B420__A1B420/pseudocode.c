void __cdecl sub_A1B420()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&useQuadratic); /*0xa1b42a*/
  if ( off_B0814C ) /*0xa1b436*/
  {
    if ( *off_B0814C == 0x53 ) /*0xa1b43b*/
      FormHeapFree((unsigned int)off_B0814C); /*0xa1b43e*/
  }
}
