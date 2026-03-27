void __cdecl sub_A19170()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06D64);
  if ( off_B06D68 )
  {
    if ( *off_B06D68 == 0x53 )
      FormHeapFree((unsigned int)off_B06D68);
  }
}
