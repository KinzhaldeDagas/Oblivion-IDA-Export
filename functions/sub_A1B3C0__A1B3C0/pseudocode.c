void __cdecl sub_A1B3C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B08138); /*0xa1b3ca*/
  if ( off_B0813C ) /*0xa1b3d6*/
  {
    if ( *off_B0813C == 0x53 ) /*0xa1b3db*/
      FormHeapFree((unsigned int)off_B0813C); /*0xa1b3de*/
  }
}
