void __cdecl sub_A26580()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B162C4);
  if ( off_B162C8 )
  {
    if ( *off_B162C8 == 0x53 )
      FormHeapFree((unsigned int)off_B162C8);
  }
}
