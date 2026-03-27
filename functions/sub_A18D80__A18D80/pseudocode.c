void __cdecl sub_A18D80()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06CBC);
  if ( off_B06CC0 )
  {
    if ( *off_B06CC0 == 0x53 )
      FormHeapFree((unsigned int)off_B06CC0);
  }
}
