void __cdecl sub_A18010()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B05254); /*0xa1801a*/
  if ( off_B05258 ) /*0xa18026*/
  {
    if ( *off_B05258 == 0x53 ) /*0xa1802b*/
      FormHeapFree((unsigned int)off_B05258); /*0xa1802e*/
  }
}
