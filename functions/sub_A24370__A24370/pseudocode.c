void __cdecl sub_A24370()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B12E34); /*0xa2437a*/
  if ( off_B12E38[0] ) /*0xa24386*/
  {
    if ( *off_B12E38[0] == 0x53 ) /*0xa2438b*/
      FormHeapFree((unsigned int)off_B12E38[0]); /*0xa2438e*/
  }
}
