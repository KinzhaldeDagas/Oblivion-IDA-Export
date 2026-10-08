void __cdecl sub_A24310()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B12E24); /*0xa2431a*/
  if ( off_B12E28[0] ) /*0xa24326*/
  {
    if ( *off_B12E28[0] == 0x53 ) /*0xa2432b*/
      FormHeapFree((unsigned int)off_B12E28[0]); /*0xa2432e*/
  }
}
