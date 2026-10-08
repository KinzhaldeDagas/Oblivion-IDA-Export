void __cdecl sub_A18090()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B05554); /*0xa1809a*/
  if ( off_B05558[0] ) /*0xa180a6*/
  {
    if ( *off_B05558[0] == 0x53 ) /*0xa180ab*/
      FormHeapFree((unsigned int)off_B05558[0]); /*0xa180ae*/
  }
}
