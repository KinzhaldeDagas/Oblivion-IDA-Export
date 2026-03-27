void __cdecl sub_A16C10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B02D68);
  if ( off_B02D6C )
  {
    if ( *off_B02D6C == 0x53 )
      FormHeapFree((unsigned int)off_B02D6C);
  }
}
