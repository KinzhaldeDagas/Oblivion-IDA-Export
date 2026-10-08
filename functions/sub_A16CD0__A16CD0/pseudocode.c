void __cdecl sub_A16CD0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B02D88); /*0xa16cda*/
  if ( off_B02D8C ) /*0xa16ce6*/
  {
    if ( *off_B02D8C == 0x53 ) /*0xa16ceb*/
      FormHeapFree((unsigned int)off_B02D8C); /*0xa16cee*/
  }
}
