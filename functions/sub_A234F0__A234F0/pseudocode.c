void __cdecl sub_A234F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B12104); /*0xa234fa*/
  if ( off_B12108 ) /*0xa23506*/
  {
    if ( *off_B12108 == 0x53 ) /*0xa2350b*/
      FormHeapFree((unsigned int)off_B12108); /*0xa2350e*/
  }
}
