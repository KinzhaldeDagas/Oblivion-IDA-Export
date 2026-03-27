void __cdecl sub_A260F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B161A8);
  if ( off_B161AC )
  {
    if ( *off_B161AC == 0x53 )
      FormHeapFree((unsigned int)off_B161AC);
  }
}
