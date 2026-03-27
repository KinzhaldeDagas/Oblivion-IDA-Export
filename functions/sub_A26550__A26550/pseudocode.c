void __cdecl sub_A26550()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B162BC);
  if ( off_B162C0 )
  {
    if ( *off_B162C0 == 0x53 )
      FormHeapFree((unsigned int)off_B162C0);
  }
}
