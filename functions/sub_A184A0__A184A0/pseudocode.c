void __cdecl sub_A184A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bFixAIOnLoad);
  if ( off_B05DC4[0] )
  {
    if ( *off_B05DC4[0] == 0x53 )
      FormHeapFree((unsigned int)off_B05DC4[0]);
  }
}
