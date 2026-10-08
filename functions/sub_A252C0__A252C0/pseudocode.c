void __cdecl sub_A252C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&trackAllDeath); /*0xa252ca*/
  if ( off_B148C8 ) /*0xa252d6*/
  {
    if ( *off_B148C8 == 0x53 ) /*0xa252db*/
      FormHeapFree((unsigned int)off_B148C8); /*0xa252de*/
  }
}
