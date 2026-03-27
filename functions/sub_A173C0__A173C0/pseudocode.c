void __cdecl sub_A173C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B03164);
  if ( off_B03168 )
  {
    if ( *off_B03168 == 0x53 )
      FormHeapFree((unsigned int)off_B03168);
  }
}
