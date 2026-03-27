void __cdecl sub_A17210()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B0311C);
  if ( off_B03120 )
  {
    if ( *off_B03120 == 0x53 )
      FormHeapFree((unsigned int)off_B03120);
  }
}
