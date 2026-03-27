void __cdecl sub_A1A420()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&useWaterDepth);
  if ( off_B070A4 )
  {
    if ( *off_B070A4 == 0x53 )
      FormHeapFree((unsigned int)off_B070A4);
  }
}
