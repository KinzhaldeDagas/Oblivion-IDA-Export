void __cdecl sub_A18B10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06C54); /*0xa18b1a*/
  if ( off_B06C58 ) /*0xa18b26*/
  {
    if ( *off_B06C58 == 0x53 ) /*0xa18b2b*/
      FormHeapFree((unsigned int)off_B06C58); /*0xa18b2e*/
  }
}
