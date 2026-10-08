void __cdecl sub_A25DD0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B15748); /*0xa25dda*/
  if ( off_B1574C ) /*0xa25de6*/
  {
    if ( *off_B1574C == 0x53 ) /*0xa25deb*/
      FormHeapFree((unsigned int)off_B1574C); /*0xa25dee*/
  }
}
