void __cdecl sub_A26030()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B16188);
  if ( off_B1618C )
  {
    if ( *off_B1618C == 0x53 )
      FormHeapFree((unsigned int)off_B1618C);
  }
}
