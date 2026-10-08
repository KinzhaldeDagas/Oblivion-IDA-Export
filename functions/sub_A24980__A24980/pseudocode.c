void __cdecl sub_A24980()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B1398C); /*0xa2498a*/
  if ( off_B13990 ) /*0xa24996*/
  {
    if ( *off_B13990 == 0x53 ) /*0xa2499b*/
      FormHeapFree((unsigned int)off_B13990); /*0xa2499e*/
  }
}
