void __cdecl sub_A24340()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B12E2C); /*0xa2434a*/
  if ( off_B12E30[0] ) /*0xa24356*/
  {
    if ( *off_B12E30[0] == 0x53 ) /*0xa2435b*/
      FormHeapFree((unsigned int)off_B12E30[0]); /*0xa2435e*/
  }
}
