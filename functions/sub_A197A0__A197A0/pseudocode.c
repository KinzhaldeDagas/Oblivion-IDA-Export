void __cdecl sub_A197A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06E6C); /*0xa197aa*/
  if ( off_B06E70 ) /*0xa197b6*/
  {
    if ( *off_B06E70 == 0x53 ) /*0xa197bb*/
      FormHeapFree((unsigned int)off_B06E70); /*0xa197be*/
  }
}
