void __cdecl sub_A23430()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B120E4); /*0xa2343a*/
  if ( off_B120E8 ) /*0xa23446*/
  {
    if ( *off_B120E8 == 0x53 ) /*0xa2344b*/
      FormHeapFree((unsigned int)off_B120E8); /*0xa2344e*/
  }
}
