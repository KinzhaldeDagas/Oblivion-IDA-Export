void __cdecl sub_A25EA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bDebugSmoothing);
  if ( off_B15820 )
  {
    if ( *off_B15820 == 0x53 )
      FormHeapFree((unsigned int)off_B15820);
  }
}
