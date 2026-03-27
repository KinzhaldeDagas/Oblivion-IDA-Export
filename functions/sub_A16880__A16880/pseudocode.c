void __cdecl sub_A16880()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02CD0);
  if ( off_B02CD4 )
  {
    if ( *off_B02CD4 == 0x53 )
      FormHeapFree((unsigned int)off_B02CD4);
  }
}
