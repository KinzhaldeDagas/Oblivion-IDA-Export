void __cdecl sub_A243D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B13200); /*0xa243da*/
  if ( off_B13204 ) /*0xa243e6*/
  {
    if ( *off_B13204 == 0x53 ) /*0xa243eb*/
      FormHeapFree((unsigned int)off_B13204); /*0xa243ee*/
  }
}
