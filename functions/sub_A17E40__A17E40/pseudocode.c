void __cdecl sub_A17E40()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iUpdateType); /*0xa17e4a*/
  if ( off_B05210 ) /*0xa17e56*/
  {
    if ( *off_B05210 == 0x53 ) /*0xa17e5b*/
      FormHeapFree((unsigned int)off_B05210); /*0xa17e5e*/
  }
}
