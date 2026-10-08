void __cdecl sub_A184A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bFixAIOnLoad); /*0xa184aa*/
  if ( off_B05DC4[0] ) /*0xa184b6*/
  {
    if ( *off_B05DC4[0] == 0x53 ) /*0xa184bb*/
      FormHeapFree((unsigned int)off_B05DC4[0]); /*0xa184be*/
  }
}
