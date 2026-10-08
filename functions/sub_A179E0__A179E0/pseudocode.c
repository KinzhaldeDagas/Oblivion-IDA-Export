void __cdecl sub_A179E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bUseArchives_Archive); /*0xa179ea*/
  if ( off_B0442C ) /*0xa179f6*/
  {
    if ( *off_B0442C == 0x53 ) /*0xa179fb*/
      FormHeapFree((unsigned int)off_B0442C); /*0xa179fe*/
  }
}
