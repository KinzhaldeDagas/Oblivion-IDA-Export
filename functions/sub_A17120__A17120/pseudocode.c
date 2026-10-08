void __cdecl sub_A17120()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B030A4); /*0xa1712a*/
  if ( off_B030A8 ) /*0xa17136*/
  {
    if ( *off_B030A8 == 0x53 ) /*0xa1713b*/
      FormHeapFree((unsigned int)off_B030A8); /*0xa1713e*/
  }
}
