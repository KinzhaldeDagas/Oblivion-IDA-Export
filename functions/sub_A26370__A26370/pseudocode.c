void __cdecl sub_A26370()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B1626C); /*0xa2637a*/
  if ( off_B16270 ) /*0xa26386*/
  {
    if ( *off_B16270 == 0x53 ) /*0xa2638b*/
      FormHeapFree((unsigned int)off_B16270); /*0xa2638e*/
  }
}
