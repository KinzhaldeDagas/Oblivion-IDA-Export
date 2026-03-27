void __cdecl sub_A17E70()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&fMoveMassLimit);
  if ( off_B05218 )
  {
    if ( *off_B05218 == 0x53 )
      FormHeapFree((unsigned int)off_B05218);
  }
}
