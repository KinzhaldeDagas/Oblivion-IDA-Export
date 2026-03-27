void __cdecl sub_A236F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B12610);
  if ( off_B12614 )
  {
    if ( *off_B12614 == 0x53 )
      FormHeapFree((unsigned int)off_B12614);
  }
}
