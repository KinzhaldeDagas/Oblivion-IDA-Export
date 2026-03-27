void __cdecl sub_A1A660()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B35264);
  if ( dword_B35268 )
  {
    if ( *(_BYTE *)dword_B35268 == 0x53 )
      FormHeapFree(dword_B35268);
  }
}
