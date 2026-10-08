void __cdecl sub_A1A3C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B07090); /*0xa1a3ca*/
  if ( off_B07094 ) /*0xa1a3d6*/
  {
    if ( *off_B07094 == 0x53 ) /*0xa1a3db*/
      FormHeapFree((unsigned int)off_B07094); /*0xa1a3de*/
  }
}
