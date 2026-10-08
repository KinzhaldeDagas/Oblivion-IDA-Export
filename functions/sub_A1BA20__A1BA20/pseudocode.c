void __cdecl sub_A1BA20()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B08B94); /*0xa1ba2a*/
  if ( off_B08B98 ) /*0xa1ba36*/
  {
    if ( *off_B08B98 == 0x53 ) /*0xa1ba3b*/
      FormHeapFree((unsigned int)off_B08B98); /*0xa1ba3e*/
  }
}
