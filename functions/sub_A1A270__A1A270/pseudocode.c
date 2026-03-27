void __cdecl sub_A1A270()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bUseWaterHiRes);
  if ( off_B0705C )
  {
    if ( *off_B0705C == 0x53 )
      FormHeapFree((unsigned int)off_B0705C);
  }
}
