void __cdecl sub_A26340()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B16264);
  if ( off_B16268 )
  {
    if ( *off_B16268 == 0x53 )
      FormHeapFree((unsigned int)off_B16268);
  }
}
