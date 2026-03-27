void __cdecl sub_A1A630()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B3524C);
  if ( dword_B35250 )
  {
    if ( *(_BYTE *)dword_B35250 == 0x53 )
      FormHeapFree(dword_B35250);
  }
}
