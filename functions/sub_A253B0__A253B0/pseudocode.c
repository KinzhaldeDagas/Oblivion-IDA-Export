void __cdecl sub_A253B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B148EC);
  if ( off_B148F0 )
  {
    if ( *off_B148F0 == 0x53 )
      FormHeapFree((unsigned int)off_B148F0);
  }
}
