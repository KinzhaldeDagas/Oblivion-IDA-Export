void __cdecl sub_A18770()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B068E0);
  if ( off_B068E4[0] )
  {
    if ( *off_B068E4[0] == 0x53 )
      FormHeapFree((unsigned int)off_B068E4[0]);
  }
}
