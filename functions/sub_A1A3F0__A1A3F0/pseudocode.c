void __cdecl sub_A1A3F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&useWaterLOD);
  if ( off_B0709C )
  {
    if ( *off_B0709C == 0x53 )
      FormHeapFree((unsigned int)off_B0709C);
  }
}
