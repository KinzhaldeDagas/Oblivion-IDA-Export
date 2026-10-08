void __cdecl sub_A1B900()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B08B64); /*0xa1b90a*/
  if ( off_B08B68 ) /*0xa1b916*/
  {
    if ( *off_B08B68 == 0x53 ) /*0xa1b91b*/
      FormHeapFree((unsigned int)off_B08B68); /*0xa1b91e*/
  }
}
