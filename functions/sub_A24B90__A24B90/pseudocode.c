void __cdecl sub_A24B90()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B14130); /*0xa24b9a*/
  if ( off_B14134 ) /*0xa24ba6*/
  {
    if ( *off_B14134 == 0x53 ) /*0xa24bab*/
      FormHeapFree((unsigned int)off_B14134); /*0xa24bae*/
  }
}
