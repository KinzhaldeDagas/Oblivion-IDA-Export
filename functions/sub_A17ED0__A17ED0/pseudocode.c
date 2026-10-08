void __cdecl sub_A17ED0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iMaxPickHavok); /*0xa17eda*/
  if ( off_B05228 ) /*0xa17ee6*/
  {
    if ( *off_B05228 == 0x53 ) /*0xa17eeb*/
      FormHeapFree((unsigned int)off_B05228); /*0xa17eee*/
  }
}
