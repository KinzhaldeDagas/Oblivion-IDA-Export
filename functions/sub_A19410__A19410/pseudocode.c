void __cdecl sub_A19410()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06DD4);
  if ( off_B06DD8 )
  {
    if ( *off_B06DD8 == 0x53 )
      FormHeapFree((unsigned int)off_B06DD8);
  }
}
