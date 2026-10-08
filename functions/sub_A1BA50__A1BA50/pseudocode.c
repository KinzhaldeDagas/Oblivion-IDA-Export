void __cdecl sub_A1BA50()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B08B9C); /*0xa1ba5a*/
  if ( off_B08BA0 ) /*0xa1ba66*/
  {
    if ( *off_B08BA0 == 0x53 ) /*0xa1ba6b*/
      FormHeapFree((unsigned int)off_B08BA0); /*0xa1ba6e*/
  }
}
