void __cdecl sub_A18770()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B068E0); /*0xa1877a*/
  if ( off_B068E4[0] ) /*0xa18786*/
  {
    if ( *off_B068E4[0] == 0x53 ) /*0xa1878b*/
      FormHeapFree((unsigned int)off_B068E4[0]); /*0xa1878e*/
  }
}
