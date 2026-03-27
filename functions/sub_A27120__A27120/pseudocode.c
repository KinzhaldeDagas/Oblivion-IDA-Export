void __cdecl sub_A27120()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iDistantLODGroupWidth_DistantLOD);
  if ( off_B2C360 )
  {
    if ( *off_B2C360 == 0x53 )
      FormHeapFree((unsigned int)off_B2C360);
  }
}
