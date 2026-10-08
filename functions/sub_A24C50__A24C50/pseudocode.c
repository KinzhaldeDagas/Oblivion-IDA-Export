void __cdecl sub_A24C50()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B14150); /*0xa24c5a*/
  if ( off_B14154 ) /*0xa24c66*/
  {
    if ( *off_B14154 == 0x53 ) /*0xa24c6b*/
      FormHeapFree((unsigned int)off_B14154); /*0xa24c6e*/
  }
}
