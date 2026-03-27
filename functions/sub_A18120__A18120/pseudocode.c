void __cdecl sub_A18120()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B0556C);
  if ( off_B05570[0] )
  {
    if ( *off_B05570[0] == 0x53 )
      FormHeapFree((unsigned int)off_B05570[0]);
  }
}
