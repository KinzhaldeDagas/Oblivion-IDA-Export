void __cdecl sub_A234C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B120FC); /*0xa234ca*/
  if ( off_B12100 ) /*0xa234d6*/
  {
    if ( *off_B12100 == 0x53 ) /*0xa234db*/
      FormHeapFree((unsigned int)off_B12100); /*0xa234de*/
  }
}
