void __cdecl sub_A1A8E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B07634);
  if ( off_B07638 )
  {
    if ( *off_B07638 == 0x53 )
      FormHeapFree((unsigned int)off_B07638);
  }
}
