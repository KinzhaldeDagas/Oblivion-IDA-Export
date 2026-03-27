void __cdecl sub_A181E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B0558C);
  if ( off_B05590 )
  {
    if ( *off_B05590 == 0x53 )
      FormHeapFree((unsigned int)off_B05590);
  }
}
