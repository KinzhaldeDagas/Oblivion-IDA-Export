void __cdecl sub_A24FF0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14834);
  if ( off_B14838 )
  {
    if ( *off_B14838 == 0x53 )
      FormHeapFree((unsigned int)off_B14838);
  }
}
