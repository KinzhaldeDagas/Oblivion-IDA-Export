void __cdecl sub_A16EE0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&lpText); /*0xa16eea*/
  if ( off_B02DE4[0] ) /*0xa16ef6*/
  {
    if ( *off_B02DE4[0] == 0x53 ) /*0xa16efb*/
      FormHeapFree((unsigned int)off_B02DE4[0]); /*0xa16efe*/
  }
}
