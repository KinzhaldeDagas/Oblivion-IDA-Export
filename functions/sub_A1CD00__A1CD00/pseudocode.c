void __cdecl sub_A1CD00()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B34); /*0xa1cd0a*/
  if ( off_B11B38[0] ) /*0xa1cd16*/
  {
    if ( *off_B11B38[0] == 0x53 ) /*0xa1cd1b*/
      FormHeapFree((unsigned int)off_B11B38[0]); /*0xa1cd1e*/
  }
}
