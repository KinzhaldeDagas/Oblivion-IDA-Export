void __cdecl sub_A17A10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bCheckRuntimeCollisions_Archive); /*0xa17a1a*/
  if ( off_B04434 ) /*0xa17a26*/
  {
    if ( *off_B04434 == 0x53 ) /*0xa17a2b*/
      FormHeapFree((unsigned int)off_B04434); /*0xa17a2e*/
  }
}
