void __cdecl sub_A24880()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B13608); /*0xa2488a*/
  if ( off_B1360C ) /*0xa24896*/
  {
    if ( *off_B1360C == 0x53 ) /*0xa2489b*/
      FormHeapFree((unsigned int)off_B1360C); /*0xa2489e*/
  }
}
