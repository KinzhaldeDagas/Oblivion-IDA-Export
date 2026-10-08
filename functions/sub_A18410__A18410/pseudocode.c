void __cdecl sub_A18410()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&Str); /*0xa1841a*/
  if ( off_B05BB8 ) /*0xa18426*/
  {
    if ( *off_B05BB8 == 0x53 ) /*0xa1842b*/
      FormHeapFree((unsigned int)off_B05BB8); /*0xa1842e*/
  }
}
