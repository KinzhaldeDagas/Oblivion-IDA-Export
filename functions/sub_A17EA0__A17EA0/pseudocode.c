void __cdecl sub_A17EA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bBipedWhenKeyframed);
  if ( off_B05220 )
  {
    if ( *off_B05220 == 0x53 )
      FormHeapFree((unsigned int)off_B05220);
  }
}
