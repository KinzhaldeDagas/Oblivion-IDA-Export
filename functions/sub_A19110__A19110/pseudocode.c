void __cdecl sub_A19110()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06D54); /*0xa1911a*/
  if ( off_B06D58 ) /*0xa19126*/
  {
    if ( *off_B06D58 == 0x53 ) /*0xa1912b*/
      FormHeapFree((unsigned int)off_B06D58); /*0xa1912e*/
  }
}
