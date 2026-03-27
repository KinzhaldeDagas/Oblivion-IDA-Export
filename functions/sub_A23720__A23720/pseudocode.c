void __cdecl sub_A23720()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B12618);
  if ( off_B1261C )
  {
    if ( *off_B1261C == 0x53 )
      FormHeapFree((unsigned int)off_B1261C);
  }
}
