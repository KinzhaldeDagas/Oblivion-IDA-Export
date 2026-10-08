void __cdecl sub_A1C010()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&externalLodFiles); /*0xa1c01a*/
  if ( off_B09DB4 ) /*0xa1c026*/
  {
    if ( *off_B09DB4 == 0x53 ) /*0xa1c02b*/
      FormHeapFree((unsigned int)off_B09DB4); /*0xa1c02e*/
  }
}
