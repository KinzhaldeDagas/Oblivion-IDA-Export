void __cdecl sub_A17F00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iIdentityBatchRemove); /*0xa17f0a*/
  if ( off_B05230 ) /*0xa17f16*/
  {
    if ( *off_B05230 == 0x53 ) /*0xa17f1b*/
      FormHeapFree((unsigned int)off_B05230); /*0xa17f1e*/
  }
}
