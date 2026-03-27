void __cdecl sub_A19320()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06DAC);
  if ( off_B06DB0 )
  {
    if ( *off_B06DB0 == 0x53 )
      FormHeapFree((unsigned int)off_B06DB0);
  }
}
