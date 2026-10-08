void __cdecl sub_A18FF0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&texmipmapskip); /*0xa18ffa*/
  if ( off_B06D28 ) /*0xa19006*/
  {
    if ( *off_B06D28 == 0x53 ) /*0xa1900b*/
      FormHeapFree((unsigned int)off_B06D28); /*0xa1900e*/
  }
}
