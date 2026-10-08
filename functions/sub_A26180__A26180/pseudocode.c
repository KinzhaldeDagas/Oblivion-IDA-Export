void __cdecl sub_A26180()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&useSoundDebugInfo); /*0xa2618a*/
  if ( off_B161C4 ) /*0xa26196*/
  {
    if ( *off_B161C4 == 0x53 ) /*0xa2619b*/
      FormHeapFree((unsigned int)off_B161C4); /*0xa2619e*/
  }
}
