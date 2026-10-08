void __cdecl sub_A1A2A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B07060); /*0xa1a2aa*/
  if ( off_B07064 ) /*0xa1a2b6*/
  {
    if ( *off_B07064 == 0x53 ) /*0xa1a2bb*/
      FormHeapFree((unsigned int)off_B07064); /*0xa1a2be*/
  }
}
