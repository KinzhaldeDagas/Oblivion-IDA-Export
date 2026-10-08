void __cdecl sub_A1CB80()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11AF4); /*0xa1cb8a*/
  if ( off_B11AF8[0] ) /*0xa1cb96*/
  {
    if ( *off_B11AF8[0] == 0x53 ) /*0xa1cb9b*/
      FormHeapFree((unsigned int)off_B11AF8[0]); /*0xa1cb9e*/
  }
}
