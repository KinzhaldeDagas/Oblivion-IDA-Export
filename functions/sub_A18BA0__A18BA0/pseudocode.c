void __cdecl sub_A18BA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06C6C);
  if ( off_B06C70 )
  {
    if ( *off_B06C70 == 0x53 )
      FormHeapFree((unsigned int)off_B06C70);
  }
}
