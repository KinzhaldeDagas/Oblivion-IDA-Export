void __cdecl sub_A171B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B030BC);
  if ( off_B030C0 )
  {
    if ( *off_B030C0 == 0x53 )
      FormHeapFree((unsigned int)off_B030C0);
  }
}
