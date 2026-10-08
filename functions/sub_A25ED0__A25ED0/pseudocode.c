void __cdecl sub_A25ED0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B15824); /*0xa25eda*/
  if ( off_B15828 ) /*0xa25ee6*/
  {
    if ( *off_B15828 == 0x53 ) /*0xa25eeb*/
      FormHeapFree((unsigned int)off_B15828); /*0xa25eee*/
  }
}
