void __cdecl sub_A25ED0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B15824);
  if ( off_B15828 )
  {
    if ( *off_B15828 == 0x53 )
      FormHeapFree((unsigned int)off_B15828);
  }
}
