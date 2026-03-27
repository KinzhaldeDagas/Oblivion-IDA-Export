void __cdecl sub_A192F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bAllowSM20Hair);
  if ( off_B06DA8 )
  {
    if ( *off_B06DA8 == 0x53 )
      FormHeapFree((unsigned int)off_B06DA8);
  }
}
