void __cdecl sub_A265B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B162CC);
  if ( off_B162D0 )
  {
    if ( *off_B162D0 == 0x53 )
      FormHeapFree((unsigned int)off_B162D0);
  }
}
