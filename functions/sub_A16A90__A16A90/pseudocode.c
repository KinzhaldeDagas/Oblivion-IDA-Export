void __cdecl sub_A16A90()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B02D28); /*0xa16a9a*/
  if ( off_B02D2C ) /*0xa16aa6*/
  {
    if ( *off_B02D2C == 0x53 ) /*0xa16aab*/
      FormHeapFree((unsigned int)off_B02D2C); /*0xa16aae*/
  }
}
