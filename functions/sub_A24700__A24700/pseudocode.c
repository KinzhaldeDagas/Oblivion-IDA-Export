void __cdecl sub_A24700()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B135C8);
  if ( off_B135CC )
  {
    if ( *off_B135CC == 0x53 )
      FormHeapFree((unsigned int)off_B135CC);
  }
}
