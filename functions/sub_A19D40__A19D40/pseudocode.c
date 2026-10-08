void __cdecl sub_A19D40()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&g_bDecalsOnSkinnedGeometry_Display); /*0xa19d4a*/
  if ( off_B06F60 ) /*0xa19d56*/
  {
    if ( *off_B06F60 == 0x53 ) /*0xa19d5b*/
      FormHeapFree((unsigned int)off_B06F60); /*0xa19d5e*/
  }
}
