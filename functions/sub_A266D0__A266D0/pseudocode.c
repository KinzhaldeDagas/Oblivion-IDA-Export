void __cdecl sub_A266D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B162FC); /*0xa266da*/
  if ( off_B16300 ) /*0xa266e6*/
  {
    if ( *off_B16300 == 0x53 ) /*0xa266eb*/
      FormHeapFree((unsigned int)off_B16300); /*0xa266ee*/
  }
}
