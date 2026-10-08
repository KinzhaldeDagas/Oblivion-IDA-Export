void __cdecl sub_A24BC0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&aPURJ); /*0xa24bca*/
  if ( off_B1413C ) /*0xa24bd6*/
  {
    if ( *off_B1413C == 0x53 ) /*0xa24bdb*/
      FormHeapFree((unsigned int)off_B1413C); /*0xa24bde*/
  }
}
