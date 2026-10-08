void __cdecl sub_A19080()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06D3C); /*0xa1908a*/
  if ( off_B06D40 ) /*0xa19096*/
  {
    if ( *off_B06D40 == 0x53 ) /*0xa1909b*/
      FormHeapFree((unsigned int)off_B06D40); /*0xa1909e*/
  }
}
