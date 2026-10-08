void __cdecl sub_A16A30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B02D18); /*0xa16a3a*/
  if ( off_B02D1C ) /*0xa16a46*/
  {
    if ( *off_B02D1C == 0x53 ) /*0xa16a4b*/
      FormHeapFree((unsigned int)off_B02D1C); /*0xa16a4e*/
  }
}
