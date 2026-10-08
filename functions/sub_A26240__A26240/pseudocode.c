void __cdecl sub_A26240()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B161E0); /*0xa2624a*/
  if ( off_B161E4[0] ) /*0xa26256*/
  {
    if ( *off_B161E4[0] == 0x53 ) /*0xa2625b*/
      FormHeapFree((unsigned int)off_B161E4[0]); /*0xa2625e*/
  }
}
