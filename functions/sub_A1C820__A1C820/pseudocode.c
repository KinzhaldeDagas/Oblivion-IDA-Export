void __cdecl sub_A1C820()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)off_B11A64); /*0xa1c82a*/
  if ( off_B11A68[0] ) /*0xa1c836*/
  {
    if ( *off_B11A68[0] == 0x53 ) /*0xa1c83b*/
      FormHeapFree((unsigned int)off_B11A68[0]); /*0xa1c83e*/
  }
}
