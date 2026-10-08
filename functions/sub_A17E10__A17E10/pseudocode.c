void __cdecl sub_A17E10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B05204); /*0xa17e1a*/
  if ( off_B05208 ) /*0xa17e26*/
  {
    if ( *off_B05208 == 0x53 ) /*0xa17e2b*/
      FormHeapFree((unsigned int)off_B05208); /*0xa17e2e*/
  }
}
