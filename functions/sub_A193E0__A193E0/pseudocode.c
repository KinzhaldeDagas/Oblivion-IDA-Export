void __cdecl sub_A193E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06DCC);
  if ( off_B06DD0 )
  {
    if ( *off_B06DD0 == 0x53 )
      FormHeapFree((unsigned int)off_B06DD0);
  }
}
