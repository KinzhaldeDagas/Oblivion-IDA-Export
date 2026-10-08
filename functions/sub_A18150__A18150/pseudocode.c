void __cdecl sub_A18150()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B05574); /*0xa1815a*/
  if ( off_B05578[0] ) /*0xa18166*/
  {
    if ( *off_B05578[0] == 0x53 ) /*0xa1816b*/
      FormHeapFree((unsigned int)off_B05578[0]); /*0xa1816e*/
  }
}
