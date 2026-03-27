void __cdecl sub_A19590()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E14);
  if ( off_B06E18 )
  {
    if ( *off_B06E18 == 0x53 )
      FormHeapFree((unsigned int)off_B06E18);
  }
}
