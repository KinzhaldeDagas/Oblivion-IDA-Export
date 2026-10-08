void __cdecl sub_A1CD60()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B44); /*0xa1cd6a*/
  if ( off_B11B48[0] ) /*0xa1cd76*/
  {
    if ( *off_B11B48[0] == 0x53 ) /*0xa1cd7b*/
      FormHeapFree((unsigned int)off_B11B48[0]); /*0xa1cd7e*/
  }
}
