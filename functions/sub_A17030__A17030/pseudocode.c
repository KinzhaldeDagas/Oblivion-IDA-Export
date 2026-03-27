void __cdecl sub_A17030()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iDebugTextLeftRightOffset);
  if ( off_B02E28[0] )
  {
    if ( *off_B02E28[0] == 0x53 )
      FormHeapFree((unsigned int)off_B02E28[0]);
  }
}
