void __cdecl sub_A18180()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B0557C); /*0xa1818a*/
  if ( off_B05580 ) /*0xa18196*/
  {
    if ( *off_B05580 == 0x53 ) /*0xa1819b*/
      FormHeapFree((unsigned int)off_B05580); /*0xa1819e*/
  }
}
