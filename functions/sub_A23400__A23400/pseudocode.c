void __cdecl sub_A23400()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bUSeMultithreadedFaceGen); /*0xa2340a*/
  if ( off_B120E0 ) /*0xa23416*/
  {
    if ( *off_B120E0 == 0x53 ) /*0xa2341b*/
      FormHeapFree((unsigned int)off_B120E0); /*0xa2341e*/
  }
}
