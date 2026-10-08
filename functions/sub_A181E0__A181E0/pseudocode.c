void __cdecl sub_A181E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B0558C); /*0xa181ea*/
  if ( off_B05590 ) /*0xa181f6*/
  {
    if ( *off_B05590 == 0x53 ) /*0xa181fb*/
      FormHeapFree((unsigned int)off_B05590); /*0xa181fe*/
  }
}
