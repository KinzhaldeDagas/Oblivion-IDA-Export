void __cdecl sub_A16850()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02CC8); /*0xa1685a*/
  if ( off_B02CCC ) /*0xa16866*/
  {
    if ( *off_B02CCC == 0x53 ) /*0xa1686b*/
      FormHeapFree((unsigned int)off_B02CCC); /*0xa1686e*/
  }
}
