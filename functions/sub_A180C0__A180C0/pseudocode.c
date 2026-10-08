void __cdecl sub_A180C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B0555C); /*0xa180ca*/
  if ( off_B05560[0] ) /*0xa180d6*/
  {
    if ( *off_B05560[0] == 0x53 ) /*0xa180db*/
      FormHeapFree((unsigned int)off_B05560[0]); /*0xa180de*/
  }
}
