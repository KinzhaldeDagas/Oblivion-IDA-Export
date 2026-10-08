void __cdecl sub_A1CB20()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11AE4); /*0xa1cb2a*/
  if ( off_B11AE8[0] ) /*0xa1cb36*/
  {
    if ( *off_B11AE8[0] == 0x53 ) /*0xa1cb3b*/
      FormHeapFree((unsigned int)off_B11AE8[0]); /*0xa1cb3e*/
  }
}
