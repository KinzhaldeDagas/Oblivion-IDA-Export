void __cdecl sub_A193E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06DCC); /*0xa193ea*/
  if ( off_B06DD0 ) /*0xa193f6*/
  {
    if ( *off_B06DD0 == 0x53 ) /*0xa193fb*/
      FormHeapFree((unsigned int)off_B06DD0); /*0xa193fe*/
  }
}
