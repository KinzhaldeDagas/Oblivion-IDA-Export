void __cdecl sub_A171E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B030C4);
  if ( off_B030C8[0] )
  {
    if ( *off_B030C8[0] == 0x53 )
      FormHeapFree((unsigned int)off_B030C8[0]);
  }
}
